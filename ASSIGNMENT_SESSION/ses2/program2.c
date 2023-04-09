//sum of row elements in 2d array


#include<stdio.h>

int sum_of_col(int (*arr)[3],int row,int col){
	int sum[row];

	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			sum[i]=arr[j][i]+sum[i];
		}
	}
	for(int i=0;i<3;i++){
		printf("%d\n",sum[i]);
	}
	
}

void main(){
	int arr[][3]={1,2,3,4,5,6,7,8,9};
	sum_of_col(arr,3,3);
}
