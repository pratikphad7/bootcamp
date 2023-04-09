#include<stdio.h>
#include<stdlib.h>

void main(){
	int **ptr=(int**)malloc(4*sizeof(int*));

	for (int i=0;i<5;i++){
		ptr[i]=(int*)malloc(5*sizeof(int));
	}
	for(int i=0;i<5;i++){
		free(ptr[i]);
	}
	free(ptr);
}
