//unnamed,typedf,function structure

#include<stdio.h>

typedef struct {
	int x;
	int y;
}st;

void fun(st obj){
	printf("%d\n",obj.x);
	printf("%d\n",obj.y);
}

void gun(st *obj){
	printf("%d\n",(*obj).x);
	printf("%d\n",obj->y);
}

void main(){
	st obj={2,3};
	fun(obj);
	gun(&obj);
}

