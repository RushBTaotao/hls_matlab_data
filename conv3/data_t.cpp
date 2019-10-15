#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cstdlib>


#include <stdlib.h>
#include <fstream>
using namespace std;
//#include <mat.h>

int main ()
{
    int ref_out[20][10][10];
    FILE *fp;
	       	if ((fp = fopen("dtest.bin","rb")) == NULL) {
	       		cout << "�ļ���ʧ�ܣ�" << endl;
                   return 0;
	       	}
	        fread(ref_out,sizeof(int),2000,fp);
	        fclose(fp);
	        for(int i=0 ; i<20;i++){
	        				for(int j=0; j<10; j++){
	        					for (int w=0; w<10;w++){

	        					cout<<ref_out[i][j][w]<<" "<<endl;
	        					}}}
    cout<<sizeof(ref_out);
    return 0;
}
