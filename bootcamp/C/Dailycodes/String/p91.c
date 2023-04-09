//string lowercase


#include<stdio.h>

void mystrlwr(char *str){
	while(*str!='\0'){
		if(*str<97)
			*str=*str+32;
		str++;
		
	}
}
void main(){
	char str[]="PRATIK";

	mystrlwr(str);

	puts(str);
}
