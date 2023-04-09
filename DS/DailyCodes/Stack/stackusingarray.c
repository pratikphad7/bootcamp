#include<stdio.h>
int size;
int top=-1;

int push(int *stack){
	if(top>=size-1){
		printf("stack overflow\n");
		return -1;
	}else{
		top++;
		printf("Enter Data\n");
		scanf("%d",stack+top);
	}
	return 0;
}

int pop(int* stack){
	if(top==-1){
		printf("Stack underflow\n");
		return -1;
	}else{
		int ret=*(stack+top);
		top--;
	return ret;
	}
}

int peek(int *stack){
	printf("Enter which position data you want\n");
	int pos;
	scanf("%d",&pos);

	if(pos<=-1||pos>top){
		printf("Invalid operation\n");
		return -1;
	}else{
		printf("data : %d\n",*(stack+pos));
		return 0;
	}
}

void main(){
	printf("Enter Stack Size\n");
	scanf("%d",&size);
	int stack[size];
	
	char ch;

	do{
		printf("1:push()\n");
		printf("2:poop()\n");
		printf("3:peek()\n");

		printf("Enter Your choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1 :push(stack);
			        break;
			case 2 :{
					int ret=pop(stack);
					if(top>-1){
						printf("%d is poped\n",ret);
					}
				}
				break;
			case 3 :peek(stack);
				break;
			default : printf("Enter Valid Choice\n");
		}
		
		printf("Do you want to contineu[y/n]\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}


