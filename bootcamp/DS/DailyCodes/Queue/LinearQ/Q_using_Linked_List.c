#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* front=NULL;
node* rear=NULL;
int flag=0;

node* createnode(){
	node* newnode=(node*)malloc(sizeof(node));
	if(newnode==NULL)
		exit(0);

	printf("Enter Data\n");
	scanf("%d",&newnode->data);

	newnode->next=NULL;

	return newnode;
}

void Enqueue(){
	node* newnode=createnode();

	if(front==NULL){
		front=newnode;
		rear=newnode;
	}else{
		rear->next=newnode;
		rear=newnode;
	}
}

int Dequeue(){
	if(rear==NULL){
		flag=1;
		return -1;
	}
	else{
		int val=(front->data);
		if(front==rear){
			free(front);
			front=NULL;
			rear=NULL;
		}else{
			node* temp=front;
			front=front->next;
			free(temp);
		}
		flag=0;
		return val;
	}
}

int Front(){
	if(front==NULL){
		flag=1;
		return -1;
	}else{
		flag=0;
		return (front->data);
	}
}

int Display(){
	if(front==NULL){
		return -1;
	}

	node* temp=front;
	while(temp!=NULL){
		printf("|%d| ",(temp->data));
		temp=temp->next;
	}
}

void main(){

	char ch;

	do{
		printf("1 : Enqueue()\n");
		printf("2 : Dequeue()\n");
		printf("3 : Front()\n");
		printf("4 : Display()\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: Enqueue();
				break;
				
			case 2: {
					int ret=Dequeue();
					if(flag==1)
						printf("Queue is UndeFlow\n");
					else
						printf("%d is dequeueed\n",ret);
				}
				break;
			case 3: {
					int ret=Front();
					if(flag==1)
						printf("Queue is empty\n");
					else
						printf("Data : %d\n\n",ret);
				}
				break;
			case 4: {
					int ret=Display();
					if(ret==-1)
						printf("Queue is empty\n");
				}
				break;
			default : printf("Invalid choice\n");
		}

		printf("Do you wan't to continue[y/n]\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
