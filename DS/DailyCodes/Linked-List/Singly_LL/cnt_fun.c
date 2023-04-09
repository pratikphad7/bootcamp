#include<stdio.h>
#include<stdlib.h>

typedef struct count_node{
	int data;
	struct count_node *next;
}cnt;

cnt* head=NULL;

void adddata(){
	cnt *node=(cnt*)malloc(sizeof(cnt));

	printf("Enter data\n");
	scanf("%d",&node->data);

	node->next=NULL;

	if(head==NULL){
		head=node;
	}else{ 
		cnt* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void printdata(){
	cnt* temp=head;
	while(temp!=NULL){
		printf("|%d|-->",temp->data);
		temp=temp->next;
	}
}

void count(){
	cnt* temp=head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
	        count++;
	}
	printf("no of nodes is : %d\n",count);
}

void main(){
	int node;
	printf("Enter no of nodes\n");
	scanf("%d",&node);

	for(int i=0;i<node;i++){
		adddata();
	}
	printdata();
	count();
}

	
