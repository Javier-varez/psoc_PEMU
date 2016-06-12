    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; ISR
ISR__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
ISR__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
ISR__INTC_MASK EQU 0x01
ISR__INTC_NUMBER EQU 0
ISR__INTC_PRIOR_MASK EQU 0xC0
ISR__INTC_PRIOR_NUM EQU 3
ISR__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
ISR__INTC_SET_EN_REG EQU CYREG_CM0_ISER
ISR__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; LED
LED__0__DM__MASK EQU 0x1C0000
LED__0__DM__SHIFT EQU 18
LED__0__DR EQU CYREG_PRT1_DR
LED__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
LED__0__HSIOM_MASK EQU 0x0F000000
LED__0__HSIOM_SHIFT EQU 24
LED__0__INTCFG EQU CYREG_PRT1_INTCFG
LED__0__INTSTAT EQU CYREG_PRT1_INTSTAT
LED__0__MASK EQU 0x40
LED__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
LED__0__OUT_SEL_SHIFT EQU 12
LED__0__OUT_SEL_VAL EQU 2
LED__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
LED__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
LED__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
LED__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
LED__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
LED__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
LED__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
LED__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
LED__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
LED__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
LED__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
LED__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
LED__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
LED__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
LED__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
LED__0__PC EQU CYREG_PRT1_PC
LED__0__PC2 EQU CYREG_PRT1_PC2
LED__0__PORT EQU 1
LED__0__PS EQU CYREG_PRT1_PS
LED__0__SHIFT EQU 6
LED__DR EQU CYREG_PRT1_DR
LED__INTCFG EQU CYREG_PRT1_INTCFG
LED__INTSTAT EQU CYREG_PRT1_INTSTAT
LED__MASK EQU 0x40
LED__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
LED__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
LED__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
LED__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
LED__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
LED__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
LED__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
LED__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
LED__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
LED__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
LED__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
LED__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
LED__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
LED__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
LED__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
LED__PC EQU CYREG_PRT1_PC
LED__PC2 EQU CYREG_PRT1_PC2
LED__PORT EQU 1
LED__PS EQU CYREG_PRT1_PS
LED__SHIFT EQU 6

; Button
Button__0__DM__MASK EQU 0xE00000
Button__0__DM__SHIFT EQU 21
Button__0__DR EQU CYREG_PRT0_DR
Button__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
Button__0__HSIOM_MASK EQU 0xF0000000
Button__0__HSIOM_SHIFT EQU 28
Button__0__INTCFG EQU CYREG_PRT0_INTCFG
Button__0__INTSTAT EQU CYREG_PRT0_INTSTAT
Button__0__MASK EQU 0x80
Button__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
Button__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
Button__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
Button__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
Button__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
Button__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
Button__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
Button__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
Button__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
Button__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
Button__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
Button__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
Button__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
Button__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
Button__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
Button__0__PC EQU CYREG_PRT0_PC
Button__0__PC2 EQU CYREG_PRT0_PC2
Button__0__PORT EQU 0
Button__0__PS EQU CYREG_PRT0_PS
Button__0__SHIFT EQU 7
Button__DR EQU CYREG_PRT0_DR
Button__INTCFG EQU CYREG_PRT0_INTCFG
Button__INTSTAT EQU CYREG_PRT0_INTSTAT
Button__MASK EQU 0x80
Button__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
Button__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
Button__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
Button__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
Button__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
Button__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
Button__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
Button__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
Button__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
Button__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
Button__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
Button__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
Button__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
Button__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
Button__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
Button__PC EQU CYREG_PRT0_PC
Button__PC2 EQU CYREG_PRT0_PC2
Button__PORT EQU 0
Button__PS EQU CYREG_PRT0_PS
Button__SHIFT EQU 7

; via8bits_Ctrl
via8bits_Ctrl_Sync_ctrl_reg__1__MASK EQU 0x02
via8bits_Ctrl_Sync_ctrl_reg__1__POS EQU 1
via8bits_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK_00
via8bits_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK_00
via8bits_Ctrl_Sync_ctrl_reg__3__MASK EQU 0x08
via8bits_Ctrl_Sync_ctrl_reg__3__POS EQU 3
via8bits_Ctrl_Sync_ctrl_reg__32BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL_00
via8bits_Ctrl_Sync_ctrl_reg__32BIT_CONTROL_REG EQU CYREG_UDB_W32_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__32BIT_COUNT_REG EQU CYREG_UDB_W32_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__32BIT_PERIOD_REG EQU CYREG_UDB_W32_MSK_00
via8bits_Ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_00
via8bits_Ctrl_Sync_ctrl_reg__CONTROL_REG EQU CYREG_UDB_W8_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_00
via8bits_Ctrl_Sync_ctrl_reg__COUNT_REG EQU CYREG_UDB_W8_CTL_00
via8bits_Ctrl_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_00
via8bits_Ctrl_Sync_ctrl_reg__MASK EQU 0x0A
via8bits_Ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00
via8bits_Ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_00
via8bits_Ctrl_Sync_ctrl_reg__PERIOD_REG EQU CYREG_UDB_W8_MSK_00

; via8bits_P0_ctrl
via8bits_P0_ctrl_Sync_ctrl_reg__0__MASK EQU 0x01
via8bits_P0_ctrl_Sync_ctrl_reg__0__POS EQU 0
via8bits_P0_ctrl_Sync_ctrl_reg__1__MASK EQU 0x02
via8bits_P0_ctrl_Sync_ctrl_reg__1__POS EQU 1
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK_01
via8bits_P0_ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK_01
via8bits_P0_ctrl_Sync_ctrl_reg__2__MASK EQU 0x04
via8bits_P0_ctrl_Sync_ctrl_reg__2__POS EQU 2
via8bits_P0_ctrl_Sync_ctrl_reg__3__MASK EQU 0x08
via8bits_P0_ctrl_Sync_ctrl_reg__3__POS EQU 3
via8bits_P0_ctrl_Sync_ctrl_reg__4__MASK EQU 0x10
via8bits_P0_ctrl_Sync_ctrl_reg__4__POS EQU 4
via8bits_P0_ctrl_Sync_ctrl_reg__5__MASK EQU 0x20
via8bits_P0_ctrl_Sync_ctrl_reg__5__POS EQU 5
via8bits_P0_ctrl_Sync_ctrl_reg__6__MASK EQU 0x40
via8bits_P0_ctrl_Sync_ctrl_reg__6__POS EQU 6
via8bits_P0_ctrl_Sync_ctrl_reg__7__MASK EQU 0x80
via8bits_P0_ctrl_Sync_ctrl_reg__7__POS EQU 7
via8bits_P0_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__CONTROL_REG EQU CYREG_UDB_W8_CTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_01
via8bits_P0_ctrl_Sync_ctrl_reg__COUNT_REG EQU CYREG_UDB_W8_CTL_01
via8bits_P0_ctrl_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_01
via8bits_P0_ctrl_Sync_ctrl_reg__MASK EQU 0xFF
via8bits_P0_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_01
via8bits_P0_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_01
via8bits_P0_ctrl_Sync_ctrl_reg__PERIOD_REG EQU CYREG_UDB_W8_MSK_01

; via8bits_P0_stat
via8bits_P0_stat_sts_sts_reg__0__MASK EQU 0x01
via8bits_P0_stat_sts_sts_reg__0__POS EQU 0
via8bits_P0_stat_sts_sts_reg__1__MASK EQU 0x02
via8bits_P0_stat_sts_sts_reg__1__POS EQU 1
via8bits_P0_stat_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_01
via8bits_P0_stat_sts_sts_reg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_01
via8bits_P0_stat_sts_sts_reg__2__MASK EQU 0x04
via8bits_P0_stat_sts_sts_reg__2__POS EQU 2
via8bits_P0_stat_sts_sts_reg__3__MASK EQU 0x08
via8bits_P0_stat_sts_sts_reg__3__POS EQU 3
via8bits_P0_stat_sts_sts_reg__4__MASK EQU 0x10
via8bits_P0_stat_sts_sts_reg__4__POS EQU 4
via8bits_P0_stat_sts_sts_reg__5__MASK EQU 0x20
via8bits_P0_stat_sts_sts_reg__5__POS EQU 5
via8bits_P0_stat_sts_sts_reg__6__MASK EQU 0x40
via8bits_P0_stat_sts_sts_reg__6__POS EQU 6
via8bits_P0_stat_sts_sts_reg__7__MASK EQU 0x80
via8bits_P0_stat_sts_sts_reg__7__POS EQU 7
via8bits_P0_stat_sts_sts_reg__MASK EQU 0xFF
via8bits_P0_stat_sts_sts_reg__MASK_REG EQU CYREG_UDB_W8_MSK_01
via8bits_P0_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_01
via8bits_P0_stat_sts_sts_reg__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_01
via8bits_P0_stat_sts_sts_reg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_01
via8bits_P0_stat_sts_sts_reg__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST_01
via8bits_P0_stat_sts_sts_reg__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST_01
via8bits_P0_stat_sts_sts_reg__STATUS_REG EQU CYREG_UDB_W8_ST_01

; via8bits_P1_ctrl
via8bits_P1_ctrl_Sync_ctrl_reg__0__MASK EQU 0x01
via8bits_P1_ctrl_Sync_ctrl_reg__0__POS EQU 0
via8bits_P1_ctrl_Sync_ctrl_reg__1__MASK EQU 0x02
via8bits_P1_ctrl_Sync_ctrl_reg__1__POS EQU 1
via8bits_P1_ctrl_Sync_ctrl_reg__2__MASK EQU 0x04
via8bits_P1_ctrl_Sync_ctrl_reg__2__POS EQU 2
via8bits_P1_ctrl_Sync_ctrl_reg__3__MASK EQU 0x08
via8bits_P1_ctrl_Sync_ctrl_reg__3__POS EQU 3
via8bits_P1_ctrl_Sync_ctrl_reg__4__MASK EQU 0x10
via8bits_P1_ctrl_Sync_ctrl_reg__4__POS EQU 4
via8bits_P1_ctrl_Sync_ctrl_reg__5__MASK EQU 0x20
via8bits_P1_ctrl_Sync_ctrl_reg__5__POS EQU 5
via8bits_P1_ctrl_Sync_ctrl_reg__6__MASK EQU 0x40
via8bits_P1_ctrl_Sync_ctrl_reg__6__POS EQU 6
via8bits_P1_ctrl_Sync_ctrl_reg__7__MASK EQU 0x80
via8bits_P1_ctrl_Sync_ctrl_reg__7__POS EQU 7
via8bits_P1_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
via8bits_P1_ctrl_Sync_ctrl_reg__CONTROL_REG EQU CYREG_UDB_W8_CTL_03
via8bits_P1_ctrl_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_03
via8bits_P1_ctrl_Sync_ctrl_reg__COUNT_REG EQU CYREG_UDB_W8_CTL_03
via8bits_P1_ctrl_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_03
via8bits_P1_ctrl_Sync_ctrl_reg__MASK EQU 0xFF
via8bits_P1_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
via8bits_P1_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
via8bits_P1_ctrl_Sync_ctrl_reg__PERIOD_REG EQU CYREG_UDB_W8_MSK_03

; via8bits_P1_stat
via8bits_P1_stat_sts_sts_reg__0__MASK EQU 0x01
via8bits_P1_stat_sts_sts_reg__0__POS EQU 0
via8bits_P1_stat_sts_sts_reg__1__MASK EQU 0x02
via8bits_P1_stat_sts_sts_reg__1__POS EQU 1
via8bits_P1_stat_sts_sts_reg__2__MASK EQU 0x04
via8bits_P1_stat_sts_sts_reg__2__POS EQU 2
via8bits_P1_stat_sts_sts_reg__3__MASK EQU 0x08
via8bits_P1_stat_sts_sts_reg__3__POS EQU 3
via8bits_P1_stat_sts_sts_reg__4__MASK EQU 0x10
via8bits_P1_stat_sts_sts_reg__4__POS EQU 4
via8bits_P1_stat_sts_sts_reg__5__MASK EQU 0x20
via8bits_P1_stat_sts_sts_reg__5__POS EQU 5
via8bits_P1_stat_sts_sts_reg__6__MASK EQU 0x40
via8bits_P1_stat_sts_sts_reg__6__POS EQU 6
via8bits_P1_stat_sts_sts_reg__7__MASK EQU 0x80
via8bits_P1_stat_sts_sts_reg__7__POS EQU 7
via8bits_P1_stat_sts_sts_reg__MASK EQU 0xFF
via8bits_P1_stat_sts_sts_reg__MASK_REG EQU CYREG_UDB_W8_MSK_03
via8bits_P1_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
via8bits_P1_stat_sts_sts_reg__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_03
via8bits_P1_stat_sts_sts_reg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
via8bits_P1_stat_sts_sts_reg__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST_03
via8bits_P1_stat_sts_sts_reg__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST_03
via8bits_P1_stat_sts_sts_reg__STATUS_REG EQU CYREG_UDB_W8_ST_03

; via8bits_Stat
via8bits_Stat_sts_sts_reg__REMOVED EQU 1

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 1
CYDEV_DFT_SELECT_CLK1 EQU 2
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 2
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END