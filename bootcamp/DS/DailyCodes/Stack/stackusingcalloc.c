#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char name[10];
	int data;
}mv;


int size;
int top=-1;

int push(mv* stack){
	if(top>=size-1){
		printf("Stack overflow\n");
		return -1;
	}else{
		top++;
		printf("Enter name\n");
		char ch;
		int i=0;
		getchar();
		while((ch=getchar())!='\n')
			(stack[top]).name[i++]=ch;

		printf("Enter data\n");
		scanf("%d",&(stack[top]).data);
		return 0;
	}
}
		
int peek(mv* stack){
	if(top==-1){
		printf("Stack is underflow\n");
		return -1;
	}else{
		printf("name: %s\n data: %d\n",(stack[top]).name,(stack[top]).data);

		return 0;
	}
}

int pop(mv* stack){
	if(top==-1){
		printf("Underflow\n");
		return -1;
	}else{
		
		int ret=top;
		
		top--;
		return ret;
	}
}
		

void main(){

	printf("Enter size\n");
	scanf("%d",&size);

	mv* stack=(mv*)calloc(size,sizeof(mv));
	char ch;

	do{
		printf("1:push()\n");
		printf("2:pop()\n");
		printf("3:peek()\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);

		switch(choice){
			case 1 :push(stack);
				break;
			case 2 :{
					int ret=pop(stack);
					if(top!=-1){
						printf("|%d : %s|is poped\n",(stack[ret]).data,(stack[ret]).name);
					
					}
				}
				break;
			case 3 :peek(stack);
				break;
			default :printf("Enter valid choice\n");
		}

		printf("Do you want to contineu[y/n]\n");
		getchar();
		scanf("%c",&ch);

	}while(ch=='y'||ch=='Y');
}

	
	

