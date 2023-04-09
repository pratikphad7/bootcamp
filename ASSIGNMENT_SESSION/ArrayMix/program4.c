#include<stdio.h>

void reverseArray(int* arr,int N,int start){
	while(start<N){
		int temp=arr[start];
		arr[start]=arr[N-1];
		arr[N-1]=temp;
		start++;
		N--;
	}
}

int main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	if(size<2){
		printf("we can't reverse\n");
		return 0;
	}
	
	printf("Enter element\n");
	for(int i=0;i<size;i++)
		scanf("%d",arr+i);

	reverseArray(arr,size,0);

	for(int i=0;i<size;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
