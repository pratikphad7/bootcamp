#include<stdio.h>

int* fun(int x,int y){
	int add=x+y;
	printf("add=%d\n",add);
	return &add;
}
void main(){
	int *ptr=fun(10,20);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}
