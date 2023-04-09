
#include<stdio.h>

void fun(int size[][2],int *arr){
	int sum[2];
	int arrsum[5];
	arrsum[0]=arr[0];
	for(int i=1;i<5;i++){
		arrsum[i]=arrsum[i-1]+arr[i];
	}
		int start;
		int end;
	for(int i=0;i<2;i++){
		 start=size[i][0];
		 end=size[i][1];
		
		sum[i]=arrsum[end]-arrsum[start-1];
		
	}

	for(int i=0;i<2;i++){
		printf("%d\t",sum[i]);
	}
	printf("\n");
}

void main(){
	int size[][2]={0,3,1,2};

	int arr[]={1,2,3,4,5};

	fun(size,arr);

}
