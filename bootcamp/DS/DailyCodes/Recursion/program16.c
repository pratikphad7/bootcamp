//febonacci series

#include<stdio.h>

int febo(int x){
	int a=0;
	int b=1;
	int sum=0;
	for(int i=0;i<x;i++){
		a=b;
		b=sum;
		sum=a+b;
	}
	return sum;
}

void main(){
	int num;
	printf("Enter num\n");
	scanf("%d",&num);
	int ret= febo(num);
	printf("febo of %d is %d\n",num,ret);
}
