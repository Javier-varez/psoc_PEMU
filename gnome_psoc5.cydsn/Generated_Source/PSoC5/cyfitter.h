#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* ISR */
#define ISR__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR__INTC_MASK 0x01u
#define ISR__INTC_NUMBER 0u
#define ISR__INTC_PRIOR_NUM 7u
#define ISR__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ISR__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* LED */
#define LED__0__INTTYPE CYREG_PICU2_INTTYPE1
#define LED__0__MASK 0x02u
#define LED__0__PC CYREG_PRT2_PC1
#define LED__0__PORT 2u
#define LED__0__SHIFT 1
#define LED__AG CYREG_PRT2_AG
#define LED__AMUX CYREG_PRT2_AMUX
#define LED__BIE CYREG_PRT2_BIE
#define LED__BIT_MASK CYREG_PRT2_BIT_MASK
#define LED__BYP CYREG_PRT2_BYP
#define LED__CTL CYREG_PRT2_CTL
#define LED__DM0 CYREG_PRT2_DM0
#define LED__DM1 CYREG_PRT2_DM1
#define LED__DM2 CYREG_PRT2_DM2
#define LED__DR CYREG_PRT2_DR
#define LED__INP_DIS CYREG_PRT2_INP_DIS
#define LED__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LED__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LED__LCD_EN CYREG_PRT2_LCD_EN
#define LED__MASK 0x02u
#define LED__PORT 2u
#define LED__PRT CYREG_PRT2_PRT
#define LED__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LED__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LED__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LED__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LED__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LED__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LED__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LED__PS CYREG_PRT2_PS
#define LED__SHIFT 1
#define LED__SLW CYREG_PRT2_SLW

/* Button */
#define Button__0__INTTYPE CYREG_PICU2_INTTYPE2
#define Button__0__MASK 0x04u
#define Button__0__PC CYREG_PRT2_PC2
#define Button__0__PORT 2u
#define Button__0__SHIFT 2
#define Button__AG CYREG_PRT2_AG
#define Button__AMUX CYREG_PRT2_AMUX
#define Button__BIE CYREG_PRT2_BIE
#define Button__BIT_MASK CYREG_PRT2_BIT_MASK
#define Button__BYP CYREG_PRT2_BYP
#define Button__CTL CYREG_PRT2_CTL
#define Button__DM0 CYREG_PRT2_DM0
#define Button__DM1 CYREG_PRT2_DM1
#define Button__DM2 CYREG_PRT2_DM2
#define Button__DR CYREG_PRT2_DR
#define Button__INP_DIS CYREG_PRT2_INP_DIS
#define Button__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Button__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Button__LCD_EN CYREG_PRT2_LCD_EN
#define Button__MASK 0x04u
#define Button__PORT 2u
#define Button__PRT CYREG_PRT2_PRT
#define Button__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Button__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Button__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Button__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Button__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Button__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Button__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Button__PS CYREG_PRT2_PS
#define Button__SHIFT 2
#define Button__SLW CYREG_PRT2_SLW

/* via8bits_Ctrl */
#define via8bits_Ctrl_Sync_ctrl_reg__1__MASK 0x02u
#define via8bits_Ctrl_Sync_ctrl_reg__1__POS 1
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB14_15_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB14_15_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB14_15_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB14_15_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB14_15_MSK
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB14_15_MSK
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB14_15_MSK
#define via8bits_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB14_15_MSK
#define via8bits_Ctrl_Sync_ctrl_reg__3__MASK 0x08u
#define via8bits_Ctrl_Sync_ctrl_reg__3__POS 3
#define via8bits_Ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define via8bits_Ctrl_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB14_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB14_ST_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB14_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB14_ST_CTL
#define via8bits_Ctrl_Sync_ctrl_reg__MASK 0x0Au
#define via8bits_Ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB14_MSK_ACTL
#define via8bits_Ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB14_MSK_ACTL
#define via8bits_Ctrl_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB14_MSK

/* via8bits_P0_ctrl */
#define via8bits_P0_ctrl_Sync_ctrl_reg__0__MASK 0x01u
#define via8bits_P0_ctrl_Sync_ctrl_reg__0__POS 0
#define via8bits_P0_ctrl_Sync_ctrl_reg__1__MASK 0x02u
#define via8bits_P0_ctrl_Sync_ctrl_reg__1__POS 1
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB13_14_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB13_14_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB13_14_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB13_14_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB13_14_MSK
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB13_14_MSK
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB13_14_MSK
#define via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB13_14_MSK
#define via8bits_P0_ctrl_Sync_ctrl_reg__2__MASK 0x04u
#define via8bits_P0_ctrl_Sync_ctrl_reg__2__POS 2
#define via8bits_P0_ctrl_Sync_ctrl_reg__3__MASK 0x08u
#define via8bits_P0_ctrl_Sync_ctrl_reg__3__POS 3
#define via8bits_P0_ctrl_Sync_ctrl_reg__4__MASK 0x10u
#define via8bits_P0_ctrl_Sync_ctrl_reg__4__POS 4
#define via8bits_P0_ctrl_Sync_ctrl_reg__5__MASK 0x20u
#define via8bits_P0_ctrl_Sync_ctrl_reg__5__POS 5
#define via8bits_P0_ctrl_Sync_ctrl_reg__6__MASK 0x40u
#define via8bits_P0_ctrl_Sync_ctrl_reg__6__POS 6
#define via8bits_P0_ctrl_Sync_ctrl_reg__7__MASK 0x80u
#define via8bits_P0_ctrl_Sync_ctrl_reg__7__POS 7
#define via8bits_P0_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB13_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB13_ST_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB13_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB13_ST_CTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__MASK 0xFFu
#define via8bits_P0_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define via8bits_P0_ctrl_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB13_MSK

/* via8bits_P0_stat */
#define via8bits_P0_stat_sts_sts_reg__0__MASK 0x01u
#define via8bits_P0_stat_sts_sts_reg__0__POS 0
#define via8bits_P0_stat_sts_sts_reg__1__MASK 0x02u
#define via8bits_P0_stat_sts_sts_reg__1__POS 1
#define via8bits_P0_stat_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define via8bits_P0_stat_sts_sts_reg__16BIT_STATUS_REG CYREG_B0_UDB13_14_ST
#define via8bits_P0_stat_sts_sts_reg__2__MASK 0x04u
#define via8bits_P0_stat_sts_sts_reg__2__POS 2
#define via8bits_P0_stat_sts_sts_reg__3__MASK 0x08u
#define via8bits_P0_stat_sts_sts_reg__3__POS 3
#define via8bits_P0_stat_sts_sts_reg__4__MASK 0x10u
#define via8bits_P0_stat_sts_sts_reg__4__POS 4
#define via8bits_P0_stat_sts_sts_reg__5__MASK 0x20u
#define via8bits_P0_stat_sts_sts_reg__5__POS 5
#define via8bits_P0_stat_sts_sts_reg__6__MASK 0x40u
#define via8bits_P0_stat_sts_sts_reg__6__POS 6
#define via8bits_P0_stat_sts_sts_reg__7__MASK 0x80u
#define via8bits_P0_stat_sts_sts_reg__7__POS 7
#define via8bits_P0_stat_sts_sts_reg__MASK 0xFFu
#define via8bits_P0_stat_sts_sts_reg__MASK_REG CYREG_B0_UDB13_MSK
#define via8bits_P0_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define via8bits_P0_stat_sts_sts_reg__PER_ST_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define via8bits_P0_stat_sts_sts_reg__STATUS_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define via8bits_P0_stat_sts_sts_reg__STATUS_CNT_REG CYREG_B0_UDB13_ST_CTL
#define via8bits_P0_stat_sts_sts_reg__STATUS_CONTROL_REG CYREG_B0_UDB13_ST_CTL
#define via8bits_P0_stat_sts_sts_reg__STATUS_REG CYREG_B0_UDB13_ST

/* via8bits_P1_ctrl */
#define via8bits_P1_ctrl_Sync_ctrl_reg__0__MASK 0x01u
#define via8bits_P1_ctrl_Sync_ctrl_reg__0__POS 0
#define via8bits_P1_ctrl_Sync_ctrl_reg__1__MASK 0x02u
#define via8bits_P1_ctrl_Sync_ctrl_reg__1__POS 1
#define via8bits_P1_ctrl_Sync_ctrl_reg__2__MASK 0x04u
#define via8bits_P1_ctrl_Sync_ctrl_reg__2__POS 2
#define via8bits_P1_ctrl_Sync_ctrl_reg__3__MASK 0x08u
#define via8bits_P1_ctrl_Sync_ctrl_reg__3__POS 3
#define via8bits_P1_ctrl_Sync_ctrl_reg__4__MASK 0x10u
#define via8bits_P1_ctrl_Sync_ctrl_reg__4__POS 4
#define via8bits_P1_ctrl_Sync_ctrl_reg__5__MASK 0x20u
#define via8bits_P1_ctrl_Sync_ctrl_reg__5__POS 5
#define via8bits_P1_ctrl_Sync_ctrl_reg__6__MASK 0x40u
#define via8bits_P1_ctrl_Sync_ctrl_reg__6__POS 6
#define via8bits_P1_ctrl_Sync_ctrl_reg__7__MASK 0x80u
#define via8bits_P1_ctrl_Sync_ctrl_reg__7__POS 7
#define via8bits_P1_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB15_ACTL
#define via8bits_P1_ctrl_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB15_CTL
#define via8bits_P1_ctrl_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB15_ST_CTL
#define via8bits_P1_ctrl_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB15_CTL
#define via8bits_P1_ctrl_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB15_ST_CTL
#define via8bits_P1_ctrl_Sync_ctrl_reg__MASK 0xFFu
#define via8bits_P1_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB15_MSK_ACTL
#define via8bits_P1_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB15_MSK_ACTL
#define via8bits_P1_ctrl_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB15_MSK

/* via8bits_P1_stat */
#define via8bits_P1_stat_sts_sts_reg__0__MASK 0x01u
#define via8bits_P1_stat_sts_sts_reg__0__POS 0
#define via8bits_P1_stat_sts_sts_reg__1__MASK 0x02u
#define via8bits_P1_stat_sts_sts_reg__1__POS 1
#define via8bits_P1_stat_sts_sts_reg__2__MASK 0x04u
#define via8bits_P1_stat_sts_sts_reg__2__POS 2
#define via8bits_P1_stat_sts_sts_reg__3__MASK 0x08u
#define via8bits_P1_stat_sts_sts_reg__3__POS 3
#define via8bits_P1_stat_sts_sts_reg__4__MASK 0x10u
#define via8bits_P1_stat_sts_sts_reg__4__POS 4
#define via8bits_P1_stat_sts_sts_reg__5__MASK 0x20u
#define via8bits_P1_stat_sts_sts_reg__5__POS 5
#define via8bits_P1_stat_sts_sts_reg__6__MASK 0x40u
#define via8bits_P1_stat_sts_sts_reg__6__POS 6
#define via8bits_P1_stat_sts_sts_reg__7__MASK 0x80u
#define via8bits_P1_stat_sts_sts_reg__7__POS 7
#define via8bits_P1_stat_sts_sts_reg__MASK 0xFFu
#define via8bits_P1_stat_sts_sts_reg__MASK_REG CYREG_B0_UDB15_MSK
#define via8bits_P1_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB15_MSK_ACTL
#define via8bits_P1_stat_sts_sts_reg__PER_ST_AUX_CTL_REG CYREG_B0_UDB15_MSK_ACTL
#define via8bits_P1_stat_sts_sts_reg__STATUS_AUX_CTL_REG CYREG_B0_UDB15_ACTL
#define via8bits_P1_stat_sts_sts_reg__STATUS_CNT_REG CYREG_B0_UDB15_ST_CTL
#define via8bits_P1_stat_sts_sts_reg__STATUS_CONTROL_REG CYREG_B0_UDB15_ST_CTL
#define via8bits_P1_stat_sts_sts_reg__STATUS_REG CYREG_B0_UDB15_ST

/* via8bits_Stat */
#define via8bits_Stat_sts_sts_reg__REMOVED 1u

/* CounterCLK */
#define CounterCLK__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define CounterCLK__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define CounterCLK__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define CounterCLK__CFG2_SRC_SEL_MASK 0x07u
#define CounterCLK__INDEX 0x00u
#define CounterCLK__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define CounterCLK__PM_ACT_MSK 0x01u
#define CounterCLK__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define CounterCLK__PM_STBY_MSK 0x01u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "gnome_psoc5"
#define CY_VERSION "PSoC Creator  3.3 SP1"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000001u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */