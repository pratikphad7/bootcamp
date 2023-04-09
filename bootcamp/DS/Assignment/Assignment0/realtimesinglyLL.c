#include<stdio.h>
#include<stdlib.h>

typedef struct BusRoute{
	char bus_stop[20];
	int no_of_pass;
	float tic_pric;
	struct BusRoute *next;
}route;

route* head=NULL;

route* createnode(){
	route* node=(route*)malloc(sizeof(route));

	printf("Enter Bus Stop Name\n");
	char ch;
	int i=0;
	getchar();
	while((ch=getchar())!='\n')
		(*node).bus_stop[i++]=ch;

	printf("Enter No Of passengers in this station\n");
	scanf("%d",&node->no_of_pass);

	printf("Enter Price of Tickets\n");
	scanf("%f",&node->tic_pric);

	node->next=NULL;

	return node;
}

void adddata(){
	route* node=createnode();
	if(head==NULL)
		head=node;
	else{
		route* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=node;
	}
}

void addatfirst(){
	route* node=createnode();
	if(head==NULL)
		head=node;
	else{
		node->next=head;
		head=node;
	}
}

int count(){
	route* temp=head;
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
		printf("Invalid Bus Stop Number\n");
		return -1;
	}else{
		if(pos==1){
			addatfirst();
		}
		else if(pos==cnt+1)
			adddata();
		else{
			route* node=createnode();
			route* temp=head;
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
		printf("Bus still in depot\n");
		return -1;
	}else{
		if(head->next==NULL){
			free(head);
			head=NULL;
		}else{
			route* temp=head;
			head=head->next;
			free(temp);
		}
		return 0;
	}
}

int deletelast(){
	if(head==NULL){
		printf("Bus still  in depot\n");
		return -1;
	}else{
		if(head->next==NULL){
			free(head);
			head=NULL;
		}else{
			route* temp=head;
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
	printf("Ebter BusStop no Which You Want To remove\n");
	int pos;
	scanf("%d",&pos);
	if(pos<1||pos>cnt){
		printf("Invalid BUS Stop noumber\n");
		return -1;
	}else{
		if(pos==1)
			deletefirst();
		else if(pos==cnt)
			deletelast();
		else{
			route* temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			route* temp1=temp->next;
			temp->next=temp1->next;
			free(temp1);
		}
		return 0;
	}
}

int printdata(){
	if(head==NULL){
		printf("NO BUS Stop in List\n");
		return -1;
	}else{
		route* temp=head;
		while(temp->next!=NULL){
			printf("|%s : %d : %f|-->",temp->bus_stop,temp->no_of_pass,temp->tic_pric);
			temp=temp->next;
		}
			printf("|%s : %d : %f|\n",temp->bus_stop,temp->no_of_pass,temp->tic_pric);
	}
	return 0;
}
		

void main(){
	char ch;
	do{
		printf("1 : add bus stop\n");
		printf("2 : change first bus stop\n");
		printf("3 : add at position bus stop\n");
		printf("4 : delete first bus stop\n");
		printf("5 : delete last bus stop\n");
		printf("6 : delete at position bus stop\n");
		printf("7 : print bus stops\n");
		
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




