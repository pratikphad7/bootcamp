#include<stdio.h>
#include<stdlib.h>

typedef struct revinplace{
	struct revinplace* prev;
	int data;
	struct revinplace* next;
}rev;

rev* head=NULL;

rev* createnode(){
	rev* node=(rev*)malloc(sizeof(rev));
	node->prev=NULL;

	printf("Enter data\n");
	scanf("%d",&node->data);

	node->next=NULL;

	return node;
}

void adddata(){
	rev* node=createnode();

	if(head==NULL){
		head=node;
	}else{
		rev* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=node;
		node->prev=temp;
	}
}

int revlist(){
	if(head==NULL){
		printf("Invalid operation\n");
		return -1;
	}else{
		rev* temp=head;
		while(temp!=NULL){
			temp=temp->next;
			head->next=head->prev;
			head->prev=temp;
			if(temp!=NULL)
				head=temp;
		}
	}
}

int printdata(){
	if(head==NULL){
		printf("empty list");
		return -1;
	}else{
		rev* temp=head;
		while(temp!=NULL){
			printf("|%d|",temp->data);
			temp=temp->next;
		}
	}
}

void main(){
	adddata();
	adddata();
	adddata();
	adddata();
	//adddata();
	printdata();
	revlist();
	printdata();
}




