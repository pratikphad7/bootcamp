#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}nd;

nd* head=NULL;

nd* createnode(){
	nd* node=(nd*)malloc(sizeof(nd));
	printf("Enter Data\n");
	scanf("%d",&node->data);

	node->next=NULL;

	return node;
}

void addnode(){
	nd* node=createnode();

	if(head==NULL)
		head=node;
	else{
		nd* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=node;
	}
	
}

int midnode(){
	
	if(head==NULL){
		printf("head is empty\n");
		return -1;
	}else if(head->next==NULL){
		printf("List having only node\n");
		return -1;
	}else{
		nd* temp=head;
		nd* temp1=head;
		while(temp!=NULL && temp->next!=NULL){
			temp=temp->next->next;
			temp1=temp1->next;
		}
		printf("%d is midnode data\n",temp1->data);
		return 0;
	}

}

int printnode(){
	if(head==NULL){
		printf("Head is empty\n");
		return -1;
	}else{
		nd* temp=head;
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
			printf("|%d|\n",temp->data);
	}

}

void main(){
	char ch;
	do{
		printf("1:addnode()\n");
		printf("2:midposition()\n");
		printf("3:printdata()\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1 :addnode();
			        break;
			case 2 :midnode();
				break;
			case 3 :printnode();
				break;
			default : printf("Invalid choice\n");

		}
		printf("Do you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
