#include<stdio.h>

int sum=0;

int fun(int x){
	sum=x+sum;
	if(x!=1)
		sum=fun(--x);
	else
		printf("sum=%d\n",sum);
	
}

void main(){
	fun(10);
}
