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

#include "gnome_execute.h"
#include "gnome_memory.h"

// CLEAR_C
// C: Pone a 0
// Z: No Actualiza
void clear_c_inst() {
    current_context->flags.C = 0;
}

// SET_C
// C: Pone a 1
// Z: No Actualiza
void set_c_inst() {
    current_context->flags.C = 1;
}

// SKIP_C
// C: No Actualiza
// Z: No Actualiza
void skip_c_inst() {
    if (current_context->flags.C)
        current_context->PC++;
}

// SKIP_Z
// C: No Actualiza
// Z: No Actualiza
void skip_z_inst() {
    if (current_context->flags.Z)
        current_context->PC++;
}

// Push
// C: No Actualiza
// Z: No Actualiza
void push_inst() {
    current_context->ind_addr_reg.data &= 0x0F << 4* (!(0x01 & current_context->ind_addr_reg.ptr));
    current_context->ind_addr_reg.data += current_context->accumulator << 4*(0x01 & current_context->ind_addr_reg.ptr);
    current_context->ind_addr_reg.ptr = !current_context->ind_addr_reg.ptr;
}

// RTS
// C: No Actualiza
// Z: No Actualiza
void rts_inst() {
    current_context->PC = current_context->stack.data[current_context->stack.ptr];
    current_context->stack.ptr--;
    if(current_context->stack.ptr >= GNOME_STACK_SIZE) current_context->stack.ptr = GNOME_STACK_SIZE-1;    
}

// JSR
// C: No Actualiza
// Z: No Actualiza
void jsr_inst() {
    current_context->stack.ptr++;
    if(current_context->stack.ptr >= GNOME_STACK_SIZE) 
        current_context->stack.ptr = 0;
    current_context->stack.data[current_context->stack.ptr] = current_context->PC;
    current_context->PC = current_context->ind_addr_reg.data;
}

// RTI
// C: No Actualiza
// Z: No Actualiza
// Sets return flag
void rti_inst() {
    current_context = &normal_context;
}

// BRANCH
// C: No Actualiza
// Z: No Actualiza
void branch_inst() {
    current_context->PC = current_context->ind_addr_reg.data;
}

// ROR
// C: Actualiza
// Z: Actualiza
void ror_inst() {
    uint8_t carry = current_context->flags.C;
    
    if (current_context->accumulator & 0x01)
        current_context->flags.C = 1;
    else 
        current_context->flags.C = 0;
    
    current_context->accumulator = (current_context->accumulator >> 1) + 0x08 * carry;
    
    current_context->flags.Z = current_context->accumulator == 0;
}

// ROL
// C: Actualiza
// Z: Actualiza
void rol_inst() {
    uint8_t carry = current_context->flags.C;
    if (current_context->accumulator & 0x08)
        current_context->flags.C = 1;
    else 
        current_context->flags.C = 0;
    
    current_context->accumulator = ((current_context->accumulator << 1) & 0x0F) + carry;
    
    current_context->flags.Z = current_context->accumulator == 0;
}

// STORE_RD
// C: No Actualiza
// Z: Actualiza
void load_d_inst(uint8_t immediate) {
    current_context->accumulator = 0x0F & immediate;
    
    current_context->flags.Z = current_context->accumulator == 0;
}

// STORE_RD
// C: Actualiza
// Z: Actualiza
void add_d_inst(uint8_t immediate) {
    current_context->accumulator = current_context->accumulator + (0x0F & immediate) + current_context->flags.C;
    
    // Actualiza C
    if (current_context->accumulator & 0x10) {
        current_context->accumulator &= 0x0F;
        current_context->flags.C = 1;
    } else
        current_context->flags.C = 0;
    
    // Actualiza Z
    if (current_context->accumulator == 0)
        current_context->flags.Z = 1;
    else 
        current_context->flags.Z = 0;
}

// STORE_RD
// C: No Actualiza
// Z: No Actualiza
void store_rd_inst(uint8_t regist) {
    gnome_store_reg(regist);
}

// XOR_RD
// C: Not Actualiza
// Z: Actualiza
void load_rd_inst(uint8_t regist) {
    current_context->accumulator = gnome_load_reg(regist);
    
    current_context->flags.Z = current_context->accumulator == 0;
}

// ADD_RD
// C: Actualiza
// Z: Actualiza
void add_rd_inst(uint8_t regist) {
    current_context->accumulator = current_context->accumulator + (0x0F & gnome_load_reg(regist)) + current_context->flags.C;
    
    // Update C
    if (current_context->accumulator & 0x10) {
        current_context->accumulator &= 0x0F;
        current_context->flags.C = 1;
    } else
        current_context->flags.C = 0;
    
    // Update Z
    if (current_context->accumulator == 0)
        current_context->flags.Z = 1;
    else 
        current_context->flags.Z = 0;
}

// XOR_RD
// C: No Actualiza
// Z: Actualiza
void xor_rd_inst(uint8_t regist) {
    current_context->accumulator ^= gnome_load_reg(regist);
    current_context->flags.Z = current_context->accumulator == 0;
}

// AND_RD
// C: No Actualiza
// Z: Actualiza
void and_rd_inst(uint8_t regist) {
    current_context->accumulator &= gnome_load_reg(regist);
    current_context->flags.Z = current_context->accumulator == 0;
}

// AND_RD
// C: No Actualiza
// Z: No Actualiza
void jmp_add_inst(uint8_t regist) {
    #ifdef GNOME_JMP_ADD_ALWAYS_PAGE_0
        current_context->PC = regist;
    #else
        current_context->PC = regist + (0x80 & current_context->PC);
    #endif
}

void exectute(inst_enum inst, uint8_t code) {   
    switch (inst) {
        case clear_c:
            clear_c_inst();
            break;
        case set_c:
            set_c_inst();
            break;
        case skip_c:
            skip_c_inst();
            break;
        case skip_z:
            skip_z_inst();
            break;
        case push:
            push_inst();
            break;
        case rts:
            rts_inst();
            break;
        case jsr:
            jsr_inst();
            break;
        case rti:
            rti_inst();
            break;
        case branch:
            branch_inst();
            break;
        case ror:
            ror_inst();
            break;
        case rol:
            rol_inst();
            break;    
        case nop:
            break;
        case load_d:
            load_d_inst(code & 0x0F);
            break;
        case add_d:
            add_d_inst(code & 0x0F);
            break;
        case store_rd:
            store_rd_inst(code & 0x0F);
            break;
        case load_rd:
            load_rd_inst(code & 0x0F);
            break;
        case add_rd:
            add_rd_inst(code & 0x0F);
            break;
        case xor_rd:
            xor_rd_inst(code & 0x0F);
            break;
        case and_rd:
            and_rd_inst(code & 0x0F);
            break;
        case jmp_add:
            jmp_add_inst(code & 0x7F);
            break;
        default:
            break;
    }
}
/* [] END OF FILE */
