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

#ifndef GNOME_MEMORY
#define GNOME_MEMORY
    
#include "gnome_config.h"
#include "gnome_registers.h"

typedef struct {
    uint8_t config_mask;
    uint8_t port0_ptr;
    uint8_t port1_ptr;
} via_state_t;
    
via_state_t via_state;

void gnome_store_reg(uint8_t regist);
uint8_t gnome_load_reg(uint8_t regist);
uint8_t gnome_debug_load_reg(uint8_t regist);

#endif // GNOME_MEMORY

/* [] END OF FILE */
