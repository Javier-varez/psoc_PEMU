/*******************************************************************************
* File Name: via8bits_Stat.h  
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

#if !defined(CY_STATUS_REG_via8bits_Stat_H) /* CY_STATUS_REG_via8bits_Stat_H */
#define CY_STATUS_REG_via8bits_Stat_H

#include "cytypes.h"
#include "CyLib.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 statusState;

} via8bits_Stat_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

uint8 via8bits_Stat_Read(void) ;
void via8bits_Stat_InterruptEnable(void) ;
void via8bits_Stat_InterruptDisable(void) ;
void via8bits_Stat_WriteMask(uint8 mask) ;
uint8 via8bits_Stat_ReadMask(void) ;


/***************************************
*           API Constants
***************************************/

#define via8bits_Stat_STATUS_INTR_ENBL    0x10u


/***************************************
*         Parameter Constants
***************************************/

/* Status Register Inputs */
#define via8bits_Stat_INPUTS              4


/***************************************
*             Registers
***************************************/

/* Status Register */
#define via8bits_Stat_Status             (* (reg8 *) via8bits_Stat_sts_sts_reg__STATUS_REG )
#define via8bits_Stat_Status_PTR         (  (reg8 *) via8bits_Stat_sts_sts_reg__STATUS_REG )
#define via8bits_Stat_Status_Mask        (* (reg8 *) via8bits_Stat_sts_sts_reg__MASK_REG )
#define via8bits_Stat_Status_Aux_Ctrl    (* (reg8 *) via8bits_Stat_sts_sts_reg__STATUS_AUX_CTL_REG )

#endif /* End CY_STATUS_REG_via8bits_Stat_H */


/* [] END OF FILE */
