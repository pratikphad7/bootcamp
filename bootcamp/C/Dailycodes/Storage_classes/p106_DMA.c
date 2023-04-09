//dynamic memory allocation

//1)Malloc();
//2)calloc();
//3)realloc();
//4)free();

#include<stdio.h>
#include<stdlib.h>

void fun(){
	int x=10;
	int *ptr=(int*)malloc(sizeof(int)); //malloc prototype- void* malloc (size_t x), void* is void pointer,size_t is unsined int,  						     x is variable, malloc got memory at heap section and we can access it only through       						    pointer, malloc dose'nt have variable name, size_t having 8 bytes size. malloc got 							   bydefault garbage value.

	*ptr=50;
	printf("%d\n",*ptr);
}

void main(){
	fun();
}
