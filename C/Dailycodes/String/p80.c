#include<stdio.h>

void printstring(char ptr[]){
	puts(ptr);
}

void stringprint(char *str){
	puts(str);
}

void main(){
	char arr[20];
	printf("enter your name\n");
	gets(arr);

	printstring(arr);
	stringprint(arr);
}
