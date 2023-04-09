//add node at First Position

#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char name[20];
	int tic;
	float imdb;
	struct movie* next;
}mv;

mv* head=NULL;
mv* createdata(){
	mv* node=(mv*)malloc(sizeof(mv));
	puts("ENTER MOVIE NAME");
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*node).name[i++]=ch;
	}

	puts("ENTER NO OF TICKETS REQUIRED");
	scanf("%d",&node->tic);

	puts("ENTER MOVIE IMDB RATE");
	scanf("%f",&node->imdb);

	node->next=NULL;
	return(node);
}

void getdata(){
	mv* node=createdata();
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

void addfirst(){
	mv* node=createdata();
	if(head==NULL){
		getdata();
	}else{
		node->next=head;
		head=node;
	}
}

void printdata(){
	mv* temp=head;
	while(temp!=NULL){
		printf("|%s : %d : %f : %p|",temp->name,temp->tic,temp->imdb,temp->next);
		temp=temp->next;
		if(temp!=NULL){
			printf("-->");
		}
	}
	
	printf("\n");
}

void main(){
	int node;
	printf("ENTER NO OF NODES\n");
	scanf("%d",&node);

	for(int i=0;i<node;i++){
		getdata();
	}
	printdata();
	addfirst();
	printdata();
}
		
