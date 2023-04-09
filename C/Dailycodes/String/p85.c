#include<stdio.h>

void mystrcat(char *str,char *str1,int *y){
	while(*str!='\0'||*str1!='\0'){
		if(*str!=*str1)
			(*y)++;
		str++;
		str1++;
	}
}
void main(){
	char str[20];
	puts("enter string1");
	gets(str);

	char str2[20];
	puts("enter string2");
	gets(str2);
	
	int diff=0;
	mystrcat(str,str2,&diff);

	if(diff>0)
		printf("string is not equal\n");
	else
		printf("strings are same\n");
}

