//string in upper case

#include<stdio.h>
#include<string.h>

void mystrupp(char *str){
	while(*str !='\0'){
		if(*str>91){
			*str=*str-32;
			puts("b");
		}
		str++;
		puts("a");

	}
}

void main(){
	char arr[50]="pratik";
	gets(arr);
	mystrupp(arr);
	puts(arr);
}
