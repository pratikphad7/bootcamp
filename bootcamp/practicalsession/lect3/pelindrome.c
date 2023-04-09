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

nd* midnode(){
	
	if(head==NULL){
		printf("head is empty\n");
	}else if(head->next==NULL){
		printf("List having only node\n");
	}else{
		nd* temp=head;
		nd* temp1=head;
		while(temp!=NULL && temp->next!=NULL){
			temp=temp->next->next;
			temp1=temp1->next;
		}
		return temp1;
	}

}

nd* riverse(){
	nd* store=midnode();
	nd* head1=store->next;
	nd* temp=NULL;
	nd* temp1=NULL;
	while(head1!=NULL){
		temp1=head1->next;
		head1->next=temp;
		temp=head1;
		head1=temp1;
	}
	store->next=temp;
	return temp;
}

int pelindrome(){
	if(head==NULL){
		printf("List have no node\n");
		return -1;
	}else{
		if(head->next==NULL)
			printf("List having only one node\n");
		else{
			nd* node=riverse();
			nd* temp=head;
			while(node!=NULL){
				if(temp->data!=node->data)
					return -1;
				temp=temp->next;
				node=node->next;
			}
			riverse();
		}
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
		printf("4:pelindrome()\n");
		printf("5:reverse()\n");

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
			case 4 :{
					int ret=pelindrome();
					if(ret==-1)
						printf("Given List is not pelindrome List\n");
					else
						printf("Given List is pelindrome List\n");
				}
				break;
			case 5 :riverse();
				break;
			default : printf("Invalid choice\n");

		}
		printf("Do you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
