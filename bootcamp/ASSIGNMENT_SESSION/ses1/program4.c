

#include<stdio.h>

int revarr(int* arr,int size){
	int start=0;
	int end=size-1;
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		end--;
		start++;
	}
	
}

void main(){
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter element\n");

	for(int i=0;i<size;i++){
		scanf("%d",arr+i);
	}

	int count=revarr(arr,size);
	printf("\n");

	for(int i=0;i<size;i++)
		printf("%d\n",arr[i]);
}
