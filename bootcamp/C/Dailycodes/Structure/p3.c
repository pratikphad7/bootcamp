#include<stdio.h>

struct mystr{
	double x;
	int y[10];
	char c;
};

void main(){
	struct mystr obj={1,{1,2,3,4,5,6,7,8,9,0},'c'};
	printf("%ld\n",sizeof(obj)); //56
}

