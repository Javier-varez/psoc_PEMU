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

#include "gnome_inst_decoder.h"

inst_enum decodeInstruction(uint8_t code) {
    if (!(code & 0xF0)) {
        switch(code & 0x0F) {
            case 0x00:
                return clear_c;
                break;
            case 0x01:
                return set_c;
                break;
            case 0x02:
                return skip_c;
                break;
            case 0x03:
                return skip_z;
                break;
            case 0x04:
                return push;
                break;
            case 0x05: 
                return rts;
                break;
            case 0x06:
                return jsr;
                break;
            case 0x07:
                return rti;
                break;
            case 0x08:
                return branch;
                break;
            case 0x09:
                return ror;
                break;
            case 0x0A:
                return rol;
                break;
            case 0x0B:
                return nop;
            default:
                return nop;
                break;
        }
    }
    else if (code & 0x80) {
        return jmp_add;
    }
    else {
        switch ((code & 0xF0) >> 4) {
            case 0x01:
                return load_d;
                break;
            case 0x02:
                return add_d;
                break;
            case 0x03:
                return store_rd;
                break;
            case 0x04:
                return load_rd;
                break;
            case 0x05:
                return add_rd;
                break;
            case 0x06:
                return xor_rd;
                break;
            case 0x07:
                return and_rd;
                break;
            default:
                return nop;
                break;
        }
    }
    
    // Si ninguna instrucción tiene asociada el codigo
    return nop;
}

/* [] END OF FILE */
