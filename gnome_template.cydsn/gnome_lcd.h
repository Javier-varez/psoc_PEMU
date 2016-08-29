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

#include <stdio.h>
#include "project.h"
#include "gnome_config.h"
#include "i2cLCD.h"

i2cLCD_HandleTypeDef lcd;

volatile uint8_t lcd_update;

void setup_lcd();
void update_lcd();

/* [] END OF FILE */
