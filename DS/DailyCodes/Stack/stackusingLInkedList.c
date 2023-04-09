#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
	char name[20];
	int data;
	struct node* next;
}nd;

int stacksize;
nd* head=NULL;
nd* top=NULL;

int count(){
	nd* temp=head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}

bool isfull(){
	if(count()==stacksize)
		return true;
	else
		return false;
}

bool isempty(){
	if(head==NULL)
		return true;
	else
		return false;
}

nd* createnode(){
	nd* node=(nd*)malloc(sizeof(nd));
	printf("Enter name\n");
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n')
		(*node).name[i++]=ch;

	printf("Enter Data\n");
	scanf("%d",&node->data);
	return node;
}

nd* addnode(){
	nd* node=createnode();

	if(head==NULL)
		head=node;
	else{
		nd* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=node;
	}
	return node;
}

int push(){

	if(isfull())
		return -1;
	else{
		nd* node=addnode();
		top=node;
		return 0;
	}
}

int peek(){
	if(isempty())
		return -1;
	else{
		printf("|%s : %d|\n",top->name,top->data);
		return 0;
	}
}

int pop(){
	if(isempty())
		return -1;
	else{
		int ret=top->data;
		top=head;
		while(top->next->next!=NULL)
			top=top->next;
		free(top->next);
		top->next=NULL;
		return ret;
	}
}


void main(){
	char ch;
	printf("Enter stack size\n");
	scanf("%d",&stacksize);

	do{
		printf("1:push\n");
		printf("2:peek\n");
		printf("3:pop\n");
		printf("4:isempty\n");
		printf("5:isfull\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: push();
				break;
			case 2: peek();
				break;
			case 3: pop();
				break;
			case 4: isempty();
				break;
			case 5: isfull();
				break;
			default : printf("Enter valid choice\n");
		}

		printf("Do you want to continue[y/n]\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
