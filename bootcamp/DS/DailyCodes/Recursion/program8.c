//factorial using recursion

#include<stdio.h>

int factorial=1;
void fun(int x){
	factorial=factorial*x;
	if(x!=1){
		fun(--x);
	}else{
		printf("factorial of x is %d\n",factorial);
	}
}

void main(){
	fun(5);
}
