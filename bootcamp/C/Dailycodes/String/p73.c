#include<stdio.h>

void main(){
	char *str="virat";

	printf("%c\n",str[2]);
	str[2]='l';			//here *str is constant so we can't change value of str, *str got memory in read only data(RO) section;so here we got segmentation fault
	printf("%c\n",str[2]);
}
