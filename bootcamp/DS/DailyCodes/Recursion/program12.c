//sum of natural number

#include<stdio.h>

int sum(int num){
	if(num<1)
		return 0;
	return sum(num-1)+num;
}

void main(){
	int sumofnaturalno=sum(10);
	printf("sum of natural numbers up to n is %d\n",sumofnaturalno);
}
