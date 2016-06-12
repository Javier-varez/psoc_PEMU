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
#include <project.h>
#include <gnome.h>

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    gnome_start();
    
    while(1);
}

/* [] END OF FILE */
