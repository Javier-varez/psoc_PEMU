
//`#start header` -- edit after this line, do not edit this line
// ========================================
//
// Copyright YOUR COMPANY, THE YEAR
// All Rights Reserved
// UNPUBLISHED, LICENSED SOFTWARE.
//
// CONFIDENTIAL AND PROPRIETARY INFORMATION
// WHICH IS THE PROPERTY OF your company.
//
// ========================================
`include "cypress.v"
//`#end` -- edit above this line, do not edit this line
// Generated on 06/13/2016 at 20:02
// Component: Centr
module Centr (P1,PGrand,Ppeq,rq0,rq1,ack0,ack1,clk,P0,res,X);

//`#start body` -- edit after this line, do not edit this line

//        Your code goes here
  input X,ack1,clk,res,ack0;
  input [7:0] P0;
  
  output rq0,rq1;
  output [7:0] Ppeq;
  output [7:0] PGrand;
  output [7:0] P1;
  
  reg [7:0] temp;
  //reg [7:0] P1;
  reg rq0,c,d,resetemp,parocuenta;//,rq1;
  reg [7:0] Ppeq;
  reg [7:0] PGrand;
  reg [1:0] v;
  
  always@(posedge clk or posedge res)
    if(res)
      begin
        v <= 0;
        resetemp <= 0;
        parocuenta <= 0;
      end
    else if((v==0) && (rq1==0))
     begin
       v <= 1;
       resetemp <= 0;
       parocuenta <= 0;
     end
    else if((v==1) && (rq1==1))
      begin
        v <= 2;
        parocuenta <= 1;
      end
    else if ((v==2) && (rq1==0))
      begin
        v <= 3;
        resetemp <= 1;
      end
    else if(v==3)
      v <= 0;
 always@(posedge clk or posedge res)  
    if(res)
      temp <= 0;
    else if(X && (resetemp==0) && (parocuenta==0))
      temp <= temp+1;
    else if(resetemp)
      temp <= 0;
  
 /* always@(posedge clk or posedge res)  
    if(res)
      P1<=0;
    else if(X==0 & rq1)
      P1<=temp;*/
  
  assign P1 = temp;
  
  
  
  // maquina de estado
  reg [1:0] state;
  
   always@(posedge clk or posedge res)
     if(res)
       state<=0;
     else if ((state==0) & X)
       state<=1;
     else if ((state==1) & (X==0) & (ack1))
       state<=2;
     else if ((state==2)&(ack1==0))
       state<=0;
       
  
  //rq1
  assign rq1=(state==2);

  
  always@(posedge clk or posedge res)
    if(res)
      begin
        Ppeq<=0;
        c<=0;
      end
    else if((P0[7]==1) & (ack0) & (c==0))
      begin
        Ppeq<=Ppeq+1;
        c<=1;
      end
    else if((ack0==0) & (c==1))
      c<=0;
  
  always@(posedge clk or posedge res)
    if(res)
      begin
        PGrand<=0;
        d<=0;
      end
    else if((P0[0]==1) & (ack0) & (d==0))
      begin
        PGrand<=PGrand+1;
        d<=1;
      end
    else if((ack0==0) & (d==1))
      d<=0;
  

  always@(posedge clk or posedge res)
    if(res)
      rq0<=0;
    else if(ack0)
      rq0<=1;
    else if(ack0==0)
      rq0<=0;
     

//`#end` -- edit above this line, do not edit this line
endmodule
//`#start footer` -- edit after this line, do not edit this line
//`#end` -- edit above this line, do not edit this line
