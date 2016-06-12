/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "gnome.h"
#include "gnome_config.h"
#include "gnome_inst_decoder.h"
#include "gnome_execute.h"
#include "gnome_memory.h"
#include "gnome_program.h"

CY_ISR_PROTO(gnome_process_it);

#if (GNOME_DEBUGGING_ON==1)
    #include <stdio.h>
#endif

void gnome_reset() {
    
    // Inicializa contexto normal
    normal_context.accumulator = 0;
    normal_context.flags.C = 0;
    normal_context.flags.Z = 0;
    normal_context.ind_addr_reg.data = 0;
    normal_context.ind_addr_reg.ptr = 0;
    normal_context.PC = GNOME_RESET_VECTOR;
    normal_context.stack.ptr = 0;
    
    int i = 0;
    for (i = 0; i < GNOME_STACK_SIZE; i++) {
        normal_context.stack.data[i] = 0;
    }
    
    // Inicializa contexto interrupción
    it_context.accumulator = 0;
    it_context.flags.C = 0;
    it_context.flags.Z = 0;
    it_context.ind_addr_reg.data = 0;
    it_context.ind_addr_reg.ptr = 0;
    it_context.PC = GNOME_IT_VECTOR;
    it_context.stack.ptr = 0;
    
    for (i = 0; i < GNOME_STACK_SIZE; i++) {
        it_context.stack.data[i] = 0;
    }
    
    // Inicializa puertos de memoria
    via_state.port0_ptr = 0;
    via_state.port1_ptr = 0;
    
    // Asignamos el contexto de ejecución
    current_context = &normal_context;
}

void gnome_start() {
        
    // Inicializa la UART
    #if (GNOME_DEBUGGING_ON==1)
        UART_Start();
    #endif
    
    // Reset del micro
    gnome_reset();
    
    #if (GNOME_DEBUGGING_ON==1)
        UART_PutString("//////////////////////////////////////\n");
        UART_PutString("//---- GNOME DEBUGGING TERMINAL ----//\n");
        UART_PutString("//////////////////////////////////////\n");
        char str[40];
        if (current_context == &normal_context) 
            UART_PutString("\tNormal Context\n");
        else
            UART_PutString("\tIT Context\n");
            
        sprintf(str, "\tPC = 0x%02x\n", current_context->PC);
        UART_PutString(str);
        sprintf(str, "\tAcc Va= 0x%02x\n", current_context->accumulator);
        UART_PutString(str);
        sprintf(str, "\tC, Z = %d, %d\n", current_context->flags.C, current_context->flags.Z);
        UART_PutString(str);
        sprintf(str, "\tIND_ADDR_REG =  0x%02x\n", current_context->ind_addr_reg.data);
        UART_PutString(str);
        
        int i = 0;
        for (i = 0; i < 16; i++) {
            sprintf(str, "\tREG[%d] = 0x%02x\n", i, gnome_debug_load_reg(i));
            UART_PutString(str);
        }
        UART_PutString("\n\n");
    #endif
    
    // Configure interrupt
    ISR_StartEx(gnome_process_it);
    
    while(1) {
        
        CyGlobalIntDisable;
        // Fetch Instruction & Increment PC
        uint8_t code = rom[current_context->PC & 0xFF]; 
        current_context->PC++;
        
        // Decode Instruction
        inst_enum inst = decodeInstruction(code);
        
        // Execute instruction
        exectute(inst, code);
        
        #if(GNOME_DEBUGGING_ON==1)
            char str[40];
            if (current_context == &normal_context) 
                UART_PutString("\tNormal Context\n");
            else
                UART_PutString("\tIT Context\n");
                
            sprintf(str, "\tPC = 0x%02x\n", current_context->PC);
            UART_PutString(str);
            sprintf(str, "\tAcc = 0x%02x\n", current_context->accumulator);
            UART_PutString(str);
            sprintf(str, "\tC, Z = %d, %d\n", current_context->flags.C, current_context->flags.Z);
            UART_PutString(str);
            sprintf(str, "\tIND_ADDR_REG =  0x%02x\n", current_context->ind_addr_reg.data);
            UART_PutString(str);
            
            int i = 0;
            for (i = 0; i < 16; i++) {
                sprintf(str, "\tREG[%d] = 0x%02x\n", i, gnome_debug_load_reg(i));
                UART_PutString(str);
            }
            UART_PutString("\n");
            for (i = 0; i < GNOME_STACK_SIZE; i++) {
                uint8_t addr = current_context->stack.ptr - i;
                if (addr >= GNOME_STACK_SIZE) addr += GNOME_STACK_SIZE;
                sprintf(str, "\tSTACK[%d] = 0x%02x\n", i, current_context->stack.data[addr]);
                UART_PutString(str);
            }
            sprintf(str, "\tSTACK_PTR = 0x%02x\n", current_context->stack.ptr);
            UART_PutString(str);
            
            UART_PutString("\n\n");
            
            CyDelay(GNOME_DEBUGGING_PERIOD);
        }
        #endif
        // Habilitar interrupciones entre instrucciones
        CyGlobalIntEnable;
    }
}

CY_ISR(gnome_process_it){
    current_context = &it_context;
    
    // Configuracion del vector de interrupcion.
    current_context->PC = GNOME_IT_VECTOR;    
}

/* [] END OF FILE */
