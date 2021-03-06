.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ISR */
.set ISR__REMOVED, 1

/* Clock_5 */
.set Clock_5__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_5__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_5__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_5__CFG2_SRC_SEL_MASK, 0x07
.set Clock_5__INDEX, 0x00
.set Clock_5__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_5__PM_ACT_MSK, 0x01
.set Clock_5__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_5__PM_STBY_MSK, 0x01

/* via8bits1_Ctrl */
.set via8bits1_Ctrl_Sync_ctrl_reg__1__MASK, 0x02
.set via8bits1_Ctrl_Sync_ctrl_reg__1__POS, 1
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB12_13_ACTL
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB12_13_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB12_13_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB12_13_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB12_13_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B0_UDB12_13_MSK
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB12_13_MSK
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB12_13_MSK
.set via8bits1_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB12_13_MSK
.set via8bits1_Ctrl_Sync_ctrl_reg__3__MASK, 0x08
.set via8bits1_Ctrl_Sync_ctrl_reg__3__POS, 3
.set via8bits1_Ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB12_ACTL
.set via8bits1_Ctrl_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB12_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB12_ST_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB12_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB12_ST_CTL
.set via8bits1_Ctrl_Sync_ctrl_reg__MASK, 0x0A
.set via8bits1_Ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set via8bits1_Ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set via8bits1_Ctrl_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB12_MSK

/* via8bits1_gnome_clk */
.set via8bits1_gnome_clk_Sync_ctrl_reg__REMOVED, 1

/* via8bits1_gnome_res */
.set via8bits1_gnome_res_Sync_ctrl_reg__REMOVED, 1

/* via8bits1_P0_ctrl */
.set via8bits1_P0_ctrl_Sync_ctrl_reg__0__MASK, 0x01
.set via8bits1_P0_ctrl_Sync_ctrl_reg__0__POS, 0
.set via8bits1_P0_ctrl_Sync_ctrl_reg__1__MASK, 0x02
.set via8bits1_P0_ctrl_Sync_ctrl_reg__1__POS, 1
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB13_14_ACTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB13_14_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB13_14_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB13_14_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB13_14_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B0_UDB13_14_MSK
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB13_14_MSK
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB13_14_MSK
.set via8bits1_P0_ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB13_14_MSK
.set via8bits1_P0_ctrl_Sync_ctrl_reg__2__MASK, 0x04
.set via8bits1_P0_ctrl_Sync_ctrl_reg__2__POS, 2
.set via8bits1_P0_ctrl_Sync_ctrl_reg__3__MASK, 0x08
.set via8bits1_P0_ctrl_Sync_ctrl_reg__3__POS, 3
.set via8bits1_P0_ctrl_Sync_ctrl_reg__4__MASK, 0x10
.set via8bits1_P0_ctrl_Sync_ctrl_reg__4__POS, 4
.set via8bits1_P0_ctrl_Sync_ctrl_reg__5__MASK, 0x20
.set via8bits1_P0_ctrl_Sync_ctrl_reg__5__POS, 5
.set via8bits1_P0_ctrl_Sync_ctrl_reg__6__MASK, 0x40
.set via8bits1_P0_ctrl_Sync_ctrl_reg__6__POS, 6
.set via8bits1_P0_ctrl_Sync_ctrl_reg__7__MASK, 0x80
.set via8bits1_P0_ctrl_Sync_ctrl_reg__7__POS, 7
.set via8bits1_P0_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB13_ACTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB13_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB13_ST_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB13_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB13_ST_CTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__MASK, 0xFF
.set via8bits1_P0_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set via8bits1_P0_ctrl_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB13_MSK

/* via8bits1_P0_stat */
.set via8bits1_P0_stat_sts_sts_reg__0__MASK, 0x01
.set via8bits1_P0_stat_sts_sts_reg__0__POS, 0
.set via8bits1_P0_stat_sts_sts_reg__1__MASK, 0x02
.set via8bits1_P0_stat_sts_sts_reg__1__POS, 1
.set via8bits1_P0_stat_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB13_14_ACTL
.set via8bits1_P0_stat_sts_sts_reg__16BIT_STATUS_REG, CYREG_B0_UDB13_14_ST
.set via8bits1_P0_stat_sts_sts_reg__2__MASK, 0x04
.set via8bits1_P0_stat_sts_sts_reg__2__POS, 2
.set via8bits1_P0_stat_sts_sts_reg__3__MASK, 0x08
.set via8bits1_P0_stat_sts_sts_reg__3__POS, 3
.set via8bits1_P0_stat_sts_sts_reg__4__MASK, 0x10
.set via8bits1_P0_stat_sts_sts_reg__4__POS, 4
.set via8bits1_P0_stat_sts_sts_reg__5__MASK, 0x20
.set via8bits1_P0_stat_sts_sts_reg__5__POS, 5
.set via8bits1_P0_stat_sts_sts_reg__6__MASK, 0x40
.set via8bits1_P0_stat_sts_sts_reg__6__POS, 6
.set via8bits1_P0_stat_sts_sts_reg__7__MASK, 0x80
.set via8bits1_P0_stat_sts_sts_reg__7__POS, 7
.set via8bits1_P0_stat_sts_sts_reg__MASK, 0xFF
.set via8bits1_P0_stat_sts_sts_reg__MASK_REG, CYREG_B0_UDB13_MSK
.set via8bits1_P0_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set via8bits1_P0_stat_sts_sts_reg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB13_MSK_ACTL
.set via8bits1_P0_stat_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B0_UDB13_ACTL
.set via8bits1_P0_stat_sts_sts_reg__STATUS_CNT_REG, CYREG_B0_UDB13_ST_CTL
.set via8bits1_P0_stat_sts_sts_reg__STATUS_CONTROL_REG, CYREG_B0_UDB13_ST_CTL
.set via8bits1_P0_stat_sts_sts_reg__STATUS_REG, CYREG_B0_UDB13_ST

/* via8bits1_P1_ctrl */
.set via8bits1_P1_ctrl_Sync_ctrl_reg__0__MASK, 0x01
.set via8bits1_P1_ctrl_Sync_ctrl_reg__0__POS, 0
.set via8bits1_P1_ctrl_Sync_ctrl_reg__1__MASK, 0x02
.set via8bits1_P1_ctrl_Sync_ctrl_reg__1__POS, 1
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB11_12_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB11_12_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB11_12_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB11_12_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B0_UDB11_12_MSK
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB11_12_MSK
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB11_12_MSK
.set via8bits1_P1_ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB11_12_MSK
.set via8bits1_P1_ctrl_Sync_ctrl_reg__2__MASK, 0x04
.set via8bits1_P1_ctrl_Sync_ctrl_reg__2__POS, 2
.set via8bits1_P1_ctrl_Sync_ctrl_reg__3__MASK, 0x08
.set via8bits1_P1_ctrl_Sync_ctrl_reg__3__POS, 3
.set via8bits1_P1_ctrl_Sync_ctrl_reg__4__MASK, 0x10
.set via8bits1_P1_ctrl_Sync_ctrl_reg__4__POS, 4
.set via8bits1_P1_ctrl_Sync_ctrl_reg__5__MASK, 0x20
.set via8bits1_P1_ctrl_Sync_ctrl_reg__5__POS, 5
.set via8bits1_P1_ctrl_Sync_ctrl_reg__6__MASK, 0x40
.set via8bits1_P1_ctrl_Sync_ctrl_reg__6__POS, 6
.set via8bits1_P1_ctrl_Sync_ctrl_reg__7__MASK, 0x80
.set via8bits1_P1_ctrl_Sync_ctrl_reg__7__POS, 7
.set via8bits1_P1_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB11_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB11_ST_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB11_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB11_ST_CTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__MASK, 0xFF
.set via8bits1_P1_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set via8bits1_P1_ctrl_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB11_MSK

/* via8bits1_P1_stat */
.set via8bits1_P1_stat_sts_sts_reg__0__MASK, 0x01
.set via8bits1_P1_stat_sts_sts_reg__0__POS, 0
.set via8bits1_P1_stat_sts_sts_reg__1__MASK, 0x02
.set via8bits1_P1_stat_sts_sts_reg__1__POS, 1
.set via8bits1_P1_stat_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set via8bits1_P1_stat_sts_sts_reg__16BIT_STATUS_REG, CYREG_B0_UDB11_12_ST
.set via8bits1_P1_stat_sts_sts_reg__2__MASK, 0x04
.set via8bits1_P1_stat_sts_sts_reg__2__POS, 2
.set via8bits1_P1_stat_sts_sts_reg__3__MASK, 0x08
.set via8bits1_P1_stat_sts_sts_reg__3__POS, 3
.set via8bits1_P1_stat_sts_sts_reg__4__MASK, 0x10
.set via8bits1_P1_stat_sts_sts_reg__4__POS, 4
.set via8bits1_P1_stat_sts_sts_reg__5__MASK, 0x20
.set via8bits1_P1_stat_sts_sts_reg__5__POS, 5
.set via8bits1_P1_stat_sts_sts_reg__6__MASK, 0x40
.set via8bits1_P1_stat_sts_sts_reg__6__POS, 6
.set via8bits1_P1_stat_sts_sts_reg__7__MASK, 0x80
.set via8bits1_P1_stat_sts_sts_reg__7__POS, 7
.set via8bits1_P1_stat_sts_sts_reg__MASK, 0xFF
.set via8bits1_P1_stat_sts_sts_reg__MASK_REG, CYREG_B0_UDB11_MSK
.set via8bits1_P1_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set via8bits1_P1_stat_sts_sts_reg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set via8bits1_P1_stat_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set via8bits1_P1_stat_sts_sts_reg__STATUS_CNT_REG, CYREG_B0_UDB11_ST_CTL
.set via8bits1_P1_stat_sts_sts_reg__STATUS_CONTROL_REG, CYREG_B0_UDB11_ST_CTL
.set via8bits1_P1_stat_sts_sts_reg__STATUS_REG, CYREG_B0_UDB11_ST

/* via8bits1_Stat */
.set via8bits1_Stat_sts_sts_reg__0__MASK, 0x01
.set via8bits1_Stat_sts_sts_reg__0__POS, 0
.set via8bits1_Stat_sts_sts_reg__1__MASK, 0x02
.set via8bits1_Stat_sts_sts_reg__1__POS, 1
.set via8bits1_Stat_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB12_13_ACTL
.set via8bits1_Stat_sts_sts_reg__16BIT_STATUS_REG, CYREG_B0_UDB12_13_ST
.set via8bits1_Stat_sts_sts_reg__2__MASK, 0x04
.set via8bits1_Stat_sts_sts_reg__2__POS, 2
.set via8bits1_Stat_sts_sts_reg__3__MASK, 0x08
.set via8bits1_Stat_sts_sts_reg__3__POS, 3
.set via8bits1_Stat_sts_sts_reg__MASK, 0x0F
.set via8bits1_Stat_sts_sts_reg__MASK_REG, CYREG_B0_UDB12_MSK
.set via8bits1_Stat_sts_sts_reg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set via8bits1_Stat_sts_sts_reg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set via8bits1_Stat_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B0_UDB12_ACTL
.set via8bits1_Stat_sts_sts_reg__STATUS_CNT_REG, CYREG_B0_UDB12_ST_CTL
.set via8bits1_Stat_sts_sts_reg__STATUS_CONTROL_REG, CYREG_B0_UDB12_ST_CTL
.set via8bits1_Stat_sts_sts_reg__STATUS_REG, CYREG_B0_UDB12_ST

/* via8bits2_Ctrl */
.set via8bits2_Ctrl_Sync_ctrl_reg__1__MASK, 0x02
.set via8bits2_Ctrl_Sync_ctrl_reg__1__POS, 1
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB14_15_ACTL
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB14_15_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB14_15_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB14_15_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB14_15_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B0_UDB14_15_MSK
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB14_15_MSK
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB14_15_MSK
.set via8bits2_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB14_15_MSK
.set via8bits2_Ctrl_Sync_ctrl_reg__3__MASK, 0x08
.set via8bits2_Ctrl_Sync_ctrl_reg__3__POS, 3
.set via8bits2_Ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB14_ACTL
.set via8bits2_Ctrl_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB14_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB14_ST_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB14_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB14_ST_CTL
.set via8bits2_Ctrl_Sync_ctrl_reg__MASK, 0x0A
.set via8bits2_Ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB14_MSK_ACTL
.set via8bits2_Ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB14_MSK_ACTL
.set via8bits2_Ctrl_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB14_MSK

/* via8bits2_gnome_clk */
.set via8bits2_gnome_clk_Sync_ctrl_reg__REMOVED, 1

/* via8bits2_gnome_res */
.set via8bits2_gnome_res_Sync_ctrl_reg__REMOVED, 1

/* via8bits2_P0_ctrl */
.set via8bits2_P0_ctrl_Sync_ctrl_reg__0__MASK, 0x01
.set via8bits2_P0_ctrl_Sync_ctrl_reg__0__POS, 0
.set via8bits2_P0_ctrl_Sync_ctrl_reg__1__MASK, 0x02
.set via8bits2_P0_ctrl_Sync_ctrl_reg__1__POS, 1
.set via8bits2_P0_ctrl_Sync_ctrl_reg__2__MASK, 0x04
.set via8bits2_P0_ctrl_Sync_ctrl_reg__2__POS, 2
.set via8bits2_P0_ctrl_Sync_ctrl_reg__3__MASK, 0x08
.set via8bits2_P0_ctrl_Sync_ctrl_reg__3__POS, 3
.set via8bits2_P0_ctrl_Sync_ctrl_reg__4__MASK, 0x10
.set via8bits2_P0_ctrl_Sync_ctrl_reg__4__POS, 4
.set via8bits2_P0_ctrl_Sync_ctrl_reg__5__MASK, 0x20
.set via8bits2_P0_ctrl_Sync_ctrl_reg__5__POS, 5
.set via8bits2_P0_ctrl_Sync_ctrl_reg__6__MASK, 0x40
.set via8bits2_P0_ctrl_Sync_ctrl_reg__6__POS, 6
.set via8bits2_P0_ctrl_Sync_ctrl_reg__7__MASK, 0x80
.set via8bits2_P0_ctrl_Sync_ctrl_reg__7__POS, 7
.set via8bits2_P0_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB15_ACTL
.set via8bits2_P0_ctrl_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB15_CTL
.set via8bits2_P0_ctrl_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB15_ST_CTL
.set via8bits2_P0_ctrl_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB15_CTL
.set via8bits2_P0_ctrl_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB15_ST_CTL
.set via8bits2_P0_ctrl_Sync_ctrl_reg__MASK, 0xFF
.set via8bits2_P0_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB15_MSK_ACTL
.set via8bits2_P0_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB15_MSK_ACTL
.set via8bits2_P0_ctrl_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB15_MSK

/* via8bits2_P0_stat */
.set via8bits2_P0_stat_sts_sts_reg__0__MASK, 0x01
.set via8bits2_P0_stat_sts_sts_reg__0__POS, 0
.set via8bits2_P0_stat_sts_sts_reg__1__MASK, 0x02
.set via8bits2_P0_stat_sts_sts_reg__1__POS, 1
.set via8bits2_P0_stat_sts_sts_reg__2__MASK, 0x04
.set via8bits2_P0_stat_sts_sts_reg__2__POS, 2
.set via8bits2_P0_stat_sts_sts_reg__3__MASK, 0x08
.set via8bits2_P0_stat_sts_sts_reg__3__POS, 3
.set via8bits2_P0_stat_sts_sts_reg__4__MASK, 0x10
.set via8bits2_P0_stat_sts_sts_reg__4__POS, 4
.set via8bits2_P0_stat_sts_sts_reg__5__MASK, 0x20
.set via8bits2_P0_stat_sts_sts_reg__5__POS, 5
.set via8bits2_P0_stat_sts_sts_reg__6__MASK, 0x40
.set via8bits2_P0_stat_sts_sts_reg__6__POS, 6
.set via8bits2_P0_stat_sts_sts_reg__7__MASK, 0x80
.set via8bits2_P0_stat_sts_sts_reg__7__POS, 7
.set via8bits2_P0_stat_sts_sts_reg__MASK, 0xFF
.set via8bits2_P0_stat_sts_sts_reg__MASK_REG, CYREG_B0_UDB15_MSK
.set via8bits2_P0_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB15_MSK_ACTL
.set via8bits2_P0_stat_sts_sts_reg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB15_MSK_ACTL
.set via8bits2_P0_stat_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B0_UDB15_ACTL
.set via8bits2_P0_stat_sts_sts_reg__STATUS_CNT_REG, CYREG_B0_UDB15_ST_CTL
.set via8bits2_P0_stat_sts_sts_reg__STATUS_CONTROL_REG, CYREG_B0_UDB15_ST_CTL
.set via8bits2_P0_stat_sts_sts_reg__STATUS_REG, CYREG_B0_UDB15_ST

/* via8bits2_P1_ctrl */
.set via8bits2_P1_ctrl_Sync_ctrl_reg__0__MASK, 0x01
.set via8bits2_P1_ctrl_Sync_ctrl_reg__0__POS, 0
.set via8bits2_P1_ctrl_Sync_ctrl_reg__1__MASK, 0x02
.set via8bits2_P1_ctrl_Sync_ctrl_reg__1__POS, 1
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B0_UDB10_11_MSK
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB10_11_MSK
.set via8bits2_P1_ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set via8bits2_P1_ctrl_Sync_ctrl_reg__2__MASK, 0x04
.set via8bits2_P1_ctrl_Sync_ctrl_reg__2__POS, 2
.set via8bits2_P1_ctrl_Sync_ctrl_reg__3__MASK, 0x08
.set via8bits2_P1_ctrl_Sync_ctrl_reg__3__POS, 3
.set via8bits2_P1_ctrl_Sync_ctrl_reg__4__MASK, 0x10
.set via8bits2_P1_ctrl_Sync_ctrl_reg__4__POS, 4
.set via8bits2_P1_ctrl_Sync_ctrl_reg__5__MASK, 0x20
.set via8bits2_P1_ctrl_Sync_ctrl_reg__5__POS, 5
.set via8bits2_P1_ctrl_Sync_ctrl_reg__6__MASK, 0x40
.set via8bits2_P1_ctrl_Sync_ctrl_reg__6__POS, 6
.set via8bits2_P1_ctrl_Sync_ctrl_reg__7__MASK, 0x80
.set via8bits2_P1_ctrl_Sync_ctrl_reg__7__POS, 7
.set via8bits2_P1_ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB10_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB10_ST_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB10_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB10_ST_CTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__MASK, 0xFF
.set via8bits2_P1_ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set via8bits2_P1_ctrl_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB10_MSK

/* via8bits2_P1_stat */
.set via8bits2_P1_stat_sts_sts_reg__0__MASK, 0x01
.set via8bits2_P1_stat_sts_sts_reg__0__POS, 0
.set via8bits2_P1_stat_sts_sts_reg__1__MASK, 0x02
.set via8bits2_P1_stat_sts_sts_reg__1__POS, 1
.set via8bits2_P1_stat_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set via8bits2_P1_stat_sts_sts_reg__16BIT_STATUS_REG, CYREG_B0_UDB10_11_ST
.set via8bits2_P1_stat_sts_sts_reg__2__MASK, 0x04
.set via8bits2_P1_stat_sts_sts_reg__2__POS, 2
.set via8bits2_P1_stat_sts_sts_reg__3__MASK, 0x08
.set via8bits2_P1_stat_sts_sts_reg__3__POS, 3
.set via8bits2_P1_stat_sts_sts_reg__4__MASK, 0x10
.set via8bits2_P1_stat_sts_sts_reg__4__POS, 4
.set via8bits2_P1_stat_sts_sts_reg__5__MASK, 0x20
.set via8bits2_P1_stat_sts_sts_reg__5__POS, 5
.set via8bits2_P1_stat_sts_sts_reg__6__MASK, 0x40
.set via8bits2_P1_stat_sts_sts_reg__6__POS, 6
.set via8bits2_P1_stat_sts_sts_reg__7__MASK, 0x80
.set via8bits2_P1_stat_sts_sts_reg__7__POS, 7
.set via8bits2_P1_stat_sts_sts_reg__MASK, 0xFF
.set via8bits2_P1_stat_sts_sts_reg__MASK_REG, CYREG_B0_UDB10_MSK
.set via8bits2_P1_stat_sts_sts_reg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set via8bits2_P1_stat_sts_sts_reg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set via8bits2_P1_stat_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set via8bits2_P1_stat_sts_sts_reg__STATUS_CNT_REG, CYREG_B0_UDB10_ST_CTL
.set via8bits2_P1_stat_sts_sts_reg__STATUS_CONTROL_REG, CYREG_B0_UDB10_ST_CTL
.set via8bits2_P1_stat_sts_sts_reg__STATUS_REG, CYREG_B0_UDB10_ST

/* via8bits2_Stat */
.set via8bits2_Stat_sts_sts_reg__0__MASK, 0x01
.set via8bits2_Stat_sts_sts_reg__0__POS, 0
.set via8bits2_Stat_sts_sts_reg__1__MASK, 0x02
.set via8bits2_Stat_sts_sts_reg__1__POS, 1
.set via8bits2_Stat_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB14_15_ACTL
.set via8bits2_Stat_sts_sts_reg__16BIT_STATUS_REG, CYREG_B0_UDB14_15_ST
.set via8bits2_Stat_sts_sts_reg__2__MASK, 0x04
.set via8bits2_Stat_sts_sts_reg__2__POS, 2
.set via8bits2_Stat_sts_sts_reg__3__MASK, 0x08
.set via8bits2_Stat_sts_sts_reg__3__POS, 3
.set via8bits2_Stat_sts_sts_reg__MASK, 0x0F
.set via8bits2_Stat_sts_sts_reg__MASK_REG, CYREG_B0_UDB14_MSK
.set via8bits2_Stat_sts_sts_reg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB14_MSK_ACTL
.set via8bits2_Stat_sts_sts_reg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB14_MSK_ACTL
.set via8bits2_Stat_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B0_UDB14_ACTL
.set via8bits2_Stat_sts_sts_reg__STATUS_CNT_REG, CYREG_B0_UDB14_ST_CTL
.set via8bits2_Stat_sts_sts_reg__STATUS_CONTROL_REG, CYREG_B0_UDB14_ST_CTL
.set via8bits2_Stat_sts_sts_reg__STATUS_REG, CYREG_B0_UDB14_ST

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 18
.set CYDEV_CHIP_DIE_PSOC4A, 10
.set CYDEV_CHIP_DIE_PSOC5LP, 17
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 10
.set CYDEV_CHIP_MEMBER_4C, 15
.set CYDEV_CHIP_MEMBER_4D, 6
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 11
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 9
.set CYDEV_CHIP_MEMBER_4I, 14
.set CYDEV_CHIP_MEMBER_4J, 7
.set CYDEV_CHIP_MEMBER_4K, 8
.set CYDEV_CHIP_MEMBER_4L, 13
.set CYDEV_CHIP_MEMBER_4M, 12
.set CYDEV_CHIP_MEMBER_4N, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 17
.set CYDEV_CHIP_MEMBER_5B, 16
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
