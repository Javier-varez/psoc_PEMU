/*
 * i2cLCD.h
 *
 *  Created on: 26/6/2015
 *      Author: Javier
 */

#include <stdint.h>

#ifndef DRIVERS_I2CLCD_H_
#define DRIVERS_I2CLCD_H_

// Lines for i2c I/O Expander
#define En 0b00000100  // Enable bit
#define Rw 0b00000010  // Read/Write bit
#define Rs 0b00000001  // Register select bit
#define BL 0b00001000 // BL for the LCD

// Commands
#define LCD_CLEARDISPLAY 0x01
#define LCD_RETURNHOME 0x02
#define LCD_ENTRYMODESET 0x04
#define LCD_DISPLAYCONTROL 0x08
#define LCD_CURSORSHIFT 0x10
#define LCD_FUNCTIONSET 0x20
#define LCD_SETCGRAMADDR 0x40
#define LCD_SETDDRAMADDR 0x80

// flags for display entry mode
#define LCD_ENTRYRIGHT 0x00
#define LCD_ENTRYLEFT 0x02
#define LCD_ENTRYSHIFTINCREMENT 0x01
#define LCD_ENTRYSHIFTDECREMENT 0x00

// flags for display on/off control
#define LCD_DISPLAYON 0x04
#define LCD_DISPLAYOFF 0x00
#define LCD_CURSORON 0x02
#define LCD_CURSOROFF 0x00
#define LCD_BLINKON 0x01
#define LCD_BLINKOFF 0x00

// flags for display/cursor shift
#define LCD_DISPLAYMOVE 0x08
#define LCD_CURSORMOVE 0x00
#define LCD_MOVERIGHT 0x04
#define LCD_MOVELEFT 0x00

// flags for function set
#define LCD_8BITMODE 0x10
#define LCD_4BITMODE 0x00
#define LCD_2LINE 0x08
#define LCD_1LINE 0x00
#define LCD_5x10DOTS 0x04
#define LCD_5x8DOTS 0x00

#define LCD_BACKLIGHTON 0x08
#define LCD_BACKLIGHTOFF 0x00

#define MAX_CUSTOM_CHARS 8
#define MAX_CUSTOM_CHAR_IDENTIFIER_LENGTH 16

typedef struct {
	uint8_t devAddress;
	uint8_t backlight;
	uint8_t cursorON;
	uint8_t displayON;
	uint8_t blinkON;
	uint8_t numberOfCustomChars;
	char customCharIdentifiers[MAX_CUSTOM_CHARS][MAX_CUSTOM_CHAR_IDENTIFIER_LENGTH];
} i2cLCD_HandleTypeDef;

// Public functions
void i2cLCD_Init(i2cLCD_HandleTypeDef *lcd, uint16_t address, uint8_t backlight);
void i2cLCD_SendCommand(i2cLCD_HandleTypeDef *lcd, uint8_t command);
void i2cLCD_WriteRAM(i2cLCD_HandleTypeDef *lcd, uint8_t character);
void i2cLCD_Print(i2cLCD_HandleTypeDef *lcd, char string[]);
void i2cLCD_CreateCustomChar(i2cLCD_HandleTypeDef *lcd, uint8_t array[], char *identifier);
void i2cLCD_SetPosition(i2cLCD_HandleTypeDef *lcd, uint8_t row, uint8_t column);
void i2cLCD_ClearDisplay(i2cLCD_HandleTypeDef *lcd);
void i2cLCD_DisplayCustomChar(i2cLCD_HandleTypeDef *lcd, char *identifier);
void i2cLCD_SetCursor(i2cLCD_HandleTypeDef *lcd, uint8_t cursor);
void i2cLCD_SetDisplay(i2cLCD_HandleTypeDef *lcd, uint8_t display);
void i2cLCD_SetBlink(i2cLCD_HandleTypeDef *lcd, uint8_t blink);


#endif /* DRIVERS_I2CLCD_H_ */
