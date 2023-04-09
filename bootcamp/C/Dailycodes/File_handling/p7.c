
#include<stdio.h>

void main(){
	FILE *fp=fopen("c2w.c","w");
	char ch;
	fscanf(fp,"%c",&ch);
	fprintf(fp,"%c\n",ch);
}
