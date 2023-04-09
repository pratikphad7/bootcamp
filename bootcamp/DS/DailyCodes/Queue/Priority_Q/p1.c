#include<stdio.h>
#include<stdlib.h>

typedef struct priority{
	int priorty;
	int data;
	struct priority* next;
}sort;

sort* head=NULL;

sort* createnode(){
	sort* node=(sort*)malloc(sizeof(sort*));
	do{
		printf("Enter priorty\n");
		scanf("%d",&node->priorty);
		if(node->priorty>5||node->priorty<0)
			printf("Invalid\n");
	}while(node->priorty<0&&node->priorty>5);

	printf("Enter Data\n");
	scanf("%d",&node->data);

	node->next=NULL;

	return node;
}

void addfirst(sort* node){
	if(head==NULL){
		head=node;
	}else{
		node->next=head;
		head=node;
	}
}

void addlast(sort* node){
	if(head==NULL)
		head=node;
	else{
		sort* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=node;
	}
}

int countnode(){
	int count=0;
	sort* temp=head;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
}

void addatpos(int pos,sort* node){
	if(pos==1)
		addfirst(node);
	else if(pos==countnode())
		addlast(node);
	else {
		sort* temp=head;
		while(pos-2){
			temp=temp->next;
			pos--;
		}
		node->next=temp->next;
		temp->next=node;
	}
}

void sortnode(){
	sort* node=createnode();
	int count=0;
	if(head==NULL)
		head=node;
	else{
		sort* temp=head;
		while(temp!=NULL){
			if(temp->priorty>node->priorty)
				break;
			temp=temp->next;
			count++;
		}
		addatpos(count+1,node);
	}
}

int printnode(){
	if(head==NULL){
		printf("Invalid Operation\n");
	}else{
		sort* temp=head;
		while(temp!=NULL){
			printf("|%d : %d| ",temp->priorty,temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}

void main(){
	char ch;
	do{
		printf("1:sort node()\n");
		printf("2:print node()\n");

		printf("Enter your choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1 :sortnode();
				break;
			case 2 :printnode();
				break;
			default :printf("Invalid choice\n");

		}

		printf("Do you want to continue\n");
		getchar();
		scanf("%c",&ch);

	}while(ch=='y'||ch=='Y');
}
