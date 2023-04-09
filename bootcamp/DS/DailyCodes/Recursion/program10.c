#include<stdio.h>

int recursion(int x){
	if (x==1)
		return 1;
	return recursion(--x)+3;
}

void main(){
	int ret=recursion(4);
	printf("ret is %d\n",ret);
}
