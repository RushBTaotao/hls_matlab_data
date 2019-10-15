#include <stdio.h>
#include <math.h>
#include <ap_fixed.h>
#include "hls_stream.h"
#include "conv3_test.h"

// input 8x8 matrix 20 channal pading =1;
// input [channal] [row][col]

void CONV_3X3(
    int16 mat_in[20][10][10],
    int16 mat_out[20][10][10],
    int16 weight_in [20][3][3]
)
{
    for (int channal=0;channal<= 19;channal++){
    	for(int row=1;row<=8;row++){
    		for(int col=1;col<=8;col++){
    			for(int conv_r=0;conv_r<=2;conv_r++){
    				for(int conv_c=0;conv_c<=2;conv_c++)
    				{
    					mat_out[channal][row][col]+=weight_in[channal][conv_r][conv_c]*mat_in[channal][row+conv_r-1][col+conv_c-1];
    				}
    			}
    		}
    	}
    }

}
