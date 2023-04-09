#include<stdio.h>

int retval(int);

void main(){
	int a=10;
	int x=retval(a);
	printf("%d\n",x);
}

int retval(int x){
	int y=x+10;
	int z=y+20;

	return x,y,z;
}
