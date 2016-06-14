/*******************************************************************************
* File Name: via8bits_Stat.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware to read the value of a Status 
*  Register.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "via8bits_Stat.h"

#if !defined(via8bits_Stat_sts_sts_reg__REMOVED) /* Check for removal by optimization */


/*******************************************************************************
* Function Name: via8bits_Stat_Read
********************************************************************************
*
* Summary:
*  Reads the current value assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The current value in the Status Register.
*
*******************************************************************************/
uint8 via8bits_Stat_Read(void) 
{ 
    return via8bits_Stat_Status;
}


/*******************************************************************************
* Function Name: via8bits_Stat_InterruptEnable
********************************************************************************
*
* Summary:
*  Enables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void via8bits_Stat_InterruptEnable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    via8bits_Stat_Status_Aux_Ctrl |= via8bits_Stat_STATUS_INTR_ENBL;
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: via8bits_Stat_InterruptDisable
********************************************************************************
*
* Summary:
*  Disables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void via8bits_Stat_InterruptDisable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    via8bits_Stat_Status_Aux_Ctrl &= (uint8)(~via8bits_Stat_STATUS_INTR_ENBL);
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: via8bits_Stat_WriteMask
********************************************************************************
*
* Summary:
*  Writes the current mask value assigned to the Status Register.
*
* Parameters:
*  mask:  Value to write into the mask register.
*
* Return:
*  None.
*
*******************************************************************************/
void via8bits_Stat_WriteMask(uint8 mask) 
{
    #if(via8bits_Stat_INPUTS < 8u)
    	mask &= ((uint8)(1u << via8bits_Stat_INPUTS) - 1u);
	#endif /* End via8bits_Stat_INPUTS < 8u */
    via8bits_Stat_Status_Mask = mask;
}


/*******************************************************************************
* Function Name: via8bits_Stat_ReadMask
********************************************************************************
*
* Summary:
*  Reads the current interrupt mask assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The value of the interrupt mask of the Status Register.
*
*******************************************************************************/
uint8 via8bits_Stat_ReadMask(void) 
{
    return via8bits_Stat_Status_Mask;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
