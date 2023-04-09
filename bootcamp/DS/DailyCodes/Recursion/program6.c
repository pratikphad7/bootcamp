
#include<stdio.h>

void fun(int x){
	printf("Hello\n");
	if(x!=1){
		fun(--x);
		printf("bye\n");
	}
}

void main(){
	fun(5);
}
