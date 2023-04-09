//sum of array using prefix arr

#include<stdio.h>

void sumarr(int* arr,int N){
	int arr1[N];
	arr1[0]=arr[0];
	for(int i=1;i<N;i++){
		arr1[i]=arr1[i-1]+arr[i];
	}
 
	for(int i=0;i<N;i++){ 
		for(int j=i;j<N;j++){ 
			int sum=0
			if(i!=0)
				sum=arr1[j]-arr1[i-1];
			else
				sum=arr1[j];
			printf("%d\t",sum);
		}
	}
}

void main(){
	int arr[3]={1,2,3};

	sumarr(arr,3);
}
