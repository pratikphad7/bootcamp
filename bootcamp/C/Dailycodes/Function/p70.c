//function returning multiple values from function

#include<stdio.h>

void fun(int x,int y,int *ptr1,int* ptr2){
	*ptr1=x+y;
	*ptr2=x-y;
}

void main(){
	int add;
	int x=10;
	int y=20;
	int sub;
	fun(x,y,&add,&sub);
	printf("%d\n",add);
	printf("%d\n",sub);
}
