#include<stdio.h>

void fun(int x){
	printf("%d\n",x);
	x--;
	if(x!=0)
		fun(x);
}

void main(){
	fun(10);
}
