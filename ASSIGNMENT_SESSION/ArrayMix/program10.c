#include<stdio.h>

void sumOfDiagonal(int col,int row,int arr[][col]){
	int sum=0;
	int k=row-1;
	for(int i=0;i<row;i++){
		for(int j=col-1;j>=0;j--){
			if(k==j){
				sum+=arr[i][j];
			}
		}
		k--;
	}
	printf("Sum of Diagonal is %d\n",sum);
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
	
	sumOfDiagonal(col,row,arr);
}
