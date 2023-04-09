

#include<stdio.h>

int revarr(int* arr,int size,int start,int end){
	
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		end--;
		start++;

	}
	//for(int i=0;i<size;i++)
	//	printf("%d\n",arr[i]);
	
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

	printf("Enter range\n");
	int n;
	scanf("%d",&n);
	int b;
	scanf("%d",&b);

	int count=revarr(arr,size,n,b);
	printf("\n");
	for(int i=0;i<size;i++)
		printf("%d\n",arr[i]);
}
