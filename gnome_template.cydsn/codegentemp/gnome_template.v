// ======================================================================
// gnome_template.v generated from TopDesign.cysch
// 08/30/2016 at 17:16
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_TMA4 2
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 3
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC5LP 4
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PANTHER 5
`define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1
`define CYDEV_CHIP_REV_PANTHER_ES1 1
`define CYDEV_CHIP_REV_PANTHER_ES0 0
`define CYDEV_CHIP_DIE_EXPECT 4
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 4
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_MEMBER_4G 2
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 3
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 4
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 5
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 6
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 7
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 8
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 9
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 10
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 11
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4F 12
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4M 13
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 14
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 15
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4C 16
`define CYDEV_CHIP_REVISION_4C_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_MEMBER_5B 17
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 18
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 17
`define CYDEV_CHIP_REVISION_USED 0
// Component: CyControlReg_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`endif

// Component: CyStatusReg_v1_90
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyStatusReg_v1_90"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyStatusReg_v1_90"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`endif

// Component: mux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10\mux_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10\mux_v1_10.v"
`endif

// via8bits(CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=via8bits, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=via8bits1, CY_INSTANCE_SHORT_NAME=via8bits1, CY_MAJOR_VERSION=0, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=via8bits1, )
module via8bits_0 (
    ack1,
    ack0,
    P1_in,
    P0_in,
    in_1,
    rq1,
    in_0,
    rq0,
    clk,
    P0_out,
    P1_out,
    gclk,
    gres);
    output      ack1;
    output      ack0;
    input      [7:0] P1_in;
    input      [7:0] P0_in;
    input       in_1;
    input       rq1;
    input       in_0;
    input       rq0;
    input       clk;
    output     [7:0] P0_out;
    output     [7:0] P1_out;
    output      gclk;
    output      gres;


          wire  P0_io;
          wire  P1_io;
          wire  Net_101;
          wire  Net_100;
          wire  Net_99;
          wire  Net_98;
          wire  Net_97;
          wire  Net_96;
          wire  Net_95;
          wire  Net_94;
          wire  Net_93;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;
          wire  Net_80;
          wire  Net_79;
          wire  Net_78;
          wire  Net_76;
          wire  Net_75;
          wire  Net_74;
          wire  Net_50;
          wire  Net_49;
          wire  Net_48;
          wire  Net_47;
          wire  Net_46;
          wire  Net_45;
          wire  Net_44;
          wire  Net_43;
          wire  Net_42;
          wire  Net_41;
          wire  Net_40;
          wire  Net_39;
          wire  Net_38;
          wire  Net_37;
          wire  Net_36;
          wire  Net_35;
          wire  Net_34;
          wire  Net_33;
          wire  Net_32;
          wire  Net_31;
          wire  Net_30;
          wire  Net_29;
          wire  Net_28;
          wire  Net_27;
          wire  Net_26;
          wire  Net_25;
          wire  Net_24;
          wire  Net_23;
          wire  Net_22;
          wire  Net_21;
          wire  Net_20;
          wire  Net_19;
          wire  Net_18;
          wire  Net_17;
          wire  Net_16;
          wire  Net_15;
          wire  Net_14;
          wire  Net_13;
          wire [7:0] Net_12;
          wire  Net_11;
          wire  Net_10;
          wire  Net_9;
          wire  Net_8;
          wire  Net_7;
          wire  Net_6;
          wire  Net_5;
          wire  Net_4;
          wire  Net_3;
          wire  Net_2;
          wire  Net_1;
          wire [7:0] Net_489;
          wire [7:0] Net_495;

    CyControlReg_v1_80 Ctrl (
        .control_1(P1_io),
        .control_2(ack0),
        .control_3(P0_io),
        .control_0(ack1),
        .control_4(Net_1),
        .control_5(Net_2),
        .control_6(Net_3),
        .control_7(Net_4),
        .clock(1'b0),
        .reset(1'b0));
    defparam Ctrl.Bit0Mode = 0;
    defparam Ctrl.Bit1Mode = 0;
    defparam Ctrl.Bit2Mode = 0;
    defparam Ctrl.Bit3Mode = 0;
    defparam Ctrl.Bit4Mode = 0;
    defparam Ctrl.Bit5Mode = 0;
    defparam Ctrl.Bit6Mode = 0;
    defparam Ctrl.Bit7Mode = 0;
    defparam Ctrl.BitValue = 0;
    defparam Ctrl.BusDisplay = 0;
    defparam Ctrl.ExtrReset = 0;
    defparam Ctrl.NumOutputs = 4;

    CyStatusReg_v1_90 Stat (
        .status_0(rq1),
        .status_1(in_1),
        .status_2(rq0),
        .status_3(in_0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_11),
        .status_bus(8'b0));
    defparam Stat.Bit0Mode = 0;
    defparam Stat.Bit1Mode = 0;
    defparam Stat.Bit2Mode = 0;
    defparam Stat.Bit3Mode = 0;
    defparam Stat.Bit4Mode = 0;
    defparam Stat.Bit5Mode = 0;
    defparam Stat.Bit6Mode = 0;
    defparam Stat.Bit7Mode = 0;
    defparam Stat.BusDisplay = 0;
    defparam Stat.Interrupt = 0;
    defparam Stat.MaskValue = 0;
    defparam Stat.NumInputs = 4;

    CyControlReg_v1_80 P0_ctrl (
        .control_1(Net_13),
        .control_2(Net_14),
        .control_3(Net_15),
        .control_0(Net_16),
        .control_4(Net_17),
        .control_5(Net_18),
        .control_6(Net_19),
        .control_7(Net_20),
        .clock(1'b0),
        .reset(1'b0),
        .control_bus(Net_489[7:0]));
    defparam P0_ctrl.Bit0Mode = 0;
    defparam P0_ctrl.Bit1Mode = 0;
    defparam P0_ctrl.Bit2Mode = 0;
    defparam P0_ctrl.Bit3Mode = 0;
    defparam P0_ctrl.Bit4Mode = 0;
    defparam P0_ctrl.Bit5Mode = 0;
    defparam P0_ctrl.Bit6Mode = 0;
    defparam P0_ctrl.Bit7Mode = 0;
    defparam P0_ctrl.BitValue = 0;
    defparam P0_ctrl.BusDisplay = 1;
    defparam P0_ctrl.ExtrReset = 0;
    defparam P0_ctrl.NumOutputs = 8;

    CyStatusReg_v1_90 P0_stat (
        .status_0(1'b0),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_31),
        .status_bus(P0_out[7:0]));
    defparam P0_stat.Bit0Mode = 0;
    defparam P0_stat.Bit1Mode = 0;
    defparam P0_stat.Bit2Mode = 0;
    defparam P0_stat.Bit3Mode = 0;
    defparam P0_stat.Bit4Mode = 0;
    defparam P0_stat.Bit5Mode = 0;
    defparam P0_stat.Bit6Mode = 0;
    defparam P0_stat.Bit7Mode = 0;
    defparam P0_stat.BusDisplay = 1;
    defparam P0_stat.Interrupt = 0;
    defparam P0_stat.MaskValue = 0;
    defparam P0_stat.NumInputs = 8;

    CyControlReg_v1_80 P1_ctrl (
        .control_1(Net_32),
        .control_2(Net_33),
        .control_3(Net_34),
        .control_0(Net_35),
        .control_4(Net_36),
        .control_5(Net_37),
        .control_6(Net_38),
        .control_7(Net_39),
        .clock(1'b0),
        .reset(1'b0),
        .control_bus(Net_495[7:0]));
    defparam P1_ctrl.Bit0Mode = 0;
    defparam P1_ctrl.Bit1Mode = 0;
    defparam P1_ctrl.Bit2Mode = 0;
    defparam P1_ctrl.Bit3Mode = 0;
    defparam P1_ctrl.Bit4Mode = 0;
    defparam P1_ctrl.Bit5Mode = 0;
    defparam P1_ctrl.Bit6Mode = 0;
    defparam P1_ctrl.Bit7Mode = 0;
    defparam P1_ctrl.BitValue = 0;
    defparam P1_ctrl.BusDisplay = 1;
    defparam P1_ctrl.ExtrReset = 0;
    defparam P1_ctrl.NumOutputs = 8;

    CyStatusReg_v1_90 P1_stat (
        .status_0(1'b0),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_50),
        .status_bus(P1_out[7:0]));
    defparam P1_stat.Bit0Mode = 0;
    defparam P1_stat.Bit1Mode = 0;
    defparam P1_stat.Bit2Mode = 0;
    defparam P1_stat.Bit3Mode = 0;
    defparam P1_stat.Bit4Mode = 0;
    defparam P1_stat.Bit5Mode = 0;
    defparam P1_stat.Bit6Mode = 0;
    defparam P1_stat.Bit7Mode = 0;
    defparam P1_stat.BusDisplay = 1;
    defparam P1_stat.Interrupt = 0;
    defparam P1_stat.MaskValue = 0;
    defparam P1_stat.NumInputs = 8;

    // -- Mux start --
    if (1)
    begin : mux_1
        reg [7:0] tmp__mux_1_reg;
        always @(P0_in or Net_489 or P0_io)
        begin
            case (P0_io)
                1'b0 :  tmp__mux_1_reg = P0_in[7:0];
                1'b1 :  tmp__mux_1_reg = Net_489[7:0];
            endcase
        end
        assign P0_out[7:0] = tmp__mux_1_reg;
    end
    // -- Mux end --

    // -- Mux start --
    if (1)
    begin : mux_2
        reg [7:0] tmp__mux_2_reg;
        always @(P1_in or Net_495 or P1_io)
        begin
            case (P1_io)
                1'b0 :  tmp__mux_2_reg = P1_in[7:0];
                1'b1 :  tmp__mux_2_reg = Net_495[7:0];
            endcase
        end
        assign P1_out[7:0] = tmp__mux_2_reg;
    end
    // -- Mux end --

    CyControlReg_v1_80 gnome_clk (
        .control_1(Net_74),
        .control_2(Net_75),
        .control_3(Net_76),
        .control_0(gclk),
        .control_4(Net_78),
        .control_5(Net_79),
        .control_6(Net_80),
        .control_7(Net_81),
        .clock(1'b0),
        .reset(1'b0));
    defparam gnome_clk.Bit0Mode = 0;
    defparam gnome_clk.Bit1Mode = 0;
    defparam gnome_clk.Bit2Mode = 0;
    defparam gnome_clk.Bit3Mode = 0;
    defparam gnome_clk.Bit4Mode = 0;
    defparam gnome_clk.Bit5Mode = 0;
    defparam gnome_clk.Bit6Mode = 0;
    defparam gnome_clk.Bit7Mode = 0;
    defparam gnome_clk.BitValue = 0;
    defparam gnome_clk.BusDisplay = 0;
    defparam gnome_clk.ExtrReset = 0;
    defparam gnome_clk.NumOutputs = 1;

    CyControlReg_v1_80 gnome_res (
        .control_1(Net_93),
        .control_2(Net_94),
        .control_3(Net_95),
        .control_0(gres),
        .control_4(Net_96),
        .control_5(Net_97),
        .control_6(Net_98),
        .control_7(Net_99),
        .clock(1'b0),
        .reset(1'b0));
    defparam gnome_res.Bit0Mode = 0;
    defparam gnome_res.Bit1Mode = 0;
    defparam gnome_res.Bit2Mode = 0;
    defparam gnome_res.Bit3Mode = 0;
    defparam gnome_res.Bit4Mode = 0;
    defparam gnome_res.Bit5Mode = 0;
    defparam gnome_res.Bit6Mode = 0;
    defparam gnome_res.Bit7Mode = 0;
    defparam gnome_res.BitValue = 0;
    defparam gnome_res.BusDisplay = 0;
    defparam gnome_res.ExtrReset = 0;
    defparam gnome_res.NumOutputs = 1;



endmodule

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// via8bits(CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=via8bits, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=via8bits2, CY_INSTANCE_SHORT_NAME=via8bits2, CY_MAJOR_VERSION=0, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=via8bits2, )
module via8bits_1 (
    ack1,
    ack0,
    P1_in,
    P0_in,
    in_1,
    rq1,
    in_0,
    rq0,
    clk,
    P0_out,
    P1_out,
    gclk,
    gres);
    output      ack1;
    output      ack0;
    input      [7:0] P1_in;
    input      [7:0] P0_in;
    input       in_1;
    input       rq1;
    input       in_0;
    input       rq0;
    input       clk;
    output     [7:0] P0_out;
    output     [7:0] P1_out;
    output      gclk;
    output      gres;


          wire  P0_io;
          wire  P1_io;
          wire  Net_101;
          wire  Net_100;
          wire  Net_99;
          wire  Net_98;
          wire  Net_97;
          wire  Net_96;
          wire  Net_95;
          wire  Net_94;
          wire  Net_93;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;
          wire  Net_80;
          wire  Net_79;
          wire  Net_78;
          wire  Net_76;
          wire  Net_75;
          wire  Net_74;
          wire  Net_50;
          wire  Net_49;
          wire  Net_48;
          wire  Net_47;
          wire  Net_46;
          wire  Net_45;
          wire  Net_44;
          wire  Net_43;
          wire  Net_42;
          wire  Net_41;
          wire  Net_40;
          wire  Net_39;
          wire  Net_38;
          wire  Net_37;
          wire  Net_36;
          wire  Net_35;
          wire  Net_34;
          wire  Net_33;
          wire  Net_32;
          wire  Net_31;
          wire  Net_30;
          wire  Net_29;
          wire  Net_28;
          wire  Net_27;
          wire  Net_26;
          wire  Net_25;
          wire  Net_24;
          wire  Net_23;
          wire  Net_22;
          wire  Net_21;
          wire  Net_20;
          wire  Net_19;
          wire  Net_18;
          wire  Net_17;
          wire  Net_16;
          wire  Net_15;
          wire  Net_14;
          wire  Net_13;
          wire [7:0] Net_12;
          wire  Net_11;
          wire  Net_10;
          wire  Net_9;
          wire  Net_8;
          wire  Net_7;
          wire  Net_6;
          wire  Net_5;
          wire  Net_4;
          wire  Net_3;
          wire  Net_2;
          wire  Net_1;
          wire [7:0] Net_489;
          wire [7:0] Net_495;

    CyControlReg_v1_80 Ctrl (
        .control_1(P1_io),
        .control_2(ack0),
        .control_3(P0_io),
        .control_0(ack1),
        .control_4(Net_1),
        .control_5(Net_2),
        .control_6(Net_3),
        .control_7(Net_4),
        .clock(1'b0),
        .reset(1'b0));
    defparam Ctrl.Bit0Mode = 0;
    defparam Ctrl.Bit1Mode = 0;
    defparam Ctrl.Bit2Mode = 0;
    defparam Ctrl.Bit3Mode = 0;
    defparam Ctrl.Bit4Mode = 0;
    defparam Ctrl.Bit5Mode = 0;
    defparam Ctrl.Bit6Mode = 0;
    defparam Ctrl.Bit7Mode = 0;
    defparam Ctrl.BitValue = 0;
    defparam Ctrl.BusDisplay = 0;
    defparam Ctrl.ExtrReset = 0;
    defparam Ctrl.NumOutputs = 4;

    CyStatusReg_v1_90 Stat (
        .status_0(rq1),
        .status_1(in_1),
        .status_2(rq0),
        .status_3(in_0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_11),
        .status_bus(8'b0));
    defparam Stat.Bit0Mode = 0;
    defparam Stat.Bit1Mode = 0;
    defparam Stat.Bit2Mode = 0;
    defparam Stat.Bit3Mode = 0;
    defparam Stat.Bit4Mode = 0;
    defparam Stat.Bit5Mode = 0;
    defparam Stat.Bit6Mode = 0;
    defparam Stat.Bit7Mode = 0;
    defparam Stat.BusDisplay = 0;
    defparam Stat.Interrupt = 0;
    defparam Stat.MaskValue = 0;
    defparam Stat.NumInputs = 4;

    CyControlReg_v1_80 P0_ctrl (
        .control_1(Net_13),
        .control_2(Net_14),
        .control_3(Net_15),
        .control_0(Net_16),
        .control_4(Net_17),
        .control_5(Net_18),
        .control_6(Net_19),
        .control_7(Net_20),
        .clock(1'b0),
        .reset(1'b0),
        .control_bus(Net_489[7:0]));
    defparam P0_ctrl.Bit0Mode = 0;
    defparam P0_ctrl.Bit1Mode = 0;
    defparam P0_ctrl.Bit2Mode = 0;
    defparam P0_ctrl.Bit3Mode = 0;
    defparam P0_ctrl.Bit4Mode = 0;
    defparam P0_ctrl.Bit5Mode = 0;
    defparam P0_ctrl.Bit6Mode = 0;
    defparam P0_ctrl.Bit7Mode = 0;
    defparam P0_ctrl.BitValue = 0;
    defparam P0_ctrl.BusDisplay = 1;
    defparam P0_ctrl.ExtrReset = 0;
    defparam P0_ctrl.NumOutputs = 8;

    CyStatusReg_v1_90 P0_stat (
        .status_0(1'b0),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_31),
        .status_bus(P0_out[7:0]));
    defparam P0_stat.Bit0Mode = 0;
    defparam P0_stat.Bit1Mode = 0;
    defparam P0_stat.Bit2Mode = 0;
    defparam P0_stat.Bit3Mode = 0;
    defparam P0_stat.Bit4Mode = 0;
    defparam P0_stat.Bit5Mode = 0;
    defparam P0_stat.Bit6Mode = 0;
    defparam P0_stat.Bit7Mode = 0;
    defparam P0_stat.BusDisplay = 1;
    defparam P0_stat.Interrupt = 0;
    defparam P0_stat.MaskValue = 0;
    defparam P0_stat.NumInputs = 8;

    CyControlReg_v1_80 P1_ctrl (
        .control_1(Net_32),
        .control_2(Net_33),
        .control_3(Net_34),
        .control_0(Net_35),
        .control_4(Net_36),
        .control_5(Net_37),
        .control_6(Net_38),
        .control_7(Net_39),
        .clock(1'b0),
        .reset(1'b0),
        .control_bus(Net_495[7:0]));
    defparam P1_ctrl.Bit0Mode = 0;
    defparam P1_ctrl.Bit1Mode = 0;
    defparam P1_ctrl.Bit2Mode = 0;
    defparam P1_ctrl.Bit3Mode = 0;
    defparam P1_ctrl.Bit4Mode = 0;
    defparam P1_ctrl.Bit5Mode = 0;
    defparam P1_ctrl.Bit6Mode = 0;
    defparam P1_ctrl.Bit7Mode = 0;
    defparam P1_ctrl.BitValue = 0;
    defparam P1_ctrl.BusDisplay = 1;
    defparam P1_ctrl.ExtrReset = 0;
    defparam P1_ctrl.NumOutputs = 8;

    CyStatusReg_v1_90 P1_stat (
        .status_0(1'b0),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_50),
        .status_bus(P1_out[7:0]));
    defparam P1_stat.Bit0Mode = 0;
    defparam P1_stat.Bit1Mode = 0;
    defparam P1_stat.Bit2Mode = 0;
    defparam P1_stat.Bit3Mode = 0;
    defparam P1_stat.Bit4Mode = 0;
    defparam P1_stat.Bit5Mode = 0;
    defparam P1_stat.Bit6Mode = 0;
    defparam P1_stat.Bit7Mode = 0;
    defparam P1_stat.BusDisplay = 1;
    defparam P1_stat.Interrupt = 0;
    defparam P1_stat.MaskValue = 0;
    defparam P1_stat.NumInputs = 8;

    // -- Mux start --
    if (1)
    begin : mux_1
        reg [7:0] tmp__mux_1_reg;
        always @(P0_in or Net_489 or P0_io)
        begin
            case (P0_io)
                1'b0 :  tmp__mux_1_reg = P0_in[7:0];
                1'b1 :  tmp__mux_1_reg = Net_489[7:0];
            endcase
        end
        assign P0_out[7:0] = tmp__mux_1_reg;
    end
    // -- Mux end --

    // -- Mux start --
    if (1)
    begin : mux_2
        reg [7:0] tmp__mux_2_reg;
        always @(P1_in or Net_495 or P1_io)
        begin
            case (P1_io)
                1'b0 :  tmp__mux_2_reg = P1_in[7:0];
                1'b1 :  tmp__mux_2_reg = Net_495[7:0];
            endcase
        end
        assign P1_out[7:0] = tmp__mux_2_reg;
    end
    // -- Mux end --

    CyControlReg_v1_80 gnome_clk (
        .control_1(Net_74),
        .control_2(Net_75),
        .control_3(Net_76),
        .control_0(gclk),
        .control_4(Net_78),
        .control_5(Net_79),
        .control_6(Net_80),
        .control_7(Net_81),
        .clock(1'b0),
        .reset(1'b0));
    defparam gnome_clk.Bit0Mode = 0;
    defparam gnome_clk.Bit1Mode = 0;
    defparam gnome_clk.Bit2Mode = 0;
    defparam gnome_clk.Bit3Mode = 0;
    defparam gnome_clk.Bit4Mode = 0;
    defparam gnome_clk.Bit5Mode = 0;
    defparam gnome_clk.Bit6Mode = 0;
    defparam gnome_clk.Bit7Mode = 0;
    defparam gnome_clk.BitValue = 0;
    defparam gnome_clk.BusDisplay = 0;
    defparam gnome_clk.ExtrReset = 0;
    defparam gnome_clk.NumOutputs = 1;

    CyControlReg_v1_80 gnome_res (
        .control_1(Net_93),
        .control_2(Net_94),
        .control_3(Net_95),
        .control_0(gres),
        .control_4(Net_96),
        .control_5(Net_97),
        .control_6(Net_98),
        .control_7(Net_99),
        .clock(1'b0),
        .reset(1'b0));
    defparam gnome_res.Bit0Mode = 0;
    defparam gnome_res.Bit1Mode = 0;
    defparam gnome_res.Bit2Mode = 0;
    defparam gnome_res.Bit3Mode = 0;
    defparam gnome_res.Bit4Mode = 0;
    defparam gnome_res.Bit5Mode = 0;
    defparam gnome_res.Bit6Mode = 0;
    defparam gnome_res.Bit7Mode = 0;
    defparam gnome_res.BitValue = 0;
    defparam gnome_res.BusDisplay = 0;
    defparam gnome_res.ExtrReset = 0;
    defparam gnome_res.NumOutputs = 1;



endmodule

// top
module top ;

          wire  Net_999;
          wire  Net_998;
          wire  Net_978;
          wire  Net_977;
          wire [7:0] Net_976;
          wire [7:0] Net_975;
          wire  Net_974;
          wire  Net_973;
          wire  Net_1031;
          wire  Net_726;
          wire  Net_851;
          wire [7:0] Net_796;
          wire [7:0] Net_870;
          wire  Net_20;
          wire  Net_19;
          wire [7:0] Net_18;
          wire [7:0] Net_791;
          wire  Net_12;
          wire  Net_34;
          wire  Net_992;
          wire  Net_981;
          wire [7:0] Net_972;
          wire [7:0] Net_971;

    via8bits_0 via8bits1 (
        .clk(Net_12),
        .rq0(Net_992),
        .in_0(Net_992),
        .rq1(Net_992),
        .in_1(Net_992),
        .P0_in(Net_791[7:0]),
        .P1_in(Net_18[7:0]),
        .ack0(Net_19),
        .ack1(Net_20),
        .P0_out(Net_870[7:0]),
        .P1_out(Net_796[7:0]),
        .gclk(Net_851),
        .gres(Net_726));


	cy_isr_v1_0
		#(.int_type(2'b00))
		ISR
		 (.int_signal(Net_34));


    assign Net_34 = 1'h0;


	cy_clock_v1_0
		#(.id("98abe769-d264-4cb0-a544-034de32b45a9"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_12));


    assign Net_18[7:0] = 8'h0;

    assign Net_791[7:0] = 8'h0;

    via8bits_1 via8bits2 (
        .clk(Net_981),
        .rq0(Net_992),
        .in_0(Net_992),
        .rq1(Net_992),
        .in_1(Net_992),
        .P0_in(Net_971[7:0]),
        .P1_in(Net_972[7:0]),
        .ack0(Net_973),
        .ack1(Net_974),
        .P0_out(Net_975[7:0]),
        .P1_out(Net_976[7:0]),
        .gclk(Net_977),
        .gres(Net_978));

    assign Net_971[7:0] = 8'h0;

    assign Net_972[7:0] = 8'h0;


	cy_clock_v1_0
		#(.id("f305a45d-5a55-4b64-bcc2-a236b5036f65"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_4
		 (.clock_out(Net_981));



	cy_clock_v1_0
		#(.id("622774ad-f868-49a5-8a00-37b43ecbd6ea"),
		  .source_clock_id("315365C3-2E3E-4f04-84A2-BB564A173261"),
		  .divisor(0),
		  .period("16666666666666.7"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_5
		 (.clock_out(Net_992));




endmodule

