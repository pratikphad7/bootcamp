//wap that accept a String from user and print the length of the string.

#include<stdio.h>

int mystrlen(char **str[]){
	int num=0;
	while(**str!='\0'){
		num++;
		*str++;
	}
	num++;
	return num;
}
void main(){
	char* str[]={"a"};
	puts("enter string");
	gets(str);

	int strlen=mystrlen(&str);
	printf("the length of string is-%d\n",strlen);

}

