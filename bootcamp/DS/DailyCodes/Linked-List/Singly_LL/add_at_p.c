//Add at n position

#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{
	char name[20];
	int tic;
	float imdb;
	struct Movie *next;
}mv;

mv* head=NULL;

mv* create_Node(){
	mv* node=(mv*)malloc(sizeof(mv));
	printf("Enter Movie Name\n");
	char ch;
	int i=0;
	getchar();
	while((ch=getchar())!='\n'){
		(*node).name[i++]=ch;
	}

	printf("Enter no of tickets\n");
	scanf("%d",&node->tic);

	printf("Enter IMDB Rate\n");
	scanf("%f",&node->imdb);

	node->next=NULL;

	return(node);
}

void adddata(){
	mv* node=create_Node();
	if(head==NULL)
		head=node;
	else{
		mv* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void addatfirst(){
	mv* node=create_Node();
	if(head==NULL)
		adddata();
	else{
		node->next=head;
		head=node;
	}
}

int count(){
	mv* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return(count);
}

void atpos(){
	int pos;
	printf("Enter position where you want to add Position\n");
	scanf("%d",&pos);
	int cnt=count();
	cnt++;
	if(pos>=1&&pos<=cnt){
		mv* node=create_Node();
		mv* temp=head;
		while(pos-2){
			temp=temp->next;
			pos--;
		}
		node->next=temp->next;
		temp->next=node;
	}else{

		printf("Enter valid position\n");
	}
}

void printdata(){
	mv* temp=head;
	while(temp!=NULL){
		printf("|%s : %d : %f|",temp->name,temp->tic,temp->imdb);
		if(temp->next!=NULL)
			printf("-->");
		temp=temp->next;
	}printf("\n");
}

void main(){
	int nodes;
	printf("Enter no of nodes\n");
	scanf("%d",&nodes);

	for(int i=0;i<nodes;i++){
		adddata();
	}
	printdata();
	addatfirst();
	printdata();
	atpos();
	printdata();
	count();
	printdata();
}
