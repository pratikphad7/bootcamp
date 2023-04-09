#include<stdio.h>

void main(){
	char arr[]="core2web";   //in main stackframe

	char* arr1="core2web";   //in Read Only data section
	
	printf("%s\n",arr);
	printf("%s\n",arr1);

	arr[4]='3';
	printf("%s\n",arr);

	arr1[4]='3';		//we can't change value from RO data sectoin
	printf("%s\n",arr1);
}
