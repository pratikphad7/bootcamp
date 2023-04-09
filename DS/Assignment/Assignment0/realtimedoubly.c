#include<stdio.h>
#include<stdlib.h>

typedef struct stadium{
	struct stadium *prev;
	char name[20];
	int seat_no;
	float tic_pric;
	struct stadium *next;
}std;

std* head=NULL;

std* createnode(){
	std* node=(std*)malloc(sizeof(std));

	printf("Enter Name\n");
	char ch;
	int i=0;
	getchar();

	node->prev=NULL;

	while((ch=getchar())!='\n')
		(*node).name[i++]=ch;

	printf("Enter seat No Of audiance\n");
	scanf("%d",&node->seat_no);

	printf("Enter Price of Tickets\n");
	scanf("%f",&node->tic_pric);

	node->next=NULL;

	return node;
}

void adddata(){
	std* node=createnode();
	if(head==NULL)
		head=node;
	else{
		std* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=node;
		node->prev=temp;
	}
}

void addatfirst(){
	std* node=createnode();
	if(head==NULL)
		head=node;
	else{
		node->next=head;
		head->prev=node;
		head=node;
	}
}

int count(){
	std* temp=head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
	        count++;
	}
	return count;
}

int addatpos(){
	printf("Enter Position\n");
	int pos;
	scanf("%d",&pos);

	int cnt=count();

	if(pos<1||pos>cnt+1){
		printf("Invalid Number\n");
		return -1;
	}else{
		if(pos==1){
			addatfirst();
		}
		else if(pos==cnt+1)
			adddata();
		else{
			std* node=createnode();
			std* temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			node->next=temp->next;
			node->prev=temp;
			temp->next=node;
			node->next->prev=node;

		}
		return 0;
	}
}

int deletefirst(){
	if(head==NULL){
		printf("stadium is empty\n");
		return -1;
	}else{
		if(head->next==NULL){
			free(head);
			head=NULL;
		}else{
			head=head->next;
			free(head->prev);
			head->prev=NULL;
		}
		return 0;
	}
}

int deletelast(){
	if(head==NULL){
		printf("stadium is empty\n");
		return -1;
	}else{
		if(head->next==NULL){
			free(head);
			head=NULL;
		}else{
			std* temp=head;
			while(temp->next->next!=NULL)
				temp=temp->next;
			free(temp->next);
			temp->next=NULL;
		}
		return 0;
	}
}


int deletepos(){
	int cnt=count();
	printf("Enter which seat to remove\n");
	int pos;
	scanf("%d",&pos);
	if(pos<1||pos>cnt){
		printf("Invalid seat number\n");
		return -1;
	}else{
		if(pos==1)
			deletefirst();
		else if(pos==cnt)
			deletelast();
		else{
			std* temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			temp->next=temp->next->next;
			free(temp->next->prev);
			temp->next->prev=temp;
		}
		return 0;
	}
}

int printdata(){
	if(head==NULL){
		printf("empty stadium\n");
		return -1;
	}else{
		std* temp=head;
		while(temp->next!=NULL){
			printf("|%s : %d : %f|-->",temp->name,temp->seat_no,temp->tic_pric);
			temp=temp->next;
		}
			printf("|%s : %d : %f|\n",temp->name,temp->seat_no,temp->tic_pric);
	}
	return 0;
}
		

void main(){
	char ch;
	do{
		printf("1 : add audiance data\n");
		printf("2 : add first audince data\n");
		printf("3 : add at position audiance data\n");
		printf("4 : delete first audiance data\n");
		printf("5 : delete last audiance data\n");
		printf("6 : delete at position of audiance data\n");
		printf("7 : print audiance data\n");
		
		printf("Enter Choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: adddata();
				break;
			case 2: addatfirst();
				break;
			case 3: addatpos();
				break;
			case 4: deletefirst();
				break;
			case 5: deletelast();
				break;
			case 6: deletepos();
				break;
			case 7: printdata();
				break;
			default: printf("Enter valid Choice\n");
		}

		printf("Do you want to continue[Y/N]\n");
		getchar();
		scanf("%c",&ch);

	}while(ch=='Y'||ch=='y');
}




