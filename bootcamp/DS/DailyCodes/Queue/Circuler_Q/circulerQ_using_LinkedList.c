#include<stdio.h>
#include<stdlib.h>

typedef struct demo{
	int data;
	struct demo *next;
}demo;

int size;
int flag=0;
demo* front=NULL;
demo* rear=NULL;

int countnode(){
	if(front==NULL){
		return 0;
	}
		demo* temp=front;
		int count=0;
		while(temp->next!=front){
			temp=temp->next;
			count++;
		}
		return count+1;
}	

demo* createnode(){
	demo* node=(demo*)malloc(sizeof(demo));
	printf("Enter Data\n");
	scanf("%d",&node->data);

	node->next=NULL;
	return node;
}

int Enqueue(){
	if(size==countnode()){
		return -1;
	}else{
		demo* node=createnode();
		if(front==NULL){
			front=node;
			rear=node;
			node->next=node;
		}else{
			rear->next=node;
			rear=node;
			node->next=front;
		}
		return 0;
	}
}

int Dequeue(){
	if(front==NULL){
		flag=0;
		return -1;
	}else{
		int val=front->data;
		flag=1;
		if(front->next==front){
			free(front);
			front=NULL;
			rear=NULL;
		}else{
			demo* temp=front;
			front=front->next;
			rear->next=front;
			free(temp);
		}
		return val;
	}
}

int Front(){
	if(front==NULL){
		flag = 0;
		return -1;
	}else{
		flag = 1;
		return front->data;
	}
}

int Display(){
	if(front==NULL){
		return -1;
	}else{
		demo* temp=front;
		while(temp->next!=front){
			printf("|%d| ",temp->data);
			temp=temp->next;
		}
			printf("|%d|\n",temp->data);
	}
}

void main(){
	printf("Enter size\n");
	scanf("%d",&size);

	char ch;

	do{
		printf("1:Enqueue()\n");
		printf("2:Dequeue()\n");
		printf("3:Front()\n");
		printf("4:Display()\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: {
					int ret=Enqueue();
					if(ret==-1){
						printf("Queue Overflow\n");
					}
				}
				break;
			case 2: {
					int ret=Dequeue();
					if(flag==0){
						printf("Queue is Undeflow\n");
					}else{
						printf("%d is Dequeued\n",ret);
					}
				}
				break;
			case 3: {
					int ret=Front();
					if(flag==0){
						printf("Queue is Empty\n");
					}else{
						printf("\nFront : %d\n\n",ret);
					}
				}
				break;
			case 4: {
					int ret=Display();
					if(ret==-1){
						printf("Queue is Empty\n");
					}
				}
				break;
			default : printf("Invalid choice\n");
		}
		printf("Do You wan't to continue?[y/n]\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}


