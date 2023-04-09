//feboncci using recursion

#include<stdio.h>

int febo(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return febo(n-1)+febo(n-2);
}

void main(){
	printf("enter number\n");
	int num;
	scanf("%d",&num);
	int ret=febo(num);
	printf("febo of %d is %d\n",num,ret);
}
