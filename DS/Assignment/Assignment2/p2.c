#include<stdio.h>

void main(){
	int a=10;

	if(a==1)
		printf("%d\n",a);
	else
		printf("%d\n",a++);
	if(a!=10)
		printf("%d\n",a);
	else
		printf("xyz\n");
}
