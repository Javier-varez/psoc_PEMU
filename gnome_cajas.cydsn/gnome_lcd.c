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
        i2cLCD_SetPosition(&lcd, 0, 0);
        i2cLCD_Print(&lcd, GNOME_LCD_MODULE_MSG1);
        i2cLCD_SetPosition(&lcd, 1, 0);
        i2cLCD_Print(&lcd, GNOME_LCD_MODULE_MSG2);
        i2cLCD_SetBlink(&lcd,LCD_BLINKON);
        
        CySysTickStart();
        CySysTickSetCallback(4,(void*)update_lcd_it);
        lcd_update = 1;

    #endif
}

void update_lcd_it() {
    if ((CySysTickGetValue() & 0x3F) == 0x3F) {
        lcd_update = 1;
    }
}

void update_lcd() {
    #if (GNOME_LCD_MODULE_ACTIVE) 
        char str[5];
        #ifndef GNOME_LCD_A_OPT_OUT
            reg8* a = GNOME_LCD_A_ADDR;
            i2cLCD_SetPosition(&lcd, 0, GNOME_LCD_LINE_OFFSET1);
            sprintf(str, "%02x", *a);
            i2cLCD_Print(&lcd, str);
        #endif
        #ifndef GNOME_LCD_B_OPT_OUT 
            reg8* b = GNOME_LCD_B_ADDR;
            i2cLCD_SetPosition(&lcd, 1, GNOME_LCD_LINE_OFFSET2);
            sprintf(str, "%02x", *b);
            i2cLCD_Print(&lcd, str);
        #endif
        
    #endif
    lcd_update = 0;
}

/* [] END OF FILE */
