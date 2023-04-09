#include<stdio.h>

void main(){
	const int x=10;
	x=30;		//we got error at compile time coz x is constant and we can't change value of constant at compile time
	printf("%d\n",x);
}
