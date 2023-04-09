#include<stdio.h>

void fun(int a,int b, int c);

void main(){
	int x=10;
	int y=20;
	int z=30;
	fun(x,y,z); //60
	fun(x,y);   //80
}

void fun(int a,int b,int c=50){
	printf("%d\n",a+b+c);  //at time of declaration,no memory allocated. In c,there is no concept of default parameter
}
