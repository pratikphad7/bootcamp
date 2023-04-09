#include<stdio.h>

void main(){
	const int x;
	scanf("%d",&x);		//in this case we got warning coz x is constant, but we can gave value to x becoz we can change variable value at run time
	printf("%d\n",x);
}
