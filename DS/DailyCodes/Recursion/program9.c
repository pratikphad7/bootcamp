#include<stdio.h>

int tailrecursion(int num){
	if(num==1)
		return 1;
	return tailrecursion(--num);
}

void main(){
	int ret=tailrecursion(4);
	printf("value of ret is %d\n",ret);
}
