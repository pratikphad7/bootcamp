#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int id;
	float ht;
	struct node* next;
}node;

node* addnode(node* head){
	node* temp=head;
	node* newnode=(node*)malloc(sizeof(node));
	newnode->id=1;
	newnode->ht=6.66;
	newnode->next=NULL;

	if(head==NULL){
		head=newnode;
	}else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return(head);
}

void printdata(node* head){
	node* temp=head;
	while(temp!=NULL){
		printf("|id : %d; ht : %f|-->",temp->id,temp->ht);
		temp=temp->next;
	}
	printf("|NULL|\n");
}


void main(){
	node* Head=NULL;
	Head=addnode(Head);
	Head=addnode(Head);
	Head=addnode(Head);
	Head=addnode(Head);
	Head=addnode(Head);

	printdata(Head);
}

