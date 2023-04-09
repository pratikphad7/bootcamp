#include<stdio.h>

void gun(int arr[],int arrsize){
	for(int i=0;i<arrsize;i++){
		printf("%d\n",arr[i]);
	}
	printf("\n");
}

void fun(int *arr,int arrsize){
	for(int i=0;i<arrsize;i++){
		printf("%d\n",*(arr+i));
	}
	printf("\n");
}

void main(){
	int arr[]={1,2,3,4,5,6};
	int arrsize= sizeof arr/sizeof(int);
	fun(arr,arrsize);
	gun(arr,arrsize);
}
