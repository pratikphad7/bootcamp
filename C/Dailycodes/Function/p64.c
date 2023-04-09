#include<stdio.h>

int add(int a,int b){
	int c=a+b;
	return c;
}

float sub(float a,float b){
	float c=a-b;
	return c;
}

void main(){
	int (*ptr)(int,int);
	ptr=add;
	int x=add(10,20);
	printf("add %d\n",x);

	float (*ptr1)(float,float);
	ptr1=sub;
	float y=sub(20.57,10.44);
	printf("sub %f",y);
}
