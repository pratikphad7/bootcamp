#include<stdio.h>

int retval(int);

void main(){
	int x=10;

	retval(x);

	int y=retval(x);
	printf("%d\n",y);
}

int retval(int a){
	int y=a+10;
	int z=y+20;
	return a,y,z;
}

