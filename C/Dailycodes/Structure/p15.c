//bitfild

#include<stdio.h>
#pragma pack(1)

struct demo{
	int x:1;  //when we get x:1 it mean int taken only one byte and we can not get address of x in bit field
	double y;
	int z;
};
	
void main(){
	struct demo obj={1,2.00,3};
	printf("%ld\n",sizeof(obj));
}

