// string length

#include<stdio.h>
#include<string.h>

void main(){
	char name[]="pratik";
	char *str="virat kohli";

	int namelen=strlen(name);
	int str_len=strlen(str);

	printf("%d\n",namelen);
	printf("%d\n",str_len);
}
