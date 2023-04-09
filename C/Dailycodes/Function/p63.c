#include<stdio.h>

int add(int a,int b){
	int c=a+b;
	return c;
}

int sub(int a,int b){
	int c=a-b;
	return c;
}

void main(){
	int (*ptr)(int,int);
	ptr=add;
	int y=ptr(10,20);
	printf("add is %d\n",y);
	ptr=&sub;
	int x=ptr(10,20);
	printf("sub is %d\n",x);
}
