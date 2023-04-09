//sum of row elements in 2d array


#include<stdio.h>

int sum_of_antidiagonal(int (*arr)[4],int row,int col){
	int size=(row*2)-1;
	int sum[size][row];

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<row;j++)
		{
			sum[i][j]=0;
		}
	}
	//1 2 3  1 0 0
	//4 5 6  2 4 0
	//7 8 9  3 5 7
	//       6 8 0
	//       9 0 0
	for(int i=0;i<size;i++){
		int a=0;
		int b=0;
		if(i<row){
			a=i;
			b=0;
		}else{
			a=row-1;
			b=(size+i)-(size+row)+1;
		}
		for(int j=0;j<row;j++){
			if(a>=0&&b<row){
				sum[i][j]=arr[b][a];
				b++;
				a--;
			}else
				sum[i][j]=0;
		}
	}
	
	



	for(int i=0;i<size;i++){
		for(int j=0;j<row;j++)
			printf("%d\t",sum[i][j]);
		printf("\n");
	}
	printf("\n");

	
}

void main(){
	int arr[][4]={1 ,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	printf("1 , 2, 3, 4\n5, 6, 7 ,8\n9, 10, 11, 12\n13, 14, 15, 16\n\n");
	sum_of_antidiagonal(arr,4,4);
}
