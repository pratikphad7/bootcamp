#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char name[20];
	int data;
	struct movie* next;
}mv;

mv* head=NULL;

mv* createnode(){
	mv* node=(mv*)malloc(sizeof(mv));
	printf("Enter Movie Name\n");
	int i=0;
	char ch;
	getchar();
	while((ch=getchar())!='\n')
		(*node).name[i++]=ch;
	
	printf("Enter data\n");
	scanf("%d",&node->data);

	node->next=NULL;

	return node;
}

int count(){
	mv* temp=head;
	int cnt=0;
	while(temp!=head){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}

void getdata(){
	mv* node=createnode();

	if(head==NULL){
		head=node;
		node->next=head;
	}else{
		mv* temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=node;
		node->next=head;
	}
}

void addfirst(){
	mv* node=createnode();
	if(head==NULL){
		head=node;
		node->next=head;
	}else{
		mv* temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=node;
		node->next=head;
		head=node;
	}
}

int addatpos(){
	printf("Enter position\n");
	int pos;
	scanf("%d",&pos);
	
	int cnt=count();
	if(pos<1||pos>cnt+2){
		printf("Invalid position\n");
		return -1;
	}else{
		if(pos==1)
			addfirst();
		else if(pos==cnt+1)
			getdata();
		else{
			mv* node=createnode();
			mv* temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			node->next=temp->next;
			temp->next=node;
		}
		return 0;
	}
}

int deletefirst(){
	if(head==NULL){
		printf("list is empty\n");
		return -1;
	}else{
		if(head->next==head){
			free(head);
			head=NULL;
		}else{
			mv* temp=head;
			while(temp->next!=head)
				temp=temp->next;
			head=head->next;
			free(temp->next);
			temp->next=head;
		}
		return 0;
	}
}

int deletelast(){
	if(head==NULL){
		printf("list is empty\n");
		return -1;
	}else{
		if(head->next==head){
			free(head);
			head=NULL;
		}else{
			mv* temp=head;
			while(temp->next->next!=head)
				temp=temp->next;
			free(temp->next);
			temp->next=head;
		}
		return 0;
	}
}

int deletepos(){
	printf("Enter position\n");
	int pos;
	scanf("%d",&pos);
	int cnt=count();
	printf("cnt=%d\n",cnt);

	if(pos<1||pos>cnt){
		printf("invalid position\n");	
		return -1;
	}else{
	       	if(pos==1)
			deletefirst();
		else if(pos==cnt)
			deletelast();
		else{
			mv* temp=head;
			mv* temp1=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			temp1=temp->next;
			temp->next=temp1->next;
			free(temp1);
		}
		return 0;
	}
}

			
int printdata(){
	if(head==NULL){
		printf("empty list\n");
		return -1;
	}
	mv* temp=head;
	while(temp->next!=head){
		printf("|%s : %d : %p|-->",temp->name,temp->data,temp->next);
		temp=temp->next;
	}
		printf("|%s : %d : %p|\n",temp->name,temp->data,temp->next);
}

void main(){
	char ch;

	do{
		printf("1 : getdata()\n");
		printf("2 : printdata()\n");
		printf("3 : addatfirst()\n");
		printf("4 : addatpos()\n");
		printf("5 : deletefirst()\n");
		printf("6 : deletelast()\n");
		printf("7 : deletepos()\n");

		printf("Enter Your Choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: getdata();
			       break;
			case 2: printdata();
			       break;
			case 3: addfirst();
				break;
			case 4: addatpos();
				break;
			case 5: deletefirst();
				break;
			case 6: deletelast();
				break;
			case 7: deletepos();
				break;
			default : printf("Enter valid choice\n");
		}

		printf("Do You wan't to Continue\n");
		getchar();
		scanf("%c",&ch);
		}while(ch=='y'||ch=='Y');
}




