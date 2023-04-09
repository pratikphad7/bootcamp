//string commpair ignore case

#include<stdio.h>
#include<string.h>

int strcmpi(char *str,char *str1){
	int x=0;
	while(*str!='\0'&& *str1!='\0'){
		if(*str-*str1==32||*str1-*str==-32 ||*str1-*str==0|| *str-*str1==0){
			x++;
		}
		str++;
		str1++;
		
	}
	return x;
}
			
void main(){
	char str[10];
	char str1[10];
	gets(str);
	gets(str1);

	int diff=strcmpi(str,str1);

	if(diff>0)
		printf("strings are  equal");
	else
		printf("strings are not same");
}

