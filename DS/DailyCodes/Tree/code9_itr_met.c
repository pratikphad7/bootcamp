#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct btTree{
	int data;
	struct btTree* left;
	struct btTree* right;
};

struct stack{
	struct btTree* data;
	struct stack* next;
};

struct stack* top=NULL;
void push(struct btTree* root){
	struct stack* node=malloc(sizeof(struct stack));
	node->data=root;
	node->next=top;
	top=node;
}

struct btTree* pop(){
	struct btTree* ret=top->data;
	struct stack* temp=top;
	top=top->next;
	free(temp);
	return ret;
}

bool isEmpty(){
	if(top==NULL){
		return true;
	}else{
		return false;
	}
}

void inOrder(struct btTree* root){
	if(root==NULL){
		return;
	}
		
	struct btTree* temp=root;
	while(!isEmpty() || temp!=NULL){
		if(temp!=NULL){
			push(temp);
			temp=temp->left;
		}else{
			struct btTree* ret=pop();
			printf(" %d ",ret->data);
			temp=ret->right;
		}
	}
}

struct btTree* createNode(int level){
	struct btTree* node=(struct btTree*)malloc(sizeof(struct btTree));
	
	printf("Enter data at %d leval\n",level);
	scanf("%d",&node->data);
	
	//adding left node
	printf("Do you want to add left node at %d leval\n",level);
	char ch;
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		node->left=createNode(level+1);
	}else{
		node->left=NULL;
	}

	//adding right node
	printf("Do you want to add right node at %d level\n",level);
	scanf(" %c",&ch);

	if(ch=='y'){
		node->right=createNode(level+1);
	}else{
		node->right=NULL;
	}
}

void preOrder(struct btTree* root){
	if(root==NULL){
		return;
	}

	printf(" %d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void main(){
	struct btTree* root=(struct btTree*)malloc(sizeof(struct btTree));
	printf("Enter data in root node\n");
	scanf("%d",&root->data);

	//adding left node in root
	
	printf("Do you want to add left node in root node[y/n]\n");
	char ch;
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		root->left=createNode(1);
	}else{
		root->right=NULL;
	}

	//adding right node in root
	
	printf("Do you want to add right node in root node[y/n]\n");
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		root->right=createNode(1);
	}else{
		root->right=NULL;
	}

	inOrder(root);
	//printing tree
	
	printf("\npreorder=");
	preOrder(root);
	printf("\ninorder=");
	inOrder(root);
	printf("\n");

}
