#include<stdio.h>

struct demo{
	int x;
	int y;
}obj1;

void main(){
	//obj1={10,20};   //error,here obj1 having allready memory allocated
	
	obj1.x=10;
	obj1.y=20;

	printf("x=%d\n",obj1.x);
	printf("y=%d\n",obj1.y);
}
