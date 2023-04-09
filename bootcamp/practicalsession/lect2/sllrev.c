//singly revrse

#include<stdio.h>
#include<stdlib.h>

typedef struct revrse{
	int data;
	struct revrse* next;
}rev;

rev* head=NULL;

rev* createnode(){
	rev* node=(rev*)malloc(sizeof(rev));

	printf("Enter data\n");
	scanf("%d",&node->data);

	node->next=NULL;
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
	}
}

int count(){
	rev* temp=head;
	int cnt=0;
	while(temp!=NULL){
		temp=temp->next;
		cnt++;
	}

	return cnt;
}

int revdata(){
	if(head==NULL){
		printf("Head is empty\n");
		return -1;
	}
	rev* temp=head->next;
	rev* temp1=NULL;

	while(head!=NULL){
		temp=head->next;
		head->next=temp1;
		temp1=head;
		head=temp;
	}
	head=temp1;
}

int printdata(){
	if(head==NULL){
		printf("Empty\n");
		return -1;
	}
	rev* temp=head;
	while(temp->next!=NULL){
		printf("|%d|->",temp->data);
		temp=temp->next;
	}
		printf("|%d|\n",temp->data);
}

void main(){
	printf("Enter Size\n");
	int size;
	scanf("%d",&size);

	for(int i=0;i<size;i++){
		adddata();
	}
	printdata();
	revdata();
	printdata();
}


	
		




