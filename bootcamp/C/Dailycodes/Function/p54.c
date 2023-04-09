#include<stdio.h>

void swap(int a,int b){
	printf("a = %d\n b = %d\n",a,b);
	int c=a;
	a=b;
	b=c;
	printf("a = %d\n b = %d\n",a,b);
}

void main(){
	int x=10;
	int y=20;

	printf("x = %d\n y = %d\n",x,y);
	swap(x,y);
	printf("x = %d\n y = %d\n",x,y);
}
