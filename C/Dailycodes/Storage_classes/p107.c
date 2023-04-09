#include<stdio.h>
#include<stdlib.h>

int fun(){
	int *ptr=(int*)malloc(sizeof(int));
	int *ptr1=(int*)malloc(sizeof(int));

	*ptr=10;
	*ptr1=20;

	return *ptr1+*ptr;
	free(ptr1);
	free(ptr);
}

void main(){
	int x=fun();
	printf("%d\n",x);
}
