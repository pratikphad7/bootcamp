#include<stdio.h>

int fun(int n){
	if(n<=1)
		return 1;
	int x=fun(n-1);
	int y=fun(n-2);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
}

void main(){
	fun(4);
}
