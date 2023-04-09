#include<stdio.h>

void arrPrefix(int N,int *arr){
	int sum[N];
	for(int i=1;i<N;i++){
		arr[i]=arr[i-1]+arr[i];
	}
}

void main(){
	int N;
	printf("Enter Size\n");
	scanf("%d",&N);
	int arr[N];
	
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<N;i++){
		printf("%d\t",arr[i]);
	}printf("\n");

	arrPrefix(N,arr);
}
