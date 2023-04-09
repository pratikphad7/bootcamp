//string copy until nth no

#include<stdio.h>
#include <string.h>

void mystrcpy(char *arr,char *arr1,int num){
	int i=0;
	while(i<=num){
		*arr=*arr1;
		arr++;
		arr1++;
		i++;

	}
	*arr='\0';
}
	
void main(){
	char str[50];
	char str1[50];
	int num;
	
	printf("enter num upto copy");
	//scanf("%d",&num);
	
	printf("enter 1st string");
	gets(str);
	printf("enter 2nd string");
	gets(str1);

//	mystrcpy(str1,str,num);
//	puts(str);
//	puts(str1);
}
