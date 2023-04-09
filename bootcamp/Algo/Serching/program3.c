//binary search

#include<stdio.h>

int ser(int *arr,int len,int key){
	int start=0;
	int end=len-1;
	int mid=-1;
	mid=((key-arr[start])/(arr[end]-arr[start]))*(end-start);
	return mid;
}

void main(){
	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter array element\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int key;
	printf("Enter key value\n");
	scanf("%d",&key);

	int index=ser(arr,size,key);

	if(index==-1)
		printf("key not found\n");
	else
		printf("key found at %d index\n",index);
}
