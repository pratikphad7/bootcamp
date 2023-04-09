#include<stdio.h>

void main(){
	char ch;
	fprintf(stdout,"enter character\n");
	fscanf(stdin,"%c",&ch);
	fprintf(stdout,"%c\n",ch);
}
