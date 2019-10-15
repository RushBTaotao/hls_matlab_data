#include <stdio.h>
#include <math.h>
#include <ap_fixed.h>
#include "hls_stream.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ap_int.h>

typedef ap_int<16> int16;

void CONV_3X3(
    int16 mat_in[20][10][10],
    int16 mat_out[20][10][10],
    int16 weight_in [20][3][3]
);
