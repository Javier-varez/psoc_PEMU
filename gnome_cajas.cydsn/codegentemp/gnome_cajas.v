// ======================================================================
// gnome_cajas.v generated from TopDesign.cysch
// 08/17/2016 at 00:23
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

// Component: DigitalComp_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\DigitalComp_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\DigitalComp_v1_0\DigitalComp_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\DigitalComp_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\DigitalComp_v1_0\DigitalComp_v1_0.v"
`endif

// Component: not_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0\not_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0\not_v1_0.v"
`endif

// Component: Centr
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Users\Javier\Documents\PSoC Creator\gnome_workspace\gnome_cajas.cydsn\Centr"
`include "C:\Users\Javier\Documents\PSoC Creator\gnome_workspace\gnome_cajas.cydsn\Centr\Centr.v"
`else
`define CY_BLK_DIR "C:\Users\Javier\Documents\PSoC Creator\gnome_workspace\gnome_cajas.cydsn\Centr"
`include "C:\Users\Javier\Documents\PSoC Creator\gnome_workspace\gnome_cajas.cydsn\Centr\Centr.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// I2C_v3_50(Address_Decode=1, BusSpeed_kHz=100, ClockInputVisibility=false, CtlModeReplacementString=SyncCtl, EnableWakeup=false, ExternalBuffer=false, Externi2cIntrHandler=false, ExternTmoutIntrHandler=false, FF=true, Hex=false, I2C_Mode=2, I2cBusPort=0, Implementation=1, InternalUdbClockToleranceMinus=25, InternalUdbClockTolerancePlus=5, NotSlaveClockMinusTolerance=25, NotSlaveClockPlusTolerance=5, PrescalerEnabled=false, PrescalerPeriod=1, Psoc3ffSelected=false, Psoc5AffSelected=false, Psoc5lpffSelected=true, RemoveI2cff=false, RemoveI2cUdb=true, RemoveIntClock=true, RemoveTimeoutTimer=true, SclTimeoutEnabled=false, SdaTimeoutEnabled=false, Slave_Address=8, SlaveClockMinusTolerance=5, SlaveClockPlusTolerance=50, TimeoutEnabled=false, TimeoutImplementation=0, TimeOutms=25, TimeoutPeriodff=1563, TimeoutPeriodUdb=39999, UDB_MSTR=false, UDB_MULTI_MASTER_SLAVE=false, UDB_SLV=false, UdbInternalClock=false, UdbRequiredClock=1600, UdbSlaveFixedPlacementEnable=false, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=I2C_v3_50, CY_CONTROL_FILE=I2C_Slave_DefaultPlacement.ctl, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=I2C, CY_INSTANCE_SHORT_NAME=I2C, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=50, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=I2C, )
module I2C_v3_50_1 (
    sda_o,
    scl_o,
    sda_i,
    scl_i,
    iclk,
    bclk,
    reset,
    clock,
    scl,
    sda,
    itclk);
    output      sda_o;
    output      scl_o;
    input       sda_i;
    input       scl_i;
    output      iclk;
    output      bclk;
    input       reset;
    input       clock;
    inout       scl;
    inout       sda;
    output      itclk;


          wire  sda_x_wire;
          wire  sda_yfb;
          wire  udb_clk;
          wire  Net_975;
          wire  Net_974;
          wire  Net_973;
          wire  bus_clk;
          wire  Net_972;
          wire  Net_968;
          wire  scl_yfb;
          wire  Net_969;
          wire  Net_971;
          wire  Net_970;
          wire  timeout_clk;
          wire  Net_697;
          wire  Net_1045;
          wire [1:0] Net_1109;
          wire [5:0] Net_643;
          wire  scl_x_wire;

	// Vmux_sda_out (cy_virtualmux_v1_0)
	assign sda_x_wire = Net_643[1];


	cy_isr_v1_0
		#(.int_type(2'b00))
		I2C_IRQ
		 (.int_signal(Net_697));


    cy_psoc3_i2c_v1_0 I2C_FF (
        .clock(bus_clk),
        .scl_in(Net_1109[0]),
        .sda_in(Net_1109[1]),
        .scl_out(Net_643[0]),
        .sda_out(Net_643[1]),
        .interrupt(Net_643[2]));
    defparam I2C_FF.use_wakeup = 0;

	// Vmux_interrupt (cy_virtualmux_v1_0)
	assign Net_697 = Net_643[2];

	// Vmux_scl_out (cy_virtualmux_v1_0)
	assign scl_x_wire = Net_643[0];

    OneTerminal OneTerminal_1 (
        .o(Net_969));

    OneTerminal OneTerminal_2 (
        .o(Net_968));

	// Vmux_clock (cy_virtualmux_v1_0)
	assign udb_clk = clock;


	cy_clock_v1_0
		#(.id("eead4541-21ee-43b3-b1a9-7523d85bbcbf/5ece924d-20ba-480e-9102-bc082dcdd926"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		BusClock
		 (.clock_out(bus_clk));



    assign bclk = bus_clk | Net_973;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_973));


    assign iclk = udb_clk | Net_974;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_974));

	// Vmux_scl_in (cy_virtualmux_v1_0)
	assign Net_1109[0] = scl_yfb;

	// Vmux_sda_in (cy_virtualmux_v1_0)
	assign Net_1109[1] = sda_yfb;

	wire [0:0] tmpOE__Bufoe_scl_net;

	cy_bufoe
		Bufoe_scl
		 (.x(scl_x_wire),
		  .y(scl),
		  .oe(tmpOE__Bufoe_scl_net),
		  .yfb(scl_yfb));

	assign tmpOE__Bufoe_scl_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{Net_969} : {Net_969};

	wire [0:0] tmpOE__Bufoe_sda_net;

	cy_bufoe
		Bufoe_sda
		 (.x(sda_x_wire),
		  .y(sda),
		  .oe(tmpOE__Bufoe_sda_net),
		  .yfb(sda_yfb));

	assign tmpOE__Bufoe_sda_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{Net_968} : {Net_968};

	// Vmux_timeout_clock (cy_virtualmux_v1_0)
	assign timeout_clk = clock;


    assign itclk = timeout_clk | Net_975;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_975));


    assign sda_o = sda_x_wire;

    assign scl_o = scl_x_wire;


endmodule

// LCD_gnome(CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=LCD_gnome, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LCD_gnome, CY_INSTANCE_SHORT_NAME=LCD_gnome, CY_MAJOR_VERSION=0, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=LCD_gnome, )
module LCD_gnome_2 (
    A,
    B,
    clk);
    input      [7:0] A;
    input      [7:0] B;
    input       clk;


          wire  Net_80;
          wire  Net_79;
          wire  Net_78;
          wire  Net_77;
          wire  Net_76;
          wire  Net_75;
          wire  Net_74;
          wire  Net_73;
          wire  Net_72;
          wire  Net_71;
          wire  Net_70;
          wire  Net_69;
          wire  Net_68;
          wire  Net_67;
          wire  Net_66;
          wire  Net_65;
          wire  Net_64;
          wire  Net_63;

    CyStatusReg_v1_90 A_reg (
        .status_0(1'b0),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_71),
        .status_bus(A[7:0]));
    defparam A_reg.Bit0Mode = 0;
    defparam A_reg.Bit1Mode = 0;
    defparam A_reg.Bit2Mode = 0;
    defparam A_reg.Bit3Mode = 0;
    defparam A_reg.Bit4Mode = 0;
    defparam A_reg.Bit5Mode = 0;
    defparam A_reg.Bit6Mode = 0;
    defparam A_reg.Bit7Mode = 0;
    defparam A_reg.BusDisplay = 1;
    defparam A_reg.Interrupt = 0;
    defparam A_reg.MaskValue = 0;
    defparam A_reg.NumInputs = 8;

    CyStatusReg_v1_90 B_reg (
        .status_0(1'b0),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .clock(clk),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_80),
        .status_bus(B[7:0]));
    defparam B_reg.Bit0Mode = 0;
    defparam B_reg.Bit1Mode = 0;
    defparam B_reg.Bit2Mode = 0;
    defparam B_reg.Bit3Mode = 0;
    defparam B_reg.Bit4Mode = 0;
    defparam B_reg.Bit5Mode = 0;
    defparam B_reg.Bit6Mode = 0;
    defparam B_reg.Bit7Mode = 0;
    defparam B_reg.BusDisplay = 1;
    defparam B_reg.Interrupt = 0;
    defparam B_reg.MaskValue = 0;
    defparam B_reg.NumInputs = 8;



endmodule

// Component: and_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0\and_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0\and_v1_0.v"
`endif

// Component: B_UART_v2_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`endif

// UART_v2_50(Address1=0, Address2=0, BaudRate=115200, BreakBitsRX=13, BreakBitsTX=13, BreakDetect=false, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=0, Enable_TX=1, Enable_TXIntInterrupt=0, EnableHWAddress=0, EnIntRXInterrupt=false, EnIntTXInterrupt=false, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=false, InternalClock=true, InternalClockToleranceMinus=3.93736842105263, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=1, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=false, InterruptOnTXFifoEmpty=false, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=921600, RXAddressMode=0, RXBufferSize=4, RxBuffRegSizeReplacementString=uint8, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=4, TxBuffRegSizeReplacementString=uint8, TXEnable=true, Use23Polling=true, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=UART_v2_50, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=UART, CY_INSTANCE_SHORT_NAME=UART, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=UART, )
module UART_v2_50_3 (
    rx_clk,
    rx_data,
    tx_clk,
    tx_data,
    rx_interrupt,
    tx_interrupt,
    tx,
    tx_en,
    rts_n,
    reset,
    cts_n,
    clock,
    rx);
    output      rx_clk;
    output      rx_data;
    output      tx_clk;
    output      tx_data;
    output      rx_interrupt;
    output      tx_interrupt;
    output      tx;
    output      tx_en;
    output      rts_n;
    input       reset;
    input       cts_n;
    input       clock;
    input       rx;

    parameter Address1 = 0;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 0;
    parameter EnIntTXInterrupt = 0;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 0;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_clock_v1_0
		#(.id("b0162966-0060-4af5-82d1-fcb491ad7619/be0a0e37-ad17-42ca-b5a1-1a654d736358"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1085069444.44444"),
		  .is_direct(0),
		  .is_digital(1))
		IntClock
		 (.clock_out(Net_9));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = Net_9;

    B_UART_v2_50 BUART (
        .cts_n(cts_n),
        .tx(tx),
        .rts_n(rts_n),
        .tx_en(tx_en),
        .clock(Net_61),
        .reset(reset),
        .rx(rx),
        .tx_interrupt(tx_interrupt),
        .rx_interrupt(rx_interrupt),
        .tx_data(tx_data),
        .tx_clk(tx_clk),
        .rx_data(rx_data),
        .rx_clk(rx_clk));
    defparam BUART.Address1 = 0;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 13;
    defparam BUART.BreakBitsTX = 13;
    defparam BUART.BreakDetect = 0;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 0;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 1;



endmodule

// via8bits(CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=via8bits, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=via8bits2, CY_INSTANCE_SHORT_NAME=via8bits2, CY_MAJOR_VERSION=0, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=via8bits2, )
module via8bits_4 (
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
          wire  Net_947;
          wire  Net_946;
          wire  Net_945;
          wire  Net_944;
          wire  Net_942;
          wire  Net_940;
          wire  Net_939;
          wire  Net_938;
          wire  Net_937;
          wire  Net_936;
          wire  Net_585;
          wire  Net_952;
          wire  Net_638;
          wire  Net_649;
          wire  Net_648;
          wire  Net_647;
          wire  Net_646;
          wire  Net_645;
          wire [7:0] P1_signal;
          wire  Net_644;
          wire  Net_643;
          wire  Net_642;
          wire  Net_641;
          wire  Net_639;
          wire  Net_941;
          wire  Net_943;
          wire  Net_640;
          wire  Net_233;
          wire  Net_858;
          wire  Net_903;
          wire  Net_869;
          wire  Net_811;
          wire  Net_34;
          wire  Net_851;
          wire [7:0] Net_796;
          wire [7:0] Net_791;
          wire  Net_12;
          wire  Net_992;
          wire  Net_981;
          wire [7:0] Net_972;
          wire [7:0] Net_971;
          wire  Net_873;
          wire  Net_836;
          wire [7:0] Net_872;
          wire [7:0] Net_842;
          wire [7:0] Net_784;
          wire [7:0] Net_870;
          wire  Net_20;
          wire  Net_19;
          wire  Net_726;
          wire [7:0] Net_597;
          wire  Net_631;
          wire  Net_660;
          wire  Net_659;

    via8bits_0 via8bits1 (
        .clk(Net_12),
        .rq0(Net_659),
        .in_0(Net_659),
        .rq1(Net_660),
        .in_1(Net_660),
        .P0_in(Net_791[7:0]),
        .P1_in(P1_signal[7:0]),
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



	cy_clock_v1_0
		#(.id("d2a9e78f-cee6-4ce0-85cf-b6e99ffdd7de"),
		  .source_clock_id("315365C3-2E3E-4f04-84A2-BB564A173261"),
		  .divisor(0),
		  .period("16666666666666.7"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_3
		 (.clock_out(Net_811));


    assign Net_842[7:0] = 8'h6E;

    assign Net_873 = (P1_signal[7:0] >= Net_872[7:0]);


    assign Net_858 = ~Net_903;


	cy_clock_v1_0
		#(.id("defa1370-e25c-4174-a458-af8ba20efcf0"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_12));


    assign Net_34 = 1'h0;

	wire [0:0] tmpOE__i2c_scl_net;
	wire [0:0] tmpFB_0__i2c_scl_net;
	wire [0:0] tmpINTERRUPT_0__i2c_scl_net;
	electrical [0:0] tmpSIOVREF__i2c_scl_net;

	cy_psoc3_pins_v1_10
		#(.id("7d66f3fe-4d59-4a28-9b90-3b8b02918d16"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		i2c_scl
		 (.oe(tmpOE__i2c_scl_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__i2c_scl_net[0:0]}),
		  .io({Net_640}),
		  .siovref(tmpSIOVREF__i2c_scl_net),
		  .interrupt({tmpINTERRUPT_0__i2c_scl_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__i2c_scl_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    assign Net_872[7:0] = 8'h46;

	wire [0:0] tmpOE__Button_net;
	wire [0:0] tmpIO_0__Button_net;
	wire [0:0] tmpINTERRUPT_0__Button_net;
	electrical [0:0] tmpSIOVREF__Button_net;

	cy_psoc3_pins_v1_10
		#(.id("8d318d8b-cf7b-4b6b-b02c-ab1c5c49d0ba"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Button
		 (.oe(tmpOE__Button_net),
		  .y({1'b0}),
		  .fb({Net_903}),
		  .io({tmpIO_0__Button_net[0:0]}),
		  .siovref(tmpSIOVREF__Button_net),
		  .interrupt({tmpINTERRUPT_0__Button_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Button_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    assign Net_791[7:0] = 8'h0;

    Centr Centr (
        .ack1(Net_20),
        .P0(Net_870[7:0]),
        .ack0(Net_19),
        .X(Net_858),
        .clk(Net_811),
        .res(Net_726),
        .P1(P1_signal[7:0]),
        .rq1(Net_660),
        .rq0(Net_659),
        .PGrand(Net_597[7:0]),
        .Ppeq(Net_784[7:0]));


	cy_isr_v1_0
		#(.int_type(2'b10))
		UART_RX_IT
		 (.int_signal(Net_943));


	wire [0:0] tmpOE__Rx_1_net;
	wire [0:0] tmpIO_0__Rx_1_net;
	wire [0:0] tmpINTERRUPT_0__Rx_1_net;
	electrical [0:0] tmpSIOVREF__Rx_1_net;

	cy_psoc3_pins_v1_10
		#(.id("236d442f-39b6-4470-a1ec-e8148b60b2ef"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Rx_1
		 (.oe(tmpOE__Rx_1_net),
		  .y({1'b0}),
		  .fb({Net_941}),
		  .io({tmpIO_0__Rx_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Rx_1_net),
		  .interrupt({tmpINTERRUPT_0__Rx_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Rx_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__i2c_sda_net;
	wire [0:0] tmpFB_0__i2c_sda_net;
	wire [0:0] tmpINTERRUPT_0__i2c_sda_net;
	electrical [0:0] tmpSIOVREF__i2c_sda_net;

	cy_psoc3_pins_v1_10
		#(.id("95785044-4c7a-4ae6-a5f4-14801aff4ae6"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		i2c_sda
		 (.oe(tmpOE__i2c_sda_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__i2c_sda_net[0:0]}),
		  .io({Net_639}),
		  .siovref(tmpSIOVREF__i2c_sda_net),
		  .interrupt({tmpINTERRUPT_0__i2c_sda_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__i2c_sda_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    I2C_v3_50_1 I2C (
        .sda(Net_639),
        .scl(Net_640),
        .clock(1'b0),
        .reset(1'b0),
        .bclk(Net_643),
        .iclk(Net_644),
        .scl_i(1'b0),
        .sda_i(1'b0),
        .scl_o(Net_647),
        .sda_o(Net_648),
        .itclk(Net_649));

    LCD_gnome_2 LCD_gnome (
        .A(Net_597[7:0]),
        .B(Net_784[7:0]),
        .clk(Net_631));


	cy_clock_v1_0
		#(.id("0d3fd508-ea1a-47c1-956f-67110a0378e6"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_2
		 (.clock_out(Net_631));



    assign Net_952 = Net_873 & Net_836;

	wire [0:0] tmpOE__LED_net;
	wire [0:0] tmpFB_0__LED_net;
	wire [0:0] tmpIO_0__LED_net;
	wire [0:0] tmpINTERRUPT_0__LED_net;
	electrical [0:0] tmpSIOVREF__LED_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED
		 (.oe(tmpOE__LED_net),
		  .y({Net_952}),
		  .fb({tmpFB_0__LED_net[0:0]}),
		  .io({tmpIO_0__LED_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_net),
		  .interrupt({tmpINTERRUPT_0__LED_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    assign Net_836 = (P1_signal[7:0] <= Net_842[7:0]);

	wire [0:0] tmpOE__Tx_1_net;
	wire [0:0] tmpFB_0__Tx_1_net;
	wire [0:0] tmpIO_0__Tx_1_net;
	wire [0:0] tmpINTERRUPT_0__Tx_1_net;
	electrical [0:0] tmpSIOVREF__Tx_1_net;

	cy_psoc3_pins_v1_10
		#(.id("ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Tx_1
		 (.oe(tmpOE__Tx_1_net),
		  .y({Net_585}),
		  .fb({tmpFB_0__Tx_1_net[0:0]}),
		  .io({tmpIO_0__Tx_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Tx_1_net),
		  .interrupt({tmpINTERRUPT_0__Tx_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Tx_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    UART_v2_50_3 UART (
        .cts_n(1'b0),
        .tx(Net_585),
        .rts_n(Net_937),
        .tx_en(Net_938),
        .clock(1'b0),
        .reset(1'b0),
        .rx(Net_941),
        .tx_interrupt(Net_942),
        .rx_interrupt(Net_943),
        .tx_data(Net_944),
        .tx_clk(Net_945),
        .rx_data(Net_946),
        .rx_clk(Net_947));
    defparam UART.Address1 = 0;
    defparam UART.Address2 = 0;
    defparam UART.EnIntRXInterrupt = 0;
    defparam UART.EnIntTXInterrupt = 0;
    defparam UART.FlowControl = 0;
    defparam UART.HalfDuplexEn = 0;
    defparam UART.HwTXEnSignal = 0;
    defparam UART.NumDataBits = 8;
    defparam UART.NumStopBits = 1;
    defparam UART.ParityType = 0;
    defparam UART.RXEnable = 1;
    defparam UART.TXEnable = 1;

    via8bits_4 via8bits2 (
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

