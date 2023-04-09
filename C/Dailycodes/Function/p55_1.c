#include<stdio.h>

void fun(int *ptr1, int *ptr2){
	int swap=*ptr1;
	*ptr1=*ptr2;
	*ptr2=*ptr1;
}

void main(){
	int x=10;
	int y=20;

	printf("x=%d\n",x);
	printf("y=%d\n",y);

	fun(&x,&y);

	printf("x=%d\n",x);
	printf("y=%d\n",y);
}
	

