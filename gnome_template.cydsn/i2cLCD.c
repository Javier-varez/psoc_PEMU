/*
 * i2cLCD.c
 *
 *  Created on: 25/6/2015
 *      Author: Javier
 */

#include <Project.h>
#include "i2cLCD.h"
#include <string.h>
#include "gnome_config.h"

#if (GNOME_LCD_MODULE_ACTIVE)
void i2cTransmission(i2cLCD_HandleTypeDef *lcd, uint8_t data) {    
    I2C_MasterClearStatus(); /* Clear any previous status */ 
    I2C_MasterWriteBuf(lcd->devAddress, (uint8 *) &data, 1u, I2C_MODE_COMPLETE_XFER); 
    for(;;) {    
        if(0u != (I2C_MasterStatus() & I2C_MSTAT_WR_CMPLT))    
        {              
            //Should go to error handler function  
            break;    
        } 
    }
}


void send4bitCommand(i2cLCD_HandleTypeDef *lcd, uint8_t data) {
	uint8_t command = data | (lcd->backlight);
	i2cTransmission(lcd, command);
	command = command | En;
	i2cTransmission(lcd, command);
	command = command &~ En;
	i2cTransmission(lcd, command);
}

void set4bitModeLCD(i2cLCD_HandleTypeDef *lcd) {
    
	CyDelay(30);

	send4bitCommand(lcd, 0x30);

	CyDelay(5);

	send4bitCommand(lcd, 0x30);

	CyDelay(1);

	send4bitCommand(lcd, 0x30);

	CyDelay(1);

	send4bitCommand(lcd, 0x20);

	i2cLCD_SendCommand(lcd, 0x28);
}

void setDisplayControl(i2cLCD_HandleTypeDef *lcd) {
	i2cLCD_SendCommand(lcd, LCD_DISPLAYCONTROL|(lcd->blinkON)|(lcd->cursorON)|(lcd->displayON));
}

void i2cLCD_SendCommand(i2cLCD_HandleTypeDef *lcd, uint8_t command) {

	//CyDelay(2);

	uint8_t MSB = command & 0xF0;
	uint8_t LSB = command << 4;

	// Send MSB
	send4bitCommand(lcd, MSB);

	// Wait until the LCD is ready to receive another command
	//CyDelay(2);

	// Send LSB
	send4bitCommand(lcd, LSB);
}

void i2cLCD_Init(i2cLCD_HandleTypeDef *lcd, uint16_t address, uint8_t backlight) {
	lcd->devAddress = address;

	lcd->backlight = backlight;
	lcd->cursorON = LCD_CURSOROFF;
	lcd->blinkON = LCD_BLINKOFF;
	lcd->displayON = LCD_DISPLAYON;
	lcd->numberOfCustomChars = 0;

	set4bitModeLCD(lcd);
	setDisplayControl(lcd);
	i2cLCD_ClearDisplay(lcd);
}

void i2cLCD_WriteRAM(i2cLCD_HandleTypeDef *lcd, uint8_t character) {
	CyDelay(2);//waitForLCDAvailability();

	uint8_t MSB = character & 0xF0;
	uint8_t LSB = character << 4;

	// Send MSB
	MSB = MSB | Rs;
	send4bitCommand(lcd, MSB);

	// Wait until the LCD is ready to receive another command
	//CyDelay(2);

	// Send LSB
	LSB = LSB | Rs;
	send4bitCommand(lcd, LSB);
}

void i2cLCD_Print(i2cLCD_HandleTypeDef *lcd, char string[]) {
	uint8_t length = strlen(string);

	uint8_t i;
	for (i = 0; i < length; i++) {
		i2cLCD_WriteRAM(lcd, string[i]);
	}
}

void i2cLCD_CreateCustomChar(i2cLCD_HandleTypeDef *lcd, uint8_t array[], char *identifier) {
	i2cLCD_SendCommand(lcd, LCD_SETCGRAMADDR|(lcd->numberOfCustomChars << 3));

	//Create a copy of the identifier
	strcpy(lcd->customCharIdentifiers[lcd->numberOfCustomChars], identifier);

	uint8_t i = 0;
	for (i = 0; i<8; i++) {
		i2cLCD_WriteRAM(lcd, array[i]);
	}
	i2cLCD_SetPosition(lcd,0,0);
	//increase by one the number of custom char's
	lcd->numberOfCustomChars++;
}

void i2cLCD_DisplayCustomChar(i2cLCD_HandleTypeDef *lcd, char *identifier) {
	uint8_t i = 0;
	for (i = 0; i<lcd->numberOfCustomChars; i++) {
		if (strcmp(identifier, lcd->customCharIdentifiers[i])==0) {
			i2cLCD_WriteRAM(lcd, i);
		}
	}
}

void i2cLCD_SetPosition(i2cLCD_HandleTypeDef *lcd, uint8_t row, uint8_t column) {
	i2cLCD_SendCommand(lcd, LCD_SETDDRAMADDR|(row*0x40+column));
}

void i2cLCD_ClearDisplay(i2cLCD_HandleTypeDef *lcd) {
	i2cLCD_SendCommand(lcd, LCD_CLEARDISPLAY);
}

void i2cLCD_SetCursor(i2cLCD_HandleTypeDef *lcd, uint8_t cursor) {
	lcd->cursorON = cursor;
	setDisplayControl(lcd);
}

void i2cLCD_SetDisplay(i2cLCD_HandleTypeDef *lcd, uint8_t display) {
	lcd->displayON = display;
	setDisplayControl(lcd);
}

void i2cLCD_SetBlink(i2cLCD_HandleTypeDef *lcd, uint8_t blink) {
	lcd->blinkON = blink;
	setDisplayControl(lcd);
}
#endif
