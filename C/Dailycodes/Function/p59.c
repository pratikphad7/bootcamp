#include<stdio.h>

void swap(int* ptrx,int* ptry){
	int temp=*ptrx;
	*ptrx=*ptry;
	*ptry=temp;
}

void main(){
	int x=10;
	int y=20;

	printf(" x = %d\n y = %d\n",x,y);

	swap(&x,&y);

	printf(" x=%d\n y=%d\n",x,y);
}
