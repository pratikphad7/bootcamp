#include<stdio.h>
#include<string.h>

typedef struct batsman{
	char name[20];
	int jersy_n;
	float avg;
	struct batsman *next;
}batsman;

void main(){
	
	batsman player0,player1,player2;

	batsman *head=&player0;

	strcpy(head->name,"KL Rahul");
	head->jersy_n=1;
	head->avg=46.67;
	head->next=&player1;
	
	strcpy(head->next->name,"Rohit Sharma");
	head->next->jersy_n=45;
	head->next->avg=47.67;
	head->next->next=&player2;
	
	strcpy(head->next->next->name,"Virat Kohli");
	head->next->next->jersy_n=18;
	head->next->next->avg=52.67;
	head->next->next->next=NULL;

	printf("\nPlayer name is %s\n",head->name);
	printf("Player JERSY no is %d\n",head->jersy_n);
	printf("Player avg is %f\n\n",head->avg);


	printf("\nPlayer name is %s\n",head->next->name);
	printf("Player JERSY no is %d\n",head->next->jersy_n);
	printf("Player avg is %f\n\n",head->next->avg);

	printf("\nPlayer name is %s\n",head->next->next->name);
	printf("Player JERSY no is %d\n",head->next->next->jersy_n);
	printf("Player avg is %f\n\n",head->next->next->avg);
}
