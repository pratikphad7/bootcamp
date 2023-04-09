#include<stdio.h>

void add(int a,int b){
	printf("1- %d\n",a+b);
	printf("2- %d\n",a+b);
	printf("2- %d\n",a+b);
}

void main(){
	void (*ptr)(int,int);
	
	ptr=add;
	add(10,20);
	ptr++;
	add(30,40);
}
		
