#include<stdio.h>
#include<stdlib.h>

void main(){
	int row;
	int col;
	int pl;
	printf("enter row\n");
	scanf("%d",&row);
	printf("enter col\n");
	scanf("%d",&col);
	printf("enter pl\n");
	scanf("%d",&pl);

	int ***ptr=(int***)malloc(pl*sizeof(int**));
	for(int k=0;k<pl;k++){
		ptr[k]=(int**)malloc(row*(sizeof(int*)));
		for(int i=0;i<row;i++){
			ptr[k][i]=(int*)malloc(col*sizeof(int));
			for(int j=0;j<col;j++){
				scanf("%d",*(*(ptr+k)+i)+j);
			}
		}
	}

	for(int i=0;i<pl;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
			printf("%d\t",*(*(*(ptr+i)+j)+k));
			}printf("\n");
		}printf("\n");
	}
}

