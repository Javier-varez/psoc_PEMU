/*******************************************************************************
* File Name: CounterCLK.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_CounterCLK_H)
#define CY_CLOCK_CounterCLK_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void CounterCLK_Start(void) ;
void CounterCLK_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void CounterCLK_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void CounterCLK_StandbyPower(uint8 state) ;
void CounterCLK_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 CounterCLK_GetDividerRegister(void) ;
void CounterCLK_SetModeRegister(uint8 modeBitMask) ;
void CounterCLK_ClearModeRegister(uint8 modeBitMask) ;
uint8 CounterCLK_GetModeRegister(void) ;
void CounterCLK_SetSourceRegister(uint8 clkSource) ;
uint8 CounterCLK_GetSourceRegister(void) ;
#if defined(CounterCLK__CFG3)
void CounterCLK_SetPhaseRegister(uint8 clkPhase) ;
uint8 CounterCLK_GetPhaseRegister(void) ;
#endif /* defined(CounterCLK__CFG3) */

#define CounterCLK_Enable()                       CounterCLK_Start()
#define CounterCLK_Disable()                      CounterCLK_Stop()
#define CounterCLK_SetDivider(clkDivider)         CounterCLK_SetDividerRegister(clkDivider, 1u)
#define CounterCLK_SetDividerValue(clkDivider)    CounterCLK_SetDividerRegister((clkDivider) - 1u, 1u)
#define CounterCLK_SetMode(clkMode)               CounterCLK_SetModeRegister(clkMode)
#define CounterCLK_SetSource(clkSource)           CounterCLK_SetSourceRegister(clkSource)
#if defined(CounterCLK__CFG3)
#define CounterCLK_SetPhase(clkPhase)             CounterCLK_SetPhaseRegister(clkPhase)
#define CounterCLK_SetPhaseValue(clkPhase)        CounterCLK_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(CounterCLK__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define CounterCLK_CLKEN              (* (reg8 *) CounterCLK__PM_ACT_CFG)
#define CounterCLK_CLKEN_PTR          ((reg8 *) CounterCLK__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define CounterCLK_CLKSTBY            (* (reg8 *) CounterCLK__PM_STBY_CFG)
#define CounterCLK_CLKSTBY_PTR        ((reg8 *) CounterCLK__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define CounterCLK_DIV_LSB            (* (reg8 *) CounterCLK__CFG0)
#define CounterCLK_DIV_LSB_PTR        ((reg8 *) CounterCLK__CFG0)
#define CounterCLK_DIV_PTR            ((reg16 *) CounterCLK__CFG0)

/* Clock MSB divider configuration register. */
#define CounterCLK_DIV_MSB            (* (reg8 *) CounterCLK__CFG1)
#define CounterCLK_DIV_MSB_PTR        ((reg8 *) CounterCLK__CFG1)

/* Mode and source configuration register */
#define CounterCLK_MOD_SRC            (* (reg8 *) CounterCLK__CFG2)
#define CounterCLK_MOD_SRC_PTR        ((reg8 *) CounterCLK__CFG2)

#if defined(CounterCLK__CFG3)
/* Analog clock phase configuration register */
#define CounterCLK_PHASE              (* (reg8 *) CounterCLK__CFG3)
#define CounterCLK_PHASE_PTR          ((reg8 *) CounterCLK__CFG3)
#endif /* defined(CounterCLK__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define CounterCLK_CLKEN_MASK         CounterCLK__PM_ACT_MSK
#define CounterCLK_CLKSTBY_MASK       CounterCLK__PM_STBY_MSK

/* CFG2 field masks */
#define CounterCLK_SRC_SEL_MSK        CounterCLK__CFG2_SRC_SEL_MASK
#define CounterCLK_MODE_MASK          (~(CounterCLK_SRC_SEL_MSK))

#if defined(CounterCLK__CFG3)
/* CFG3 phase mask */
#define CounterCLK_PHASE_MASK         CounterCLK__CFG3_PHASE_DLY_MASK
#endif /* defined(CounterCLK__CFG3) */

#endif /* CY_CLOCK_CounterCLK_H */


/* [] END OF FILE */
