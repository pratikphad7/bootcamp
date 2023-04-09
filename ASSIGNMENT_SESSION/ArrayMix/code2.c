#include<stdio.h>

int goodPair(int* arr,int N,int target){
	int count=0;
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(arr[i]+arr[j]==target){
				count++;
			}
		}
	}

	return count;
}

void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Target Element\n");
	int target;
	scanf("%d",&target);
	
	printf("Enter element\n");
	for(int i=0;i<size;i++)
		scanf("%d",arr+i);

	int count=goodPair(arr,size,target);
	printf("count is %d\n",count);
}
