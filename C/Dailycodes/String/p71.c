#include<stdio.h>

void main(){
	char arr[]={'c','o','r','e','2','w','e','b'};
	char *arr1="coretwoweb";

	for(int i=0;i<8;i++){
		printf("%c",arr[i]);
	}

	printf("\n%s\n",arr);
	printf("%s\n",arr1);

	arr[4]='4';
	printf("%s\n",arr);
}
