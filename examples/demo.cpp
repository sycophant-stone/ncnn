#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define SIZE_ARRAY (1025)
 
float sum_array(float *arr, int len)
{
    if(NULL == arr || len < 1)
    {
        cout<<"input error\n";
        return 0;
    }
    float sum(0.0);
    for(int i=0; i<len; ++i)
    {
        sum += *arr++;
    }
    return sum;
}
int main(int argc,char**argv)
{
	float *addr,sum=0.0;
	addr=(float*)calloc(1,SIZE_ARRAY);
	if (addr == NULL) {
		printf("error calloc\n");
		return -1;
	}
	for (int i=0; i<SIZE_ARRAY;i++) {
		addr[i]=2*i+1;
	}
	sum=sum_array(addr,SIZE_ARRAY);
	printf("sum:%d\n");
	return 0;
}
