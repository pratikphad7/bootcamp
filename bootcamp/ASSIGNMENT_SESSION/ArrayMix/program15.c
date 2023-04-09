#include<stdio.h>

void arrTranspos(int row,int col,int (*arr)[col],int(*arr)[col]){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]!=arr1[i][j])
				return -1;
		}   
	}
	return 0;
}
void main(){
	int col,row;
	printf("Enter row&col\n");
	scanf("%d %d",&col, &row);
	int arr[row][col];
	int arr1[row][col];
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",arr[i][j]);
		}printf("\n");
	}
	printf("\n");

	int ret=arrTranspos(row,col,arr,arr1);
	if(ret==0){
		printf("Matrix are same\n");
	}else
		printf("Matrix are not equal\n");
}
