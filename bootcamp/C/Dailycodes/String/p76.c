#include<stdio.h>

void main(){
	char name[]={'v','i','r','a','t','\0'};
	char* pname="MS Dhoni";

	for(int i=0;i<7;i++){
		printf("%c",name[i]);
	}
	printf("\n");

	
	for(int i=0;i<10;i++){
		printf("%c",pname[i]);
	}
	printf("\n");
}
