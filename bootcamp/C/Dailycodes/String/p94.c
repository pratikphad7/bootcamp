//array of string

#include<stdio.h>

void main(){
	char str[3][3]={{'a','s','d'},{'e','f','t'},{'a','c','v'}};
	char str1[][10]={"pratik","subhash","phad"};
	
	printf("%c\n",**str);
	printf("%s\n",*str);
	printf("%p\n",str);
}
