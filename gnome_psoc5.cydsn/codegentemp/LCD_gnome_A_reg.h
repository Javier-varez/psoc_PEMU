/*******************************************************************************
* File Name: LCD_gnome_A_reg.h  
* Version 1.90
*
* Description:
*  This file containts Status Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_STATUS_REG_LCD_gnome_A_reg_H) /* CY_STATUS_REG_LCD_gnome_A_reg_H */
#define CY_STATUS_REG_LCD_gnome_A_reg_H

#include "cytypes.h"
#include "CyLib.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 statusState;

} LCD_gnome_A_reg_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

uint8 LCD_gnome_A_reg_Read(void) ;
void LCD_gnome_A_reg_InterruptEnable(void) ;
void LCD_gnome_A_reg_InterruptDisable(void) ;
void LCD_gnome_A_reg_WriteMask(uint8 mask) ;
uint8 LCD_gnome_A_reg_ReadMask(void) ;


/***************************************
*           API Constants
***************************************/

#define LCD_gnome_A_reg_STATUS_INTR_ENBL    0x10u


/***************************************
*         Parameter Constants
***************************************/

/* Status Register Inputs */
#define LCD_gnome_A_reg_INPUTS              8


/***************************************
*             Registers
***************************************/

/* Status Register */
#define LCD_gnome_A_reg_Status             (* (reg8 *) LCD_gnome_A_reg_sts_sts_reg__STATUS_REG )
#define LCD_gnome_A_reg_Status_PTR         (  (reg8 *) LCD_gnome_A_reg_sts_sts_reg__STATUS_REG )
#define LCD_gnome_A_reg_Status_Mask        (* (reg8 *) LCD_gnome_A_reg_sts_sts_reg__MASK_REG )
#define LCD_gnome_A_reg_Status_Aux_Ctrl    (* (reg8 *) LCD_gnome_A_reg_sts_sts_reg__STATUS_AUX_CTL_REG )

#endif /* End CY_STATUS_REG_LCD_gnome_A_reg_H */


/* [] END OF FILE */
