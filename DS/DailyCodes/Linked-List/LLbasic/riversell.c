#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{
	int data;
	struct Demo* next;
}dm;

dm* head=NULL;

dm* createnode(){
	dm* node=(dm*)malloc(sizeof(dm));

	printf("Enter Data\n");
	scanf("%d",&node->data);

	node->next=NULL;

	return node;
}

void adddata(){
	dm* node=createnode();
	if(head==NULL)
		head=node;
	else{
		dm* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

int rvrs(){
	if(head==NULL){
		printf("No DATA Avilable\n");
		return -1;
	}
	dm* temp=head;
	dm* temp1=head;
	dm* temp2=head;
	int cnt=1;
	
	while(temp1->next->next!=NULL){
		temp1=temp1->next;
		cnt++;
	}
	int i=1;
	int k=cnt;
	int count=0;

	for(int l=0;l<cnt/2;l++){
		if(i==1){
			dm* y=temp1->next->next;
			temp1->next->next=temp->next;
			temp->next=y;
			head=temp1->next;
			temp1->next=temp;
			i++;
		}else{
			
					
			int j=2;
			temp=head;
			while(j!=i){
				temp=temp->next;
				j++;
			}
			
			j=k;
			temp1=head;
			
					
			while(j-1){		
				temp1=temp1->next;		
				j--;
			}
			dm* y=temp->next->next;
			temp->next->next=temp1->next->next;
			temp1->next->next=y;
			
			dm* z=temp->next;
			temp->next=temp1->next;
			temp1->next=z;
			i++;
		}
		k--;
		
	}
	return 0;
}
			
void printdata(){
	if(head==NULL)
		printf("No Data Avilable\n");
	dm* temp=head;
	while(temp!=NULL){
		printf("|%d|\n",temp->data);
		temp=temp->next;
	}
	
}

void main(){

	char ch;
	do{
		printf("1:add data\n");
		printf("2:reverse list\n");
		printf("3:print data\n");

		printf("Enter your choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1 : adddata();
			         break;
			case 2 : rvrs();
			       	 break;
			case 3 : printdata();
				 break;
			default : printf("Enter valid choice\n");
		}
	
		printf("Do you want to continue[y/n]\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}

		
