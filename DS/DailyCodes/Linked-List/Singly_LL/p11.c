#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char name[20];
	float imdb;
	struct movie* next;
}mv;
mv *head=NULL;


void getdata(){
	mv *node=(mv*)malloc(sizeof(mv));
	printf("enter movie name\n");
	fgets(node->name,20,stdin);
	char* cnt=node->name;
	while(*cnt!='\n'){
		cnt++;
	}
	*cnt='\0';

	printf("enter imdb\n");
	scanf("%f",&node->imdb);
	getchar();

	if(head==NULL){
		head=node;
	}else{
		mv *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void print(){
	mv *temp=head;
	while(temp!=NULL){
	printf("|movie name : %s ",temp->name);
	printf("imdb : %f|-->",temp->imdb);
	temp=temp->next;
	}
}

void main(){

	getdata();
	getdata();
	print();
}
