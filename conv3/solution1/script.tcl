############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project conv3
set_top conv3
add_files conv3/conv3_test.cpp
add_files -tb conv3/conv3_tb.cpp
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./conv3/solution1/directives.tcl"
csim_design -clean -setup
csynth_design
cosim_design
export_design -format ip_catalog
