//Real Time Example

#include<stdio.h>
#include<stdlib.h>

typedef struct city{
	char ct_name[20];
	int population;
	float area;
	struct city* next;
}ct;

ct *head=NULL;

ct* createdata(){
	ct* node=(ct*)malloc(sizeof(ct));
	printf("Enter city Name\n");
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*node).ct_name[i++]=ch;
	}

	printf("Enter population of city\n");
	scanf("%d",&node->population);

	printf("Enter area of city\n");
	scanf("%f",&node->area);

	node->next=NULL;

	return(node);
}

int count(){
	ct* temp=head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return(count);
}

void getdata(){
	ct *node=createdata();

	if(head==NULL){
		head=node;
	}else{

		ct* temp=head;
	
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
	
}

void addatfirst(){
	ct* node=createdata();
	if(head==NULL){
		head=node;
	}else{
		ct* temp=head;
		head=node;
		node->next=temp;
	}
}

int addatpos(){
	int cnt=count();
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);

	if(pos<=0||pos>=cnt+2){
		printf("Enter valid Position\n");
		return -1;
	}else {
		ct* node=createdata();
		if(pos==1){
			if(head==NULL){
				head=node;
			}else{
				ct* temp=head;
				head=node;
				node->next=temp;
			}
		}else if(pos==cnt+1){
			ct* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=node;
		}else{
			ct* temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			node->next=temp->next;
			temp->next=node;
		}
	}
}

void addatlast(){
	ct* node=createdata();
	ct* temp=head;
	while(temp!=NULL){
		temp=temp->next;
	}
	temp->next=node;
}

void deletefirst(){
	int cnt=count();
	if(cnt==1){
		free(head);
		head=NULL;
	}

	else if(head!=NULL && cnt!=1){
		ct* temp=head;
		head=temp->next;
		free(temp);
	}else{
		printf("List is empty\n");
	}

}

void deletelast(){
	if(head==NULL)
		printf("List is empty\n");
	else { 
	 	int cnt=count();
	 	if(cnt>1){
			 ct* temp=head;
			 while(cnt-1){
				 temp=temp->next;
				 cnt--;
		 	}
		 	free(temp->next);
		 	temp->next=NULL;
	 	}
		else if(cnt==1){
			free(head);
			head=NULL;
		}
	}
}

int deletepos(){
	int pos;
	printf("Which position want to delete\n");
	scanf("%d",&pos);

	int cnt=count();
	if(pos<1||pos>cnt){
		printf("Enter valid position\n");
		return -1;
	}else{
		if(cnt==1&&pos==1){
			free(head);
			head=NULL;
		}else if(cnt>1&&pos==1){
			ct* temp=head;
			head=temp->next;
			free(temp);
		}else if(cnt>1&&pos>1){
			ct* temp=head;
			ct* temp1=head;
			while(pos-1){
				pos--;
				temp=temp->next;
				temp1=temp->next;
			}
			temp->next=temp->next->next;
			free(temp1->next);
		}else if(pos==cnt){
			ct* temp=head;
			while(pos-1){
				temp=temp->next;
			}
			free(temp->next);
			temp->next=NULL;
		}
	}
}

void printdata(){
	if(head==NULL){
		printf("No Data Available\n");
	}else{
		ct* temp=head;
		while(temp!=NULL){
			printf("|%s : %d : %f|",temp->ct_name,temp->population,temp->area);
			temp=temp->next;

			if(temp!=NULL)
				printf("-->");
			else
				printf("\n");
		}
	}
}

void main(){
	
	char ch;
	

	do{

		printf("1 : getdata()\t 5 : deletefirst()\n");
		printf("2 : addatfirst() 6 : deletelast()\n");
		printf("3 : addatpos()\t 7 : deletepos\n");
		printf("4 : addatlast()\t 8 : printdata\n");

		int no;
		printf("Enter Choice\n");
		scanf("%d",&no);

		switch(no){

			case 1 : getdata();
				 break;
			case 2 : addatfirst();
				 break;
			case 3 : addatpos();
				 break;
			case 4 : addatlast();
				 break;
			case 5 : deletefirst();
				 break;
			case 6 : deletelast();
				 break;
			case 7 : deletepos();
				 break;
			case 8 : printdata();
				 break;
			default : printf("Enter valid Choice\n");

			}
		getchar();
		printf("Do You Want to Continue?[y/n]\n");
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
			

		

	
	


		


