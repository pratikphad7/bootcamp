#include<stdio.h>

void arrTranspos(int row,int col,int (*arr)[col]){
	int sum[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==0)
		}   
	}
	

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
			printf("%d\t",arr[i][j]);
		}printf("\n");
	}
	printf("\n");

	arrTranspos(row,col,arr,arr1);
}
