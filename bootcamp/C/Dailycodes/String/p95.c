//array of character pointer

#include<stdio.h>
#include<string.h>

void main(){
	char* arr[]={"ashish","kanha","ashish"};
	puts(arr[0]);
	printf("%s\n",arr[2]);
	strcpy(arr[2],"rahul");
}
