#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

void main(){
	node *head=NULL;
	node *newnode=(node*)malloc(sizeof(newnode));
	
	//put data
	newnode->data=1;
	newnode->next=NULL;

	head=newnode;

	newnode=(node*)malloc(sizeof(node));
	newnode->data=2;
	newnode->next=NULL;

	head->next=newnode;
	
	newnode=(node*)malloc(sizeof(node));
	newnode->data=3;
	newnode->next=NULL;

	head->next->next=newnode;

	//printdata
	
	node* temp=head;
	while(temp!=NULL){
		printf("data : %d\n",temp->data);
		temp=temp->next;
	}
	
}



