#include<stdio.h>

struct str{
	int x;
	int y;
	int z;
}obj2;   

void main(){
	struct str obj={10,20,30};
	
//	obj2{10,20,30};   //we can't initilize global object like this

	struct str obj2={10,20,30};

	struct str obj1;
	obj1.x=10;
	obj1.x=20;
	obj1.z=40;
}
