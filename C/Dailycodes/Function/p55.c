//call by address

#include<stdio.h>

void callbyaddress(int* a);
void main(){
	int x=10;
	printf("%d\n",x);
	callbyaddress(&x);
	printf("%d\n",x);
}
void callbyaddress(int* a){
	printf("%p\n",a);
	printf("%d\n",*a);
	*a=50;
	printf("%d\n",*a);
}
