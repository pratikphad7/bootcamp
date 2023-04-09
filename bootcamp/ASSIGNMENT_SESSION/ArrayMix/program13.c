#include<stdio.h>
/*1 2 3  7 4 1 
 *4 5 6  8 5 2
  7 8 9  9 6 3*/
void arrTranspos(int row,int col,int (*arr)[col]){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr[i][j]=arr[i][j];
		}   
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
}
void main(){
	int col,row;
	printf("Enter row&col\n");
	scanf("%d %d",&col, &row);
	int arr[row][col];
	
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

	arrTranspos(row,col,arr);
}
