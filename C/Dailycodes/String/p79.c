#include<stdio.h>

void main(){
	char arr[20];
	printf("enter player name\n");
	gets(arr);

	char *str=arr;
	puts(str);
	arr[2]="m";
	puts(arr);
}
