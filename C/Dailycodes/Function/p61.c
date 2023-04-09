#include<stdio.h>

void main(){
	int arr[][2]={1,2,3,4,5,6};
	int size=sizeof arr/sizeof(int);

	for(int i=0;i<size;i++){
		printf("%d\n",*(*arr+i));
	}
}
