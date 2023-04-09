//arry using recursion

#include<stdio.h>

int sum(int *arr,int size){
	if(size==1)
		return arr[0];
	return sum(arr,size-1)+arr[size-1];
}

void main(){
	int arr[5]={1,2,3,4,5};
	int ret=sum(arr,5);
	printf("sum=%d\n",ret);
}
