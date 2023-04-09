//sum of array using Brute force

#include<stdio.h>

void sumarr(int* arr,int N){
	for(int i=0;i<N;i++){
		for(int j=i;j<=N;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum=sum+arr[k];
			}
			printf("%d\n",sum);
		}
	}
}

void main(){
	int arr[5]={1,2,3,4,5};

	sumarr(arr,5);
}
