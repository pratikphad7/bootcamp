#include<stdio.h>
void mystr(char *str){
	char *temp=str;
	while(*temp !='\0'){
		temp++;
		puts("a");
	}
	temp--;

	while(temp>str){
		puts("b");
		int x=*temp;
		*temp=*str;
		*str=x;
		temp--;
		str++;
	}
}

void main(){
	char str[20]="pratik";
	mystr(str);
	puts(str);
}
