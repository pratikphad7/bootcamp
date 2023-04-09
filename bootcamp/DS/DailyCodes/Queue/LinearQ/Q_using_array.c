#include<stdio.h>

int size;
int front=-1;
int rear=-1;
int flag=0;

int Enqueue(int *queue){
	if(rear==size-1){
		return -1;
	}else{
		if(front==-1)
			front++;
		rear++;
		printf("Enter Data\n");
		scanf("%d",queue+rear);
		return 0;
	}
}

int Dequeue(int *queue){
	if(rear==-1){
		flag=1;
		return -1;
	}
	else{
		int val=*(queue+front);
		if(front==rear){
			front=-1;
			rear=-1;
		}else
			front++;
		flag=0;
		return val;
	}
}

int Front(int *queue){
	if(front==-1){
		return -1;
		flag=1;
	}else
		return *(queue+front);
}

int Display(int* queue){
	if(front==-1){
		return -1;
	}
	for(int i=front;i<=rear;i++){
		printf("|%d| ",*(queue+i));
	}
}

void main(){
	printf("Enter Queue size\n");
	scanf("%d",&size);

	int queue[size];
	
	char ch;

	do{
		printf("1 : Enqueue()\n");
		printf("2 : Dequeue()\n");
		printf("3 : Front()\n");
		printf("4 : Display()\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: {
					int ret=Enqueue(queue);
					if(ret==-1)
						printf("queue is full\n");
				}
				break;
			case 2: {
					int ret=Dequeue(queue);
					if(flag==1)
						printf("Queue is UndeFlow\n");
					else
						printf("%d is dequeueed\n",ret);
				}
				break;
			case 3: {
					int ret=Front(queue);
					if(flag==1)
						printf("Queue is empty\n");
					else
						printf("Data : %d\n\n",ret);
				}
				break;
			case 4: {
					int ret=Display(queue);
					if(ret==-1)
						printf("Queue is empty\n");
				}
				break;
			default : printf("Invalid choice\n");
		}

		printf("Do you wan't to continue[y/n]\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
