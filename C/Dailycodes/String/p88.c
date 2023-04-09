//string reverse

#include<stdio.h>
//#include<string.h>

void str_rev(char *str){
	char *temp=str;
	while(*temp!='\0'){
		temp++;
	}
	temp--;
	while(temp > str){
		char x=*str;
		*str=*temp;
		*temp=x;
		str++;
		temp--;
	}
}


void main(){
	char str[20]="hello pratik";
//	int len=strlen(str);
	str_rev(str);
	puts(str);
}

