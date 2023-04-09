#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL{
	char sponcer[10];
	int season_no;
	float price;
};
void main(){
	struct IPL *ptr=(struct IPL*)malloc(sizeof(struct IPL));
	strcpy((*ptr).sponcer,"TATA");
	(*ptr).season_no=14;
	ptr->price=234567.678;

	puts(ptr->sponcer);
	printf("%d\n",ptr->season_no);
	printf("%f\n",(*ptr).price);
	free(ptr);
}

