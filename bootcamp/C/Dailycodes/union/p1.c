#include<stdio.h>

union name{
	int x;
	char c;
	double d;
};

void main(){
	printf("%ld\n",sizeof(union name));  //8
}
	
