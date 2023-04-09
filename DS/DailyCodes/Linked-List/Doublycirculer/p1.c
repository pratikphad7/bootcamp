#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	struct node *prev;
	int data;
	struct node *next;
}nd;

nd* head=NULL;

nd* createnode(){
	nd* node=(nd*)malloc(sizeof(nd));
	node->prev=NULL;
	printf("Enter data\n");
	scanf("%d",&node->data);
	node->next=NULL;

	return node;
}

void adddata(){
	nd* node=createnode();
	if(head==NULL){
		head=node;
		node->next=head;
		node->prev=head;
	}else{
		nd* temp=head;
		while(temp->next!=head)
			temp=temp->next;
		temp->next=node;
		node->next=head;
		node->prev=temp;
		head->prev=node;
	}
}

void addfirst(){
	nd* node=createnode();
	if(head==NULL){
		head=node;
		node->next=head;
		node->prev=node;
	}else{
		node->next=head;
		node->prev=head->prev;
		node->prev->next=node;
		head->prev=node;
		head=node;
	}
}

void printdata(){
	if(head==NULL){
		printf("data is empty\n");
	}else{
		nd* temp=head;
		while(temp->next!=head){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
			printf("|%d|\n",temp->data);
	}
}

void main(){
	char ch;
	do{
		printf("1.adddata()\n");
		printf("2.printdata()\n");
		printf("3.addfirst()\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: adddata();
				break;
			case 2: printdata();
				break;
			case 3: addfirst();
				break;
			default : printf("invalid choice\n");
		}

		printf("Do you want to continew\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
