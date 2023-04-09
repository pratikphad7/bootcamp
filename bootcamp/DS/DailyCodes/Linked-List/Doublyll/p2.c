#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	struct movie* prv;
	char name[20];
	int tic;
	float imdb;
	struct movie* next;
}mv;

mv* head=NULL;
mv* creatnode(){
	mv* node=(mv*)malloc(sizeof(mv));
	char ch;
	int i=0;
	printf("Enter Movie Name\n");
	getchar();
	while((ch=getchar())!='\n')
		(*node).name[i++]=ch;
	printf("Enter no of tickets\n");
	scanf("%d",&node->tic);

	printf("Enter IMDB rate of Movie\n");
	scanf("%f",&node->imdb);
	
	node->prv=NULL;
	node->next=NULL;
	return node;

}

void adddata(){
	mv* node=creatnode();

	if(head==NULL){
		head=node;
	}else{
		mv* temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=node;
		node->prv=temp;
	}
}

void addatfirst(){
	mv* node=creatnode();
	if(head==NULL){
		head=node;
	}else{
		head->prv=node;
		node->next=head;
		head=node;
	}
}

int count(){
	mv* temp=head;
	int cnt=0;
	while(temp!=NULL){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}

int addatpos(){
	printf("Enter position\n");
	int cnt=count();
	int pos;
	scanf("%d",&pos);
	if(pos<1||pos>cnt+1){
		printf("Enter Valid Position\n");
		return -1;
	}else{
		if(pos==1){
			addatfirst();
		}else if(pos==cnt+1){
			adddata();
		}else{
			mv* node=creatnode();
			mv* temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			node->next=temp->next;
			temp->next=node;
			temp->next->prv=temp;
			node->next->prv=node;
		}
		return 0;
	}
}

void deletefirst(){
	if(head==NULL){
		printf("No Nodes available at Head\n");
	}else if(head->next==NULL){
		free(head);
		head=NULL;
	}else{
		head=head->next;
		free(head->prv);
		head->prv=NULL;
	}
}

void deletelast(){
	if(head==NULL){
		printf("no data available at head\n");
	}else if(head->next==NULL){
		free(head);
		head=NULL;
	}else{
		mv* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void deletepos(){
	if(head==NULL){
		printf("No node available in Head\n");
	}else{
		printf("Enter position\n");
		int pos;
		scanf("%d",&pos);
		int cnt=count();
		if(pos==1){
			deletefirst();
		}else if(pos==cnt){
			deletelast();
		}else if(pos<1||pos>cnt){
			printf("Enter Valid Position\n");
		}else{
			mv* temp=head;
			while(pos-2){
				temp=temp->next;
			}
			temp->next=temp->next->next;
			free(temp->next->prv);
			temp->next->prv=temp;
		}
	}
}

void printdata(){
	if(head!=NULL){
		mv* temp=head;
		while(temp->next!=NULL){
			printf("|%s : %d : %f|-->",temp->name,temp->tic,temp->imdb);
			temp=temp->next;
		}
			printf("|%s : %d : %f|\n",temp->name,temp->tic,temp->imdb);
	}else{
		printf("No Data Available\n");
	}
}

void main(){
	char ch;
	
	do{
		printf("1: adddata()      2:addatfirts()\n");
		printf("3: addatlast()    4:addatposition()\n");
		printf("5: deletefirst()  6:deleteposition()\n");
		printf("7: deletelast()   8:printdata()\n");

		printf("\nEnter your Choice:\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: adddata();
				break;
			case 2: addatfirst();
				break;
			case 3: adddata();
				break;
			case 4: addatpos();
			        break;
			case 5: deletefirst();
				break;
			case 6: deletepos();
				break;
			case 7: deletelast();
				break;
			case 8: printdata();
				break;
			default : printf("Enter valid choice\n");
		}

		printf("Do you want continue?[y/n]\n");
		getchar();
		scanf("%c",&ch);
		
	}while(ch=='y'||ch=='Y');
	
}



	




