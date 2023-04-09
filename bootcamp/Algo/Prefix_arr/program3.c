//ass q3

#include<stdio.h>

void productArr(int* arr,int size){
	int product=1;

	for(int i=0;i<size;i++){
			product=arr[i]*product;
	}
	int prArr[size];
	for(int i=0;i<size;i++){
		prArr[i]=product/arr[i];
	}

	for(int i=0; i<size;i++){
		printf("%d\t",prArr[i]);
	}
	printf("\n");
}

void main(){
	int arr[]={1,2,0,4,5}; 
	productArr(arr,5);
}
