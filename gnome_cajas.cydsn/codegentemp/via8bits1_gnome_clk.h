/*******************************************************************************
* File Name: via8bits1_gnome_clk.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_via8bits1_gnome_clk_H) /* CY_CONTROL_REG_via8bits1_gnome_clk_H */
#define CY_CONTROL_REG_via8bits1_gnome_clk_H

#include "cytypes.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} via8bits1_gnome_clk_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    via8bits1_gnome_clk_Write(uint8 control) ;
uint8   via8bits1_gnome_clk_Read(void) ;

void via8bits1_gnome_clk_SaveConfig(void) ;
void via8bits1_gnome_clk_RestoreConfig(void) ;
void via8bits1_gnome_clk_Sleep(void) ; 
void via8bits1_gnome_clk_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define via8bits1_gnome_clk_Control        (* (reg8 *) via8bits1_gnome_clk_Sync_ctrl_reg__CONTROL_REG )
#define via8bits1_gnome_clk_Control_PTR    (  (reg8 *) via8bits1_gnome_clk_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_via8bits1_gnome_clk_H */


/* [] END OF FILE */
