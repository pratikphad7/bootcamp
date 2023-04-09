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
		node->next=head;
	}else{
		rev* temp=head;
		while(temp->next!=head)
			temp=temp->next;
		temp->next=node;
		node->next=head;
	}
}

int count(){
	rev* temp=head;
	int cnt=0;
	while(temp!=head){
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
	rev* temp1=head;
	rev* temp2=NULL;
	rev* temp3=NULL;

	while(temp2!=head){
		temp2=temp1->next;
		temp1->next=temp3;
		temp3=temp1;
		temp1=temp2;
		}
	head->next=temp3;
	head=temp3;
}

int printdata(){
	if(head==NULL){
		printf("Empty\n");
		return -1;
	}
	rev* temp=head;
	while(temp->next!=head){
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


	
		




