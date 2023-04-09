//[1,2,3,4,5]  finding subarray

#include<stdio.h>

void subarr(int* arr,int N){
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			for(int k=i;k<j;k++){
				printf("%d\t",arr[k]);
			}
			printf("\n");
		}
	
	}
}

void main(){
	int arr[5]={1,2,3,4,5};
	
	subarr(arr,5);
}
