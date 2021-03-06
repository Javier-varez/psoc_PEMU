/*******************************************************************************
* File Name: via8bits1_Ctrl_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "via8bits1_Ctrl.h"

/* Check for removal by optimization */
#if !defined(via8bits1_Ctrl_Sync_ctrl_reg__REMOVED)

static via8bits1_Ctrl_BACKUP_STRUCT  via8bits1_Ctrl_backup = {0u};

    
/*******************************************************************************
* Function Name: via8bits1_Ctrl_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void via8bits1_Ctrl_SaveConfig(void) 
{
    via8bits1_Ctrl_backup.controlState = via8bits1_Ctrl_Control;
}


/*******************************************************************************
* Function Name: via8bits1_Ctrl_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void via8bits1_Ctrl_RestoreConfig(void) 
{
     via8bits1_Ctrl_Control = via8bits1_Ctrl_backup.controlState;
}


/*******************************************************************************
* Function Name: via8bits1_Ctrl_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void via8bits1_Ctrl_Sleep(void) 
{
    via8bits1_Ctrl_SaveConfig();
}


/*******************************************************************************
* Function Name: via8bits1_Ctrl_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void via8bits1_Ctrl_Wakeup(void)  
{
    via8bits1_Ctrl_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
