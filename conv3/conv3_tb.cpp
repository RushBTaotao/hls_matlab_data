#include "conv3_test.h"
#include <iostream>
#include <cstdlib>

#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <ap_fixed.h>
using namespace std;

int main(void)
{
	        int16 in[20][10][10];
	        int16 out[20][10][10];
	        int16 ref_out[20][10][10];
	        int16 weight[20][3][3];
	        int16 counter=0;

	/*       for(int i=0 ; i<20;i++){
			for(int j=0; j<10; j++){
				for (int w=0; w<10;w++){
					out[i][j][w]=0;
				}
			}
		}

	       FILE *fid1;
	       	if ((fid1 = fopen("C:/Users/HT/Desktop/code/hls_matlab_data/conv3/dataout.bin","rb")) == NULL) {
	       		cout << "open error1" << endl;
	       	}
	        fread(ref_out,sizeof(short),2000,fid1);
	        fclose(fid1);
	        for(int i=0 ; i<20;i++){
	        				for(int j=0; j<10; j++){
	        					for (int w=0; w<10;w++){

	        					cout<<ref_out[i][j][w]<<" ";
	        					}}}


	        if ((fid1 = fopen("C:/Users/HT/Desktop/code/hls_matlab_data/conv3/datain.bin","rb")) == NULL) {
	        	       		cout << "open error2" << endl;
	        	       	}
	        fread(in,sizeof(short),2000,fid1);
	        fclose(fid1);


	        if ((fid1 = fopen("C:/Users/HT/Desktop/code/hls_matlab_data/conv3/weight.bin","rb")) == NULL) {
	       	        	       		cout << "open error3" << endl;
	       	        	       	}
	        fread(weight,sizeof(short),180,fid1);
	        fclose(fid1);

	        CONV_3X3(in,out,weight);

	        for(int i=0 ; i<20;i++){
				for(int j=0; j<10; j++){
					for (int w=0; w<10;w++){
						if(out[i][j][w]==ref_out[i][j][w])
						{
							counter++;
						}
	                    else
	                    {
	                        cout<<i<<" "<<j<<" "<<" "<<w<<" "<<out[i][j][w]<<" "<<ref_out[i][j][w]<<" "<<in[i][j][w]<<endl;
	                    }


					}
				}
			}


		cout<<endl<<counter<<endl<<sizeof(in)/sizeof(int16)<<endl;
*/
	        float a[10];
	        ap_fixed<8, 4, AP_RND, AP_SAT> b[10];
	        FILE * fid1;
	        if ((fid1 = fopen("C:/Users/HT/Desktop/code/hls_matlab_data/conv3/bit.bin","rb")) == NULL) {
	        	       	        	       		cout << "open error3" << endl;
	        	       	        	       	}
	        	        fread(a,sizeof(float),10,fid1);
	        	        fclose(fid1);

	        	 for(int i=0;i<10;i++)
	        	 {
	        		 b[i]=a[i];
	        		 cout<<a[i]<<" "<<b[i]<<endl;
	        	 }



return 0 ;



}
