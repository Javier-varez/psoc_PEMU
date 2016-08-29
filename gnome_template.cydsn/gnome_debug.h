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

#ifndef GNOME_DEBUG
#define GNOME_DEBUG
    
#include "gnome.h"
#include "gnome_config.h"
    
typedef struct {
    uint8_t pc;
    uint8_t active;
} Breakpoint_typedef;

typedef struct {
    uint8_t active;
    volatile uint8_t stop;
    Breakpoint_typedef breakpoints[GNOME_DEBUGGING_MAX_BREAKPOINTS];
} Debug_state_typedef;

Debug_state_typedef gnome_debug_state;

typedef struct {
    char buffer[GNOME_DEBUG_MAX_BUFFER_LENGTH];
    uint8_t ptr;
} Debug_console_typedef;

Debug_console_typedef gnome_console;

void gnome_debug_init();
void gnome_debug_loop(uint8_t code);

void gnome_debug_print_state(uint8_t code);

#endif

/* [] END OF FILE */
