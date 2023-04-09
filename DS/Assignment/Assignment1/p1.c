// wap for the LinkedList of malls consisting of it's name,number of shops, and revenue,connect 3 malls in the linked list &print their data

#include<stdio.h>
#include<stdlib.h>

typedef struct mall{
	char mall_name[20];
	int no_shops;
	float revenue;
	struct mall* next;
}mall;

mall* head=NULL;

void getdata(){
	mall* node=(mall*)malloc(sizeof(mall));
	printf("Enter mall Name\n");
	char ch;
	int i=0;
	getchar();
	while((ch=getchar())!='\n'){
		(*node).mall_name[i]=ch;
		i++;
	}
	
	printf("Enter no of shops in MALL\n");
	scanf("%d",&node->no_shops);

	printf("Enter revenue of MALL\n");
	scanf("%f",&node->revenue);
	
	node->next=NULL;

	if(head==NULL){
		head=node;
	}else{
		mall* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void printdata(){
	mall* temp=head;

	while(temp!=NULL){
		printf("|%s|%d|%f|--->",temp->mall_name,temp->no_shops,temp->revenue);
		temp=temp->next;
	}
	PRINTF("|END|\n");
}

void main(){
	int cnt;
	printf("Enter no of nodes\n");
	scanf("%d",&cnt);

	for(int i=0;i<cnt;i++){
		getdata();
	}

	printdata();
}

	



	
