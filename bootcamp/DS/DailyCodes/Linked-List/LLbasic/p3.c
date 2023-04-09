#include<stdio.h>
#include<string.h>

typedef struct company{
	char name[20];
	int cnt;
	float rev;
	struct company *next;
}cmp;

void main(){
	
	cmp cmp0,cmp1,cmp2;

	cmp *head=&cmp0;

	strcpy(head->name,"CORE2WEB");
	head->cnt=1;
	head->rev=46.67;
	head->next=&cmp1;
	
	strcpy(head->next->name,"BINECAPS");
	head->next->cnt=45;
	head->next->rev=47.67;
	head->next->next=&cmp2;
	
	strcpy(head->next->next->name,"BOOMPANDA");
	head->next->next->cnt=18;
	head->next->next->rev=52.67;
	head->next->next->next=NULL;

	printf("\nCompany name is %s\n",head->name);
	printf("Company count is %d\n",head->cnt);
	printf("company rev is %f\n\n",head->rev);


	printf("\nCompany name is %s\n",head->next->name);
	printf("company count is %d\n",head->next->cnt);
	printf("compny rev is %f\n\n",head->next->rev);

	printf("\ncompany name is %s\n",head->next->next->name);
	printf("compony cnt is %d\n",head->next->next->cnt);
	printf("company rev is %f\n\n",head->next->next->rev);

}
