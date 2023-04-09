//concat upto n number

#include<stdio.h>

void mycatn(char *str,char *str1){

	while(*str!='\0')
		str++;
	int i=0;
	
	while(i<=5){
	
		*str=*str1;
		str++;
		str1++;
		i++;
	}
	*str='\0';
}
void main(){
	
	char str[20]="pratik";
	
	char* str1="subhash phad";
	

	mycatn(str,str1);
	

	puts(str);
	puts(str1);
}
