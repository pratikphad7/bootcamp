//wap to allocate memory float type

#include<stdio.h>
#include<stdlib.h>

void main(){
	float *ptr=(float*)malloc(sizeof(float));
	*ptr=10.567;
	printf("%f\n",*ptr);
}
