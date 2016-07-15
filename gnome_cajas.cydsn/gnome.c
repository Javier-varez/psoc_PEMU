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
#include "gnome_lcd.h"
#include "gnome_debug.h"
#include "gnome_it.h"

void gnome_switch_clk() {
    #ifndef GNOME_VIA_GNOME_CLK_OPT_OUT 
        // Set CLK pointer
        reg8 *clk = GNOME_VIA_GNOME_CLK_ADDR;
        *clk = !*clk;
    #endif
}

void gnome_assert_reset() {
    #ifndef GNOME_VIA_GNOME_RES_OPT_OUT 
        // Set CLK pointer
        reg8 *res = GNOME_VIA_GNOME_RES_ADDR;
        *res = 1;
        CyDelay(1);
        *res = 0;
    #endif
}

void gnome_power_on_reset() {
    // Se realiza la lectura de los códigos de operacion a ejecutar desde la EEPROM.
    // Inicializa EEPROM
    EEPROM_Start();
    
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
    
    // Carga la memoria de programa desde la EEPROM en RAM
    for(i = 0; i < 256; i++) {
        rom[i] = EEPROM_ReadByte(i);
    }
    
    gnome_assert_reset();
}

void gnome_start() {

    // Config LCD
    setup_lcd(&lcd);
    
    // Reset del micro
    gnome_power_on_reset();
    
    // Inicialización del debugger
    gnome_debug_init();
    
    // Habilitar interrupciones
    gnome_it_init();
    
    uint8_t code = 0;
    while(1) {
        
        gnome_debug_loop(code);
        update_lcd(&lcd);
        
        CyGlobalIntDisable;
        
        gnome_switch_clk();
        
        // Fetch Instruction & Increment PC
        code = rom[current_context->PC & 0xFF]; 
        current_context->PC++;
        
        gnome_switch_clk();
        gnome_switch_clk();
        
        // Decode Instruction
        inst_enum inst = decodeInstruction(code);
        
        gnome_switch_clk();
        gnome_switch_clk();
        
        // Execute instruction
        exectute(inst, code);
        
        gnome_switch_clk();
                
        // Habilitar interrupciones entre instrucciones
        CYGlobalIntEnable;
    }
}

/* [] END OF FILE */
