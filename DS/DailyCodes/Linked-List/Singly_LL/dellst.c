//Delete first node

#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{
	char mv_name[20];
	int tic;
	float imdb;
	struct Movie* next;
}mv;

mv *head=NULL;

mv* createdata(){
	mv* node=(mv*)malloc(sizeof(mv));
	printf("Enter Movie Name\n");
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*node).mv_name[i++]=ch;
	}

	printf("Enter No OF Tickets\n");
	scanf("%d",&node->tic);

	printf("Enter IMDB Rate Of Movie\n");
	scanf("%f",&node->imdb);

	node->next=NULL;

	return(node);
}

int count(){
	mv* temp=head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return(count);
}

void getdata(){
	mv *node=createdata();

	if(head==NULL){
		head=node;
	}else{

		mv* temp=head;
	
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
	
}

void addatfirst(){
	mv* node=createdata();
	if(head==NULL){
		head=node;
	}else{
		mv* temp=head;
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
		mv* node=createdata();
		if(pos==1){
			if(head==NULL){
				head=node;
			}else{
				mv* temp=head;
				head=node;
				node->next=temp;
			}
		}else if(pos==cnt+1){
			mv* temp=head;
			while(temp!=NULL){
				temp=temp->next;
			}
			temp->next=node;
		}else{
			mv* temp=head;
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
	mv* node=createdata();
	mv* temp=head;
	while(temp!=NULL){
		temp=temp->next;
	}
	temp->next=node;
}

void deletefirst(){
	if(head!=NULL){
		mv* temp=head;
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
			 mv* temp=head;
			 while(cnt-1){
				 temp=temp->next;
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
			 


void printdata(){
	mv* temp=head;
	while(temp!=NULL){
		printf("|%s : %d : %f|",temp->mv_name,temp->tic,temp->imdb);
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

		printf("1 : getdata()\n");
		printf("2 : addatfirst()\n");
		printf("3 : addatpos()\n");
		printf("4 : addatlast()\n");
		printf("5 : deletefirst()\n");
		printf("6 : deletelast()\n");
		printf("7 : printdata()\n");

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
			case 7 : printdata();
				 break;
			default : printf("Enter valid Choice\n");

			}
		getchar();
		printf("Do You Want to Continue?[y/n]\n");
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
			

		

	
	


		


