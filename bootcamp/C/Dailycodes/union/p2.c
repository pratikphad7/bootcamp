#include<stdio.h>

union demo{
	int x;
	char c;
	double z;
}obj1;
void main(){
	//union demo obj1={1,'c',12.33}; we can't initilize union object like this
	
	union demo obj1;

	obj1.x=10;
	printf("%d\n",obj1.x);

	obj1.c='d';
	printf("%c\n",obj1.c);

	obj1.z=3.987;
	printf("%lf\n",obj1.z);

//	printf("%d\n",obj1.x);   //union gave memory at a time one data
}
