#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char movie_name[20];
	int no_tic;
	float imdb;
	struct movie* next;
}mv;
mv* head=NULL;

void addnode(){
	mv* node=(mv*)malloc(sizeof(mv));

	printf("Enter movie name\n");
	char ch;
	int i=0;
	getchar();

	while((ch=getchar())!='\n'){
		(*node).movie_name[i]=ch;
		i++;
	}
		
	printf("enter no of tickets\n");
	scanf("%d",&node->no_tic);

	printf("enter IMDB rate\n");
	scanf("%f",&node->imdb);

	node->next=NULL;

	if(head==NULL){
		head=node;
	}else{
		mv* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void printdata(){
	mv* temp=head;
	while(temp!=NULL){
		printf("|%s : %d : %f|-->",temp->movie_name,temp->no_tic,temp->imdb);
		temp=temp->next;
	}
	printf("|END|\n");
}
void main(){
	int node;
	printf("Enter no of Movies\n");
	scanf("%d",&node);
	
	for(int i=1;i<=node;i++){

		addnode();
	}
	printdata();
}	

