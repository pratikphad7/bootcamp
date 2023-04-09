#include<stdio.h>

int countElement(int* arr,int N){
	int count=0;
	int sameElement=0;
	int element=arr[0];
	for(int i=0;i<N;i++){
		if(arr[i]<element){
			count++;
			element=arr[i];
		}else if(arr[i]==element){
			sameElement++;
		}else{
			element=arr[i];
			count=count+sameElement;
		}
	}

	return count;
}

void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter element\n");
	for(int i=0;i<size;i++)
		scanf("%d",arr+i);

	int count=countElement(arr,size);
	printf("count is %d\n",count);
}
