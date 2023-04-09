#include<stdio.h>
#include<stdlib.h>

typedef struct occ{
	int data;
	struct occ *next;
}oc;

oc* head=NULL;

oc* createnode(){
	oc* node=(oc*)malloc(sizeof(oc));
	printf("Enter Data\n");
	scanf("%d",&node->data);

	node->next=NULL;
	return(node);
}

void adddata(){
	oc* node=createnode();
	if(head==NULL){
		head=node;
	}else{
		oc* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void secondocu(){
	int num;
	printf("Enter Number\n");
	scanf("%d",&num);
	
	int cnt=0;
	int data1=0;
	int data2=0;
	oc* temp=head;
	while(temp!=NULL){
		cnt++;
		if(num==temp->data){
			data2=data1;
			data1=cnt;
		}
		temp=temp->next;
	}
	if(data2>0){
		printf("Second Occurence of given no at : %d\n",data2);
	}else if(data1>0 && data2<1){
		printf("Given number occuer only once in this list at position : %d\n",data1);
	}else{
		printf("Given no not present in this list\n");
	}
}

void printdata(){
	oc* temp=head;
	while(temp!=NULL){
		printf("|%d|",temp->data);
		temp=temp->next;
		if(temp!=NULL)
			printf("-->");
		else
			printf("\n");
	}
}

void main(){

	char ch;
	
	do{
		printf("1 : adddata()\n");
		printf("2 : second_occurence()\n");
		printf("3 : printdata()\n");

		int no;
		printf("Enter Your choice\n");
		scanf("%d",&no);

		switch(no){
			case 1 : adddata();
				 break;
			case 2 : secondocu();
				 break;
			case 3 : printdata();
				 break;
			default : printf("Enter correct Choice\n");
		}
		getchar();
		printf("Do you want to continue?[y/n]\n");
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
		
