//prefixsumassignment 1

#include<stdio.h>

void sum(int*arr,int size){

	for(int i=1;i<size;i++){
		arr[i]=arr[i-1]+arr[i];
	}

	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void main(){
	int arr[]={10,20,30,40,50,60};
	sum(arr,6);
}
