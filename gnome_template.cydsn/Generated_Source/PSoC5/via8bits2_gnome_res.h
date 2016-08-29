/*******************************************************************************
* File Name: via8bits2_gnome_res.h  
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

#if !defined(CY_CONTROL_REG_via8bits2_gnome_res_H) /* CY_CONTROL_REG_via8bits2_gnome_res_H */
#define CY_CONTROL_REG_via8bits2_gnome_res_H

#include "cytypes.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} via8bits2_gnome_res_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    via8bits2_gnome_res_Write(uint8 control) ;
uint8   via8bits2_gnome_res_Read(void) ;

void via8bits2_gnome_res_SaveConfig(void) ;
void via8bits2_gnome_res_RestoreConfig(void) ;
void via8bits2_gnome_res_Sleep(void) ; 
void via8bits2_gnome_res_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define via8bits2_gnome_res_Control        (* (reg8 *) via8bits2_gnome_res_Sync_ctrl_reg__CONTROL_REG )
#define via8bits2_gnome_res_Control_PTR    (  (reg8 *) via8bits2_gnome_res_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_via8bits2_gnome_res_H */


/* [] END OF FILE */
