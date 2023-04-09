//concat linked list


#include<stdio.h>
#include<stdlib.h>

typedef struct concat{
	int data;
	struct concat* next;
}cn;

cn* head1=NULL;
cn* head2=NULL;

cn* createnode(){
	cn* node=(cn*)malloc(sizeof(cn));
	printf("Enter data\n");
	scanf("%d",&node->data);

	node->next=NULL;

	return node;
}

int count(cn* head){
	int cnt=0;
	while(head!=NULL){
		head=head->next;
		cnt++;
	}
	return cnt;
}

void adddata(cn* head,int flag){
	cn* node=createnode();
	if(flag==0){
		head=head1;
	}else
		head=head2;
	
	if(head==NULL)
		head=node;
	else{
		cn* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=node;
	}
	if(flag==0)
		head1=head;
	else
		head2=head;
}

int concat(int num){
	cn* head;
	cn* head3;
	if(num==1){
		head=head1;
		head3=head2;
	}else{
		head=head2;
		head3=head1;
	}

	if(head3==NULL){
		printf("no nodes to concat\n");
		return -1;
	}else{
		printf("How many node concat\n");
		int no;
		scanf("%d",&no);	
		int cnt=count(head3);
		if(no<1||no>cnt)
			return -1;	
		
		if(no>cnt){
			printf("invalid no\n");
			return -1;
		}
		cn* temp=head1;
		cn* temp1=head3;
		
			
		while(cnt-no){
			temp1=temp1->next;
			cnt--;
		}

		if(head!=NULL){
			temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=temp1;
		}
		else if(head==NULL){
			if(num==1)
				head1=temp1;
			else
				head2=temp1;
		}
		return 0;
	}
}




void printdata(cn* head){
	if(head==NULL){
		printf("Empty\n");
	}else{
		cn* temp=head;
		while(temp->next!=NULL){
			printf("|%d|-->",temp->data);
			temp=temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}
int main(){
	printf("no of nodes add in list 1\n");
	int no;
	scanf("%d",&no);
	for(int i=0;i<no;i++)
		adddata(head1,0);

	printf("no of nodes add in list 2\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++)
		adddata(head2,1);
	printdata(head1);
	printdata(head2);

	printf("which list concat to other[1/2]\n");
	int num;
	scanf("%d",&num);

	concat(num);
	printdata(head1);
	printdata(head2);	
}





