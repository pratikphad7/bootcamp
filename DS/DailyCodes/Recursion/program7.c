//factorial

#include<stdio.h>

void fun(int x){
	int factorial=1;
	for(int i=x;i>=1;i--)
		factorial=factorial*i;
	printf("factorial of x is %d\n",factorial);
}

void main(){
	fun(5);
}
