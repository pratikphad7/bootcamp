#include<stdio.h>

void add(int x,int y){
	printf("add=%d\n",x+y);
}

void sub(int x,int y){
	printf("sub=%d\n",x-y);
}

void mult(int x,int y){
	printf("mult=%d\n",x*y);
}

void div(int x,int y){
	printf("div=%d\n",x/y);
}

void main(){
	void (*ptr[4])(int,int)={add,sub,mult,div};

	for(int i=0;i<4;i++){
		ptr[i](10,20);
	}
}

