//leaders in arr from reight side

#include<stdio.h>

void leadArr(int* arr,int N){
	int lArr[N];
	lArr[0]=arr[N-1];
	int j=0;
	for(int i=N-2;i>=0;i--){
		if(arr[i]>lArr[j]){
			j++;
			lArr[j]=arr[i];
		}
	}
	for(int i=0;i<=j;i++){
		printf("%d\t",lArr[i]);
	}
	printf("\n");
}

void main(){
	int arr[]={16,17,4,3,5,2};

	leadArr(arr,6);
}
