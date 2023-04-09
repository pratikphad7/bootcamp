#include<stdio.h>
#include<stdlib.h>

typedef struct student{
	int id;
	float ht;
	struct student* next;
}st;
st* head=NULL;

void addnode(){
	st* node=(st*)malloc(sizeof(st));
	printf("enter id\n");
	scanf("%d",&node->id);

	printf("enter ht\n");
	scanf("%f",&node->ht);

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
		printf("|ht-%d : ht- %f|-->",temp->id,temp->ht);
		temp=temp->next;
	}
	printf("|END|\n");
}
void main(){
	int node;
	printf("Enter how many students\n");
	scanf("%d",&node);
	
	for(int i=1;i<=node;i++){

		addnode();
	}
	printdata();
}	

