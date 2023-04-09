#include<stdio.h>
#include<stdlib.h>

void main(){
	int row;
	int col;
	printf("enter row\n");
	scanf("%d",&row);
	printf("enter col\n");
	scanf("%d",&col);
	int** ptr=(int**)malloc(row*(sizeof(int*)));

	for(int i=0;i<row;i++){
		ptr[i]=(int*)malloc(col*sizeof(int*));
		for(int j=0;j<col;j++){
			scanf("%d",*(ptr+i)+j);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",*(*(ptr+i)+j));
		}printf("\n");
	}
}

