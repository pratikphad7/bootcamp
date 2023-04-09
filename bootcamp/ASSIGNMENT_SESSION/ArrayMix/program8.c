#include<stdio.h>

void sumOfCol(int col,int row,int arr[][col]){
	int sum[col];
	for(int i=0;i<row;i++){
		sum[i]=0;
		for(int j=0;j<col;j++){
			 sum[i]+=arr[i][j];
		}
	}

	for(int i=0;i<row;i++){
		printf("%d\t",sum[i]);
	}
	printf("\n");
}

int main(){

	int row , col;
	printf("Enter array row & col\n");
	scanf("%d %d",&row,&col);

	int arr[row][col];
	
	printf("Enter element\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
			scanf("%d",*(arr+i)+j);
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
	printf("\n");
	
	sumOfCol(col,row,arr);
}
