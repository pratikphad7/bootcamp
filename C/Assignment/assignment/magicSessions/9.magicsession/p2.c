#include<stdio.h>
#include<stdlib.h>

void main(){
	int size;
	printf("enter size\n");
	scanf("%d",&size);
	int *ptr=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;i++){
		printf("enter %d element of array\n",i);
		scanf("%d",ptr+i);
	}
	printf("|");
	for(int i=0;i<size;i++)
		printf("%d|",*(ptr+i));
	printf("\n");
}
