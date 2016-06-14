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

#include "gnome_memory.h"

void gnome_store_reg(uint8_t regist) {
    if (GNOME_VIA_ACTIVE) {
        reg8 *mem_mapped_reg;
        uint8_t intermediateValue;
        switch (regist & 0x0F) {
            #if !defined(GNOME_VIA_CONFIG_OUT_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_CONFIG:
                if(via_state.config_mask & 0x80) {
                    mem_mapped_reg = GNOME_VIA_CONFIG_OUT_ADDR;
                    intermediateValue = *mem_mapped_reg & ~via_state.config_mask; // Ponemos a cero los bit de la mascara
                    *mem_mapped_reg = ((current_context->accumulator & via_state.config_mask) | intermediateValue) & ((1<<GNOME_WORD_SIZE) -1);
                    via_state.config_mask = 0;
                } else {
                    // 0x80 indica una petición de escritura, incluso si la máscara es cero.
                    via_state.config_mask = current_context->accumulator | 0x80;
                }
                break;
            #endif
            #if !defined(GNOME_VIA_PORT0_OUT_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_PORT0:
                mem_mapped_reg = GNOME_VIA_PORT0_OUT_ADDR;
                if (via_state.port0_ptr) {
                    intermediateValue = 0x0F & *mem_mapped_reg;
                    *mem_mapped_reg =  (intermediateValue + (current_context->accumulator << 4));
                } else {
                    intermediateValue = 0xF0 & *mem_mapped_reg;
                    *mem_mapped_reg =  (intermediateValue + current_context->accumulator);
                }
                via_state.port0_ptr = !via_state.port0_ptr;
                break;
            #endif
            #if !defined(GNOME_VIA_PORT1_OUT_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_PORT1:
                mem_mapped_reg = GNOME_VIA_PORT1_OUT_ADDR;
                if (via_state.port1_ptr) {
                    intermediateValue = 0x0F & *mem_mapped_reg;
                    *mem_mapped_reg =  (intermediateValue + (current_context->accumulator << 4));
                } else {
                    intermediateValue = 0xF0 & *mem_mapped_reg;
                    *mem_mapped_reg =  (intermediateValue + current_context->accumulator);
                }
                via_state.port1_ptr = !via_state.port1_ptr;                
                break;
            #endif
            default:
                registers[regist & 0x0f] = current_context->accumulator & ((1<<GNOME_WORD_SIZE) -1);
                break;
        }
    } else {
        registers[regist & 0x0f] = current_context->accumulator;
    }
}

uint8_t gnome_load_reg(uint8_t regist) {
    if (GNOME_VIA_ACTIVE) {
        reg8 *mem_mapped_reg;
        uint8_t retVal;
        switch (regist & 0xF) {
            #if !defined(GNOME_VIA_CONFIG_IN_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_CONFIG:
                mem_mapped_reg = GNOME_VIA_CONFIG_IN_ADDR;
                retVal = (*mem_mapped_reg) & 0x0F;
                break;
            #endif
            #if !defined(GNOME_VIA_PORT0_IN_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_PORT0:
                mem_mapped_reg = GNOME_VIA_PORT0_IN_ADDR;
                if (via_state.port0_ptr) {
                    retVal = (((*mem_mapped_reg) & 0xF0) >> 4) & ((1<<GNOME_WORD_SIZE) -1);
                } else {
                    retVal = (*mem_mapped_reg) & ((1<<GNOME_WORD_SIZE) -1);
                }
                via_state.port0_ptr = !via_state.port0_ptr;
                break;
            #endif
            #if !defined(GNOME_VIA_PORT1_IN_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_PORT1:
                mem_mapped_reg = GNOME_VIA_PORT1_IN_ADDR;
                if (via_state.port1_ptr) {
                    retVal = (((*mem_mapped_reg) & 0xF0) >> 4) & ((1<<GNOME_WORD_SIZE) -1);
                } else {
                    retVal = (*mem_mapped_reg) & ((1<<GNOME_WORD_SIZE) -1);
                }
                via_state.port1_ptr = !via_state.port1_ptr;                
                break;
            #endif
            default:
               retVal = registers[regist & 0x0F] &((1<<GNOME_WORD_SIZE) -1);
                break;
        }
        return retVal;
    } else {
        return registers[regist & 0x0f] & ((1<<GNOME_WORD_SIZE) -1);
    }
}


uint8_t gnome_debug_load_reg(uint8_t regist) {
    if (GNOME_VIA_ACTIVE) {
        reg8 *mem_mapped_reg;
        uint8_t retVal;
        switch (regist & 0xF) {
            #if !defined(GNOME_VIA_CONFIG_IN_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_CONFIG:
                mem_mapped_reg = GNOME_VIA_CONFIG_IN_ADDR;
                retVal = *mem_mapped_reg;
                break;
            #endif
            #if !defined(GNOME_VIA_PORT0_IN_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_PORT0:
                mem_mapped_reg = GNOME_VIA_PORT0_IN_ADDR;
                retVal = *mem_mapped_reg;
                break;
            #endif
            #if !defined(GNOME_VIA_PORT1_IN_OPT_OUT) /* Check for removal by optimization */
            case GNOME_VIA_PORT1:
                mem_mapped_reg = GNOME_VIA_PORT1_IN_ADDR;
                retVal = *mem_mapped_reg;
                break;
            #endif
            default:
               retVal = registers[regist & 0x0F] &((1<<GNOME_WORD_SIZE) -1);
                break;
        }
        return retVal;
    } else {
        return registers[regist & 0x0f] & ((1<<GNOME_WORD_SIZE) -1);
    }
}

/* [] END OF FILE */
