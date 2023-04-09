//wap allocate memory of int type free it's memory int without using free or null

#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr=(int*)malloc(sizeof(int));
	*ptr=10;

	int *ptr1=(int*)realloc(ptr,0);

	printf("%d\n",*ptr);
}
