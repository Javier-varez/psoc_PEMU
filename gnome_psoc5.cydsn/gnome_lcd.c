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

#include "gnome_lcd.h"

void update_lcd_it();

void setup_lcd() {
    #if (GNOME_LCD_MODULE_ACTIVE)
        I2C_Start();
        
        i2cLCD_Init(&lcd, GNOME_LCD_MODULE_I2C_ADDR, LCD_BACKLIGHTON);
        
        CySysTickStart();
        CySysTickSetCallback(4,(void*)update_lcd_it);
        lcd_update = 1;

    #endif
}

void update_lcd_it() {
    if ((CySysTickGetValue() & 0xFF) == 0xFF) {
        lcd_update = 1;
    }
}

void update_lcd() {
    #if (GNOME_LCD_MODULE_ACTIVE) 
        char str[5];
        #ifndef GNOME_LCD_A_OPR_OUT
            reg8* a = GNOME_LCD_A_ADDR;
            i2cLCD_SetPosition(&lcd, 0, 0);
            i2cLCD_Print(&lcd, GNOME_LCD_MODULE_MSG1);
            sprintf(str, "0x%02x", *a);
            i2cLCD_Print(&lcd, str);
        #endif
        #ifndef GNOME_LCD_B_OPR_OUT 
            reg8* b = GNOME_LCD_B_ADDR;
            i2cLCD_SetPosition(&lcd, 1, 0);
            i2cLCD_Print(&lcd, GNOME_LCD_MODULE_MSG2);
            sprintf(str, "0x%02x", *b);
            i2cLCD_Print(&lcd, str);
        #endif
        
    #endif
    lcd_update = 0;
}

/* [] END OF FILE */
