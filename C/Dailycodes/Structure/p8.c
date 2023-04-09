//object initilization using malloc

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL{
	char Spname[10];
	int tno;
	int sno;
};

void main(){
	struct IPL *obj1 = (struct IPL*) malloc(sizeof(struct IPL));

	strcpy((*obj1).Spname,"TATA");
	(*obj1).tno=10;
	(*obj1).sno=15;
}
