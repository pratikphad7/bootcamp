//WAP for the linked list of states of India consisting of its name ,population,budget,&litracy.connect 4 states to linked list and print their data

#include<stdio.h>
#include<stdlib.h>

typedef struct states{
	char state_name[20];
	int population;
	float budget;
	struct states* next;
}st;

st* head=NULL;
void adddata(){
	st* node=(st*)malloc(sizeof(st));
	
	printf("Enter state name\n");
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*node).state_name[i++]=ch;
	}

	printf("Enter population of State\n");
	scanf("%d",&node->population);

	printf("Enter budget of State\n");
	scanf("%f",&node->budget);

	node->next=NULL;

	if(head==NULL){
		head=node;
	}else{
		st* temp=head;

		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void printdata(){
	st* temp=head;

	while(temp!=NULL){
		printf("|%s : %d : %f : %p |-->",temp->state_name,temp->population,temp->budget,temp->next);
		temp=temp->next;
	}
	printf("|END|\n");
}

void main(){
	int no;
	printf("Enter no of States\n");
	scanf("%d",&no);

	for(int i=0;i<no;i++){
		adddata();
	}
	printdata();
}
		

