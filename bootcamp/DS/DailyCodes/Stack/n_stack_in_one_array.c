//add 2 stack in one array

#include<stdio.h>

int n;
int top[n];
int size;
int choice;
int flag=0;

int push(int *stack){
	if(top2==top1+1)
		return -1;
	else{
		printf("Enter data\n");
		if(choice==1){
			top1++;
			scanf("%d",&stack[top1]);
		}else{
			top2--;
			scanf("%d",&stack[top2]);
		}
		return 0;
	}
}

int pop(int *stack){
	if(top1==-1||top2==size){
		return -1;
		flag=1;
	}
	else{
		int ret=0;
		if(choice==3){
			ret=stack[top1];
			top1--;
		}else{
			ret=stack[top2];
			top2++;
		}
		flag=0;
		return ret;
	}
}

int peek(int* stack){
	if(top1==-1||top2==size)
		return -1;
	else{
		if(choice==5)
			printf("data=%d\n",stack[top1]);
		else
			printf("data=%d\n",stack[top2]);
	}
	return 0;
}

void main(){
	printf("Enter size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter no of stack");
	scanf("%d",&n);
	char ch;
	do{
		printf("1:push1\n");
		printf("2:push2\n");
		printf("3:pop1\n");
		printf("4:pop1\n");
		printf("5:peek1\n");
		printf("6:peek2\n");

		printf("Enter choice\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				{
					int ret=push(arr);
					if(ret==-1)
						printf("stack overflow\n");
				}
			       break;
			case 2:
				{
					int ret=push(arr);
					if(ret==-1)
						printf("stack overflow\n");
				}
			       break;
			case 3:
				{
					int ret=pop(arr);
					if(flag==1)
						printf("stack underflow\n");
					else
						printf("%d is poped\n",ret);
				}
			       break;
			case 4:
				{
					int ret=pop(arr);
					if(flag==1)
						printf("stack underflow\n");
					else
						printf("%d is poped\n",ret);
				}
			       break;
			case 5:
				{
					int ret=peek(arr);
					if(ret==-1)
						printf("stack underflow\n");
				}
			       break;
			case 6:
				{
					int ret=peek(arr);
					if(ret==-1)
						printf("stack underflow\n");
				}
			       break;
			default :
			       printf("Enter valid choice\n");
		}

		printf("Do You want to continue\n");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	
}
