#include<stdio.h>

void sumpair(int *arr,int sum,int size){
	int count=0;
	int j=sum-1;
	for(int i=1;i<=sum/2;i++){
		if(i+j==sum){
			count++;	
		}
		j--;
	}
	printf("count=%d\n",count);
}

void main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int sum=7;
	sumpair(arr,sum,9);
}
