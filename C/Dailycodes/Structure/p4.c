#include<stdio.h>
#pragma pack(1)       //pragma pack only accept 1,2 and powers of 2

struct str{
	int x;
	double z;
	char c;

};

void main(){
	struct str obj={10,20.33,'a'};
	printf("%ld\n",sizeof(obj));  //16
}
