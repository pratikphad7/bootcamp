#include<stdio.h>

int fun(int n){
	printf("n = %d\n",n);
	if(n<=1)
		return 1;
	return fun(n-1)+fun(n-2);
}

void main(){
	int ret=fun(3);
	printf("sum of two functoin is %d\n",ret);
}
