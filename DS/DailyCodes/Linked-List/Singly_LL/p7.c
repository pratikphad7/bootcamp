#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data ;
	struct node *next;
}st;

void main(){
	st *Head=NULL;
	st *temp=Head;

	st* node=(st*)malloc(sizeof(st));
	node->data=1;
	node->next=NULL;
	Head=node;
	temp=node;

	node=(st*)malloc(sizeof(st));
	node->data=2;
	node->next=NULL;

	temp->next=node;
	temp=node;

	node=(st*)malloc(sizeof(st));
	node->data=3;
	node->next=NULL;

	temp->next=node;
	temp=Head;

	//printdata
	while(temp!=NULL){
		printf("data : %d\n",temp->data);
		temp=temp->next;
	}
}
	
	
