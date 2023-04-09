//local static variable

#include<stdio.h>

void fun(){
	static int y=10;  //static function initilize only once time,it get memory at data section
	++y;
	printf("%d\n",y);
}

void main(){
	fun();
	fun();
	fun();
}
