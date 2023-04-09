#include<stdio.h>
#include<stdlib.h>

void main(){
	int **ptr=(int**)malloc(2*(3*(sizeof(int))));
	for(int i=0;i<6;i++){
			scanf("%d",*(ptr+i));
		
	}
	for(int i=0;i<6;i++){
			printf("%d\t",**ptr+i);
	}
}

