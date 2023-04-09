#include<stdio.h>

void main(){
	char name[10];

	printf("enter name\n");
	scanf("%s\n",name);	//using scanf we can't read whole string so we use gets()
	printf("%s\n",name);
}
