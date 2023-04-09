#include<stdio.h>

void strcp(char *str1,char *str){
	while(*str != '\0'){
		*str1=*str;
		str++;
		str1++;
	}
	*str1='\0';
}

void main(){
	char *str="pratik phad";
	char str1[20];

	strcp(str1,str);
	puts(str1);
}
