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

#ifndef GNOME_REGISTERS
#define GNOME_REGISTERS

#include "project.h"
#include "gnome_config.h"

//////////////////////////////
//// Estructuras de datos ////
//////////////////////////////
    
// ---- Flags ---- //
    
typedef struct {
    uint8_t C;
    uint8_t Z;
} flags_t;

// ---- Stack ---- //

typedef struct {
    uint8_t data[GNOME_STACK_SIZE];
    uint8_t ptr;
} stack_t;

typedef struct {
    uint8_t data;
    uint8_t ptr;
} ind_addr_reg_t;

// ---- Instructions ---- //

typedef enum {
    clear_c,
    set_c,
    skip_c,
    skip_z,
    push,
    rts,
    jsr,
    rti,
    branch,
    ror,
    rol,
    nop,
    load_d,
    add_d,
    store_rd,
    load_rd,
    add_rd,
    xor_rd,
    and_rd,
    jmp_add    
} inst_enum;

// ---- Execution context ---- //

typedef struct {
    uint8_t accumulator;            // Acumulador
    flags_t flags;                  // Flags (C,Z)
    uint8_t PC;                     // Contador de Programa 
    stack_t stack;                  // Pila
    ind_addr_reg_t ind_addr_reg;    // Registro de direccionamiento indirecto (para branch y jsr)
} context_t;

///////////////////
//// Registros ////
///////////////////

context_t normal_context;
context_t it_context;

context_t *current_context;
// Registros de la memoria principal (0xF0 a 0xFF)
uint8_t registers[0x10];

#endif // GNOME_REGISTERS

/* [] END OF FILE */
