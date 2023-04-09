//recursion in array

#include<stdio.h>

int sum(int *arr,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}

void main(){
	int arr[5]={1,2,3,4,5};
	int ret=sum(arr,5);
	printf("sum of arr is %d\n",ret);
}
