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
#include "gnome_debug.h"
#include "gnome_memory.h"

#if GNOME_DEBUGGING_ON
    #include "UART_RX_IT.h"
    #include <string.h>
    #include <stdlib.h>
#endif

#include <stdio.h>

CY_ISR_PROTO(gnome_tx_uart_it);

void gnome_debug_init() {
    #if (GNOME_DEBUGGING_ON == 1) 
        UART_Start();
        UART_PutString("//////////////////////////////////////\r\n");
        UART_PutString("//---- GNOME DEBUGGING TERMINAL ----//\r\n");
        UART_PutString("//////////////////////////////////////\r\n");
        
        gnome_debug_state.active = 0x01;
        uint8_t i;
        for (i = 0; i < GNOME_DEBUGGING_MAX_BREAKPOINTS; i++) {
            gnome_debug_state.breakpoints[i].active = 0x00;
            gnome_debug_state.breakpoints[i].pc = GNOME_RESET_VECTOR;
        }
        
        gnome_console.ptr = 0;
        
        gnome_debug_state.breakpoints[0].active = 1;
        gnome_debug_state.breakpoints[0].pc = 0x77;
        
        #ifndef GNOME_UART_RX_IT_OPT_OUT
            UART_RX_IT_StartEx(gnome_tx_uart_it);
        #endif
        
    #endif
}

void gnome_debug_loop(uint8_t code) {
    #if(GNOME_DEBUGGING_ON==1) 
        CyGlobalIntDisable;      
        // Check if debugger should activate (by reaching a new breakpoint)
        uint8_t i;
        for (i = 0; i < GNOME_DEBUGGING_MAX_BREAKPOINTS; i++) {
            if ((current_context->PC == gnome_debug_state.breakpoints[i].pc) && gnome_debug_state.breakpoints[i].active) {
                gnome_debug_state.active = 0x01;
                char str[40];
                sprintf(str, "Reached breakpoint at PC = 0x%02x\r\n", current_context->PC);
                UART_PutString(str);
                break;
            }
        }
        
        
        // If debugger is active, print state and wait for user action
        if (gnome_debug_state.active) {
            // Print state
            gnome_debug_print_state(code);
            
            // Wait for user to resume execution or step
            CyGlobalIntDisable;
            gnome_debug_state.stop = 0x01;
            CyGlobalIntEnable;
            while(gnome_debug_state.stop);
        }
        
        CyGlobalIntEnable;
    #endif
}


void gnome_debug_print_state(uint8_t code) {
    #if(GNOME_DEBUGGING_ON==1) 
        char str[40];
        if (current_context == &normal_context) 
            UART_PutString("\tNormal Context\r\n");
        else
            UART_PutString("\tIT Context\r\n");
            
        sprintf(str, "\tPC = 0x%02x\r\n", current_context->PC);
        UART_PutString(str);
        sprintf(str, "\tInstruccion = 0x%02x\r\n", code);
        UART_PutString(str);
        sprintf(str, "\tAcumulador = 0x%02x\r\n", current_context->accumulator);
        UART_PutString(str);
        sprintf(str, "\tC, Z = %d, %d\r\n", current_context->flags.C, current_context->flags.Z);
        UART_PutString(str);
        sprintf(str, "\tREG_DIR_INDIRECTO =  0x%02x\r\n", current_context->ind_addr_reg.data);
        UART_PutString(str);
        
        int i = 0;
        for (i = 0; i < 16; i++) {
            sprintf(str, "\tREG[%d] = 0x%02x\r\n", i, gnome_debug_load_reg(i));
            UART_PutString(str);
        }
        UART_PutString("\r\n");
        for (i = 0; i < GNOME_STACK_SIZE; i++) {
            uint8_t addr = current_context->stack.ptr - i;
            if (addr >= GNOME_STACK_SIZE) addr -= GNOME_STACK_SIZE;
            sprintf(str, "\tSTACK[%d] = 0x%02x\r\n", i, current_context->stack.data[addr]);
            UART_PutString(str);
        }
        sprintf(str, "\tSTACK_PTR = 0x%02x\r\n", current_context->stack.ptr);
        UART_PutString(str);
        
        UART_PutString("\r\n\r\n");
    #endif
}

#if GNOME_DEBUGGING_ON
uint8_t gnome_debug_toggle_breakpoint(uint8_t PC) {
    uint8_t i = 0, found = 0;
    
    // Toggle if it exists on the list
    for (i = 0; i < GNOME_DEBUGGING_MAX_BREAKPOINTS; i++) {
        if (gnome_debug_state.breakpoints[i].pc == PC) {
            gnome_debug_state.breakpoints[i].active = !gnome_debug_state.breakpoints[i].active;
            found = 1 | (gnome_debug_state.breakpoints[i].active << 1);
            break;
        }
    }
    
    // Add to the list
    if (found == 0) {
        for (i = 0; i < GNOME_DEBUGGING_MAX_BREAKPOINTS; i++) {
            if (!gnome_debug_state.breakpoints[i].active) {
                gnome_debug_state.breakpoints[i].pc = PC;
                gnome_debug_state.breakpoints[i].active = 1;
                found = 0x03;
                break;
            }
        }
    }
    
    return found;
}
#endif

CY_ISR(gnome_tx_uart_it) {
    #if GNOME_DEBUGGING_ON
    while(UART_ReadRxStatus() == UART_RX_STS_FIFO_NOTEMPTY) {
        gnome_console.buffer[gnome_console.ptr++] = UART_ReadRxData();
        if (gnome_console.ptr >= GNOME_DEBUG_MAX_BUFFER_LENGTH) gnome_console.ptr = 0;
        if (gnome_console.buffer[gnome_console.ptr-1] == ' ') {
            gnome_debug_state.stop = 0;
            gnome_console.ptr = 0;
        }
        else if (gnome_console.buffer[gnome_console.ptr-1] == 0x1b) {
            if (gnome_debug_state.active) {
                gnome_debug_state.stop = 0;
                gnome_debug_state.active = 0;
                UART_PutString("\r\nPROCESSOR ON RUN MODE\r\n\r\n");
            }
            else { 
                gnome_debug_state.active = 1;
                UART_PutString("\r\nPROCESSOR ON HALT MODE\r\n\r\n");
            }
            gnome_console.ptr = 0;
        }
        else if (gnome_console.buffer[gnome_console.ptr-1] == '\r') {
            gnome_console.buffer[gnome_console.ptr-1] = '\0';
            gnome_console.ptr = 0;
            
            char *substr = strstr(gnome_console.buffer, "TB=0x");
            if (substr) {
                substr += sizeof("TB=0x")-1;
                uint8_t PC = strtol(substr, NULL, 16);
                
                uint8_t state = gnome_debug_toggle_breakpoint(PC);
                if (state & 0x01) {
                    if (state & 0x02) {
                        char str[40];
                        sprintf(str, "Active breakpoint at 0x%02x\r\n", PC);
                        UART_PutString(str);
                    } else {
                        char str[40];
                        sprintf(str, "Eliminated breakpoint at 0x%02x\r\n", PC);
                        UART_PutString(str);
                    }
                }
                else {
                    UART_PutString("All breakpoints are used\r\n");
                }
            }
            else if (strstr(gnome_console.buffer, "LB")) {
                uint8_t i = 0;
                for (i = 0; i < GNOME_DEBUGGING_MAX_BREAKPOINTS; i++) {
                    if (gnome_debug_state.breakpoints[i].active) {
                        char str[40];
                        sprintf(str, "Active breakpoint at 0x%02x\r\n", gnome_debug_state.breakpoints[i].pc);
                        UART_PutString(str);
                    }
                }
            }
        }
        else if (gnome_console.buffer[gnome_console.ptr-1] == 0x7F) {
            gnome_console.ptr--;
            gnome_console.ptr--;
            if (gnome_console.ptr >= GNOME_DEBUG_MAX_BUFFER_LENGTH) gnome_console.ptr = 0;
        }
    }
    #endif
}


/* [] END OF FILE */
