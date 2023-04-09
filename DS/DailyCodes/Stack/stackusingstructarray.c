#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct node{
	char name[20];
	int data;
}obj;

int size;
int top=-1;
int flag=0;

bool isfull(){
	if(top==size-1)
		return true;
	else
		return false;
}

bool isempty(){
	if(top==-1)
		return true;
	else
		return false;
}

int push(struct node *satck){
	if(isfull()){
		return -1;
	}else{
		top++;
		printf("Enter Name\n");
		getchar();
		int i=0;
		char ch;
		while((ch=getchar())!='\n')
			(obj).name[i++]=ch;
		printf("Enter Data\n");
		scanf("%d",&(obj).data);
	}
	return 0;
}

int pop(struct node* stack){
	if(isempty()){
		return -1;
		flag=1;
	}
	else{
		flag=0;
		int ret=(obj).data;
		top--;
		return ret;
	}

}

int peek(struct node* stack){
	if(isempty())
		return -1;
	else{
		printf("Name : %s\nData : %d\n\n",(obj).name,(obj).data);
		return 0;
	}
}

void main(){
	printf("Enter Size\n");
	scanf("%d",&size);
	struct node stack[size];

	char ch;

	do{
		printf("1:push\n");
		printf("2:pop\n");
		printf("3:peek\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1: 
				{
					int ret=push(stack);
					if (ret==-1)
						printf("stack overflow\n");
				}
				break;
			case 2: {
					int ret=pop(stack);
					if(flag==0)
						printf("%d is poped\n",ret);
				}
				break;
			case 3: {
					int ret=peek(stack);
					if(ret==-1)
						printf("Stack underflow\n");
				}
				break;
			default : printf("Enter valid choice\n");
		}

		printf("Do you want to continue\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
