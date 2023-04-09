#include<stdio.h>

void mystrcat(char *str,char *str1){
	while(*str!='\0')
		str++;
	while(*str1!=0){
		*str=*str1;
		str++;
		str1++;
	}
	*str='\0';
}

void main(){
	char str[50]="hello";
	char* str1="pratik";

	mystrcat(str,str1);
	puts(str);

}
