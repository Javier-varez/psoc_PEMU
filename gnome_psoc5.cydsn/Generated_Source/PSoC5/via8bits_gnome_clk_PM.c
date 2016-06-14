/*******************************************************************************
* File Name: via8bits_gnome_clk_PM.c
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

#include "via8bits_gnome_clk.h"

/* Check for removal by optimization */
#if !defined(via8bits_gnome_clk_Sync_ctrl_reg__REMOVED)

static via8bits_gnome_clk_BACKUP_STRUCT  via8bits_gnome_clk_backup = {0u};

    
/*******************************************************************************
* Function Name: via8bits_gnome_clk_SaveConfig
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
void via8bits_gnome_clk_SaveConfig(void) 
{
    via8bits_gnome_clk_backup.controlState = via8bits_gnome_clk_Control;
}


/*******************************************************************************
* Function Name: via8bits_gnome_clk_RestoreConfig
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
void via8bits_gnome_clk_RestoreConfig(void) 
{
     via8bits_gnome_clk_Control = via8bits_gnome_clk_backup.controlState;
}


/*******************************************************************************
* Function Name: via8bits_gnome_clk_Sleep
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
void via8bits_gnome_clk_Sleep(void) 
{
    via8bits_gnome_clk_SaveConfig();
}


/*******************************************************************************
* Function Name: via8bits_gnome_clk_Wakeup
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
void via8bits_gnome_clk_Wakeup(void)  
{
    via8bits_gnome_clk_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
