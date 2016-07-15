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
#include "gnome_it.h"

CY_ISR_PROTO(gnome_process_it);

void gnome_it_init() {
    
    #ifndef GNOME_ISR_OPT_OUT
        ISR_StartEx(gnome_process_it);
    #endif
    
}

CY_ISR(gnome_process_it){
    if (current_context != &it_context) {
        current_context = &it_context;
        
        // Configuracion del vector de interrupcion.
        current_context->PC = GNOME_IT_VECTOR;
    }
}

/* [] END OF FILE */
