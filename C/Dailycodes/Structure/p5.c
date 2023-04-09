//structure assignment

#include<stdio.h>

struct str{
	int x;
	double z;
	char c;
}obj={10,10.22,'c'};

void main(){
	printf("%d\n",obj.x);
	printf("%lf\n",obj.z);
	printf("%c\n",obj.c);
}
