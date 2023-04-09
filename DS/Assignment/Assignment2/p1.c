#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	char str[20];
	struct node* next;
}nd;

nd* head=NULL;

nd* createnode(){
	nd* node=(nd*)malloc(sizeof(nd));
	printf("enter Data\n");
	scanf("%d",&node->data);
	node->next=NULL;
	return node;
}

nd* createchar(){
	nd* node=(nd*)malloc(sizeof(nd));
	printf("Enter String\n");
	int i=0;
	char str;
	getchar();
	while((str=getchar())!='\n'){
		(*node).str[i++]=str;
	}
	node->next=NULL;
	

	return node;
}

int addnode(){
	printf("What you want to add string or data[s/d]\n");
	char ch;
	getchar();
	scanf("%c",&ch);
	
	nd* node = NULL;

	if(ch=='d'){
		node = createnode();
	}else{
		node=createchar();
		//getchar();
	}
	
	if(head==NULL){
		head=node;
	}else{
		nd* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
	if(ch!='d'){
		return 0;
	}
}

void firstocc(){
	if(head==NULL)
		printf("Data is Not Available\n");
	else{
		printf("Enter Number\n");
		int num;
		scanf("%d",&num);

		nd* temp=head;
		int count=0;
		int data=0;
		while(temp!=NULL){
			count++;
			if(temp->data==num){
				data=count;
				break;
			}
			temp=temp->next;
		}
		if(data>0)
			printf("The First occurance of given no is at %d\n",count);
		else
			printf("This number is not available in this list");
		}
}

void secondlstocc(){
	if(head==NULL)
		printf("Data is not avilable");
	else{
		nd* temp=head;
		printf("Enter Number\n");
		int num;
		scanf("%d",&num);

		int data1=0;
		int data2=0;
		int cnt=1;

		while(temp!=NULL){
			if(temp->data==num){
				data2=data1;
				data1=cnt;
			}
			temp=temp->next;
			cnt++;
		}

		if(data1==0&&data2==0)
			printf("Given No is not present in this list\n");
		else if(data2==0&&data1>0)
			printf("Given no is occures only once in this list at %d\n",data1);
		else
			printf("Given no second last occures at %d\n",data2);

	}
}

void no_t_occ(){
	if(head==NULL)
		printf("Data not avilable\n");
	else{
		nd* temp=head;
		printf("Enter Number\n");
		int num;
		scanf("%d",&num);
		int count=0;
		while(temp!=NULL){
			if(temp->data==num)
				count++;
			temp=temp->next;
		}
		if(count>1)
			printf("Given no occurs in this list %d times\n",count);
		else if(count==1)
			printf("Given no occur only once in this list\n");
		else
			printf("this no not present in this list\n");
	}
}

void sumnum(){
	if(head==NULL)
		printf("Data avilable\n");
	else{
		nd* temp=head;
		int data1=0;
		while(temp!=NULL){
			int data=temp->data;
			while(data>0){
				data1=data1+data%10;
				data=data/10;
			}
			if(temp->next!=NULL)
				printf("|%d|->",data1);
			else
				printf("|%d|\n",data1);
			temp=temp->next;
			data1=0;
		}
	}
}

void pelindrome(){
	if(head==NULL)
		printf("Data not Avilable\n");
	else{
		int x=1;
		nd* temp=head;
		while(temp!=NULL){
			int cnt=1;
			int data=temp->data;
			int* pal=(int*)calloc(0,sizeof(int));
			int* ptr;
			int i=0;
			while(data>0){
				pal=(int*)realloc(pal,cnt);
				pal[i]=data%10;
				data=data/10;
				ptr=&pal[i];
				i++;
				cnt++;
			}
			
			i=0;
			while(cnt/2){
				if(pal[i]==*ptr){
					i++;
					ptr--;
				}else{
					break;
				}
			}
			if(i>=(cnt/2)){
				printf("%dth no is pelindrome\n",x);
			}
			x++;

			free(pal);
			temp=temp->next;
		}
	}
	
}

void stringcnt(){
	nd* node=head;
	printf("Enter Number\n");
	int num;
	scanf("%d",&num);
	while(node!=NULL){
		int i=0;
		while((*node).str[i]!='\0'){
			(*node).str[i++];
				
		}

		if(num==i){
			printf("%s\n",node->str);
		}
		node=node->next;
	}
}

void revstring(){
	if(head==NULL){
		printf("No data available\n");
	}else {
		nd* temp=head;
		while(temp!=NULL){

			int i=0;
			while((*temp).str[i]!='\0'){
				i++;
			}
			
			int j=i/2;
			i--;
			for(int k=0;k<j;k++){
				char ch=(*temp).str[i];
				(*temp).str[i]=(*temp).str[k];
				(*temp).str[k]=ch;
				i--;
			}
			temp=temp->next;
			
		}
	}
}

void freefirst(){
	if(head==NULL){
		printf("no data avilable\n");
	}else if(head->next==NULL){
		free(head);
		head=NULL;
	}else{
		nd* temp=head;
		head=head->next;
		free(temp);
	}
}

void freelast(){
	if(head==NULL){
		printf("no data avilable\n");
	}else if (head->next==NULL){
		free(head);
		head=NULL;
	}else{
		nd* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void strfree(){
	nd* temp=head;
	printf("Enter Number\n");
	int strln;
	scanf("%d",&strln);
	int cnt=1;
	while(cnt==1&&head!=NULL){
		if(cnt==1){
				int i=1;
			while((*head).str[i]!='\0')
				i++;
			if(i!=strln){
				
				freefirst();
				cnt=1;
			}else
				cnt++;
		}
		
	}

	while(temp->next!=NULL){
		if(temp->next->next==NULL){
			int i=1;
			while((*temp->next).str[i]!='\0')
				i++;
			if(i!=strln)
				freelast();
		}else{
			int i=0;
			while((*temp->next).str[i]!='\0')
				i++;
			if(i!=strln){
				nd* temp1=temp->next;
			 	temp=temp->next->next;
				free(temp1);
			}
		}
		temp=temp->next;
		
	}
	if(temp->next->next==NULL){
		int i=1;
		while((*temp->next).str[i]!='\0')
			i++;
		if(i!=strln)
			freelast();
	}
}
			
void printdata(){
	if(head==NULL){
		printf("No Data Avilable\n");
	}else{
		nd* temp=head;
		while(temp->next!=NULL){
			printf("|%d:%s|->",temp->data,temp->str);
			
			temp=temp->next;
		}
		printf("|%d:%s|\n",temp->data,temp->str);
	}
}

void main(){
	char ch;

	do{
		printf("\n1 : addnode()\n");
		printf("2 : firstocc()\n");
		printf("3 : printdata()\n");
		printf("4 : secondlstocc()\n");
		printf("5 : no_t_occ()\n");
		printf("6 : sumnum()\n");
		printf("7 : pelindrome()\n");
		printf("8 : stringcnt()\n");
		printf("9 : revstring()\n");
		printf("10: strfree()\n");

		printf("Enter choice\n");
		int choice;
		scanf("%d",&choice);
		int i=1;
		switch(choice){
			case 1:i = addnode();
				break;
			case 2: firstocc();
				break;
			case 3: printdata();
				break;
			case 4: secondlstocc();
				break;
			case 5: no_t_occ();
				break;
			case 6: sumnum();
				break;
			case 7: pelindrome();
				break;
			case 8: stringcnt();
				break;
			case 9: revstring();
				break;
			case 10: strfree();
				 break;
			default : printf("Enter valid choice\n");
		}

		printf("\nDo you want to continue?[y/n]\n");
		if(i==0){
		
		}else{
			getchar();
		}
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
