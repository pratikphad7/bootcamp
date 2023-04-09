//strcpy

#include<stdio.h>
#include<string.h>

void main(){
	char *str="hello pratik";
	char str1[20];

	strcpy(str1,str);
	puts(str);
	puts(str1);
}

