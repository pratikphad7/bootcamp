//factorial using recursion

#include<stdio.h>

int facto(int num){
	if(num<=1)
		return 1;
	return facto(num-1)*num;
}

void main(){
	int factorial=facto(5);
	printf("factorial of n is %d\n",factorial);
}
