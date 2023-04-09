//fopen

#include<stdio.h>

void main(){
	FILE *fp=fopen("p1.c","r");   //in read mode if file is exist then it only read file and if file does'nt exist then it returns null
	printf("%p\n",fp);
}
