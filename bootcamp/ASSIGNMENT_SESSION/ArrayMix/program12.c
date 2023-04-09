#include<stdio.h>
/*1 2 3  1 4 7
 *4 5 6  2 5 8
  7 8 9  3 6 9  */
void arrTranspos(int row,int col,int (*arr)[col]){
	int arr2[col][row];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr2[j][i]=arr[i][j];
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
