#include<stdio.h>
/*1 2 3  1
  1 2 3  2 1
  1 2 3  3*/
void AntiDiagonal(int col,int row,int arr[][col]){
	int Anti[(row+row)-1][col];

	int k=row-1;
	int l=(row+row)-1;
	int p=1;
	for(int i=0;i<row;i++){
		int m=i;
		int n=p;
		for(int j=0;j<l;j++){
			if(j<i){
				Anti[j][i]=0;
			}else{
				if(j<row)
					Anti[m++][i]=arr[i][j];
				else
					Anti[j][i]=arr[n++][k];
			}
		}
		l--;
		k--;
		p++;
	}
	
	for(int i=0;i<(row+row)-1;i++){
		for(int j=0;j<row;j++)
			printf("%d\t",Anti[i][j]);
		printf("\n");
	}

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
	
	AntiDiagonal(col,row,arr);
}
