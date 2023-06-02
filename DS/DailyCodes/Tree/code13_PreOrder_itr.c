#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct tree{
	int data;
	struct tree* left;
	struct tree* right;
};

struct tree* createNode(int level){
	struct tree* node=(struct tree*)malloc(sizeof(struct tree));
	printf("Enter data at %d level\n",level);
	scanf("%d",&node->data);
		
	printf("Do you want to add left node at level %d\n",level);
	getchar();
	char ch;
	scanf("%c",&ch);

	if(ch=='y'){
		node->left=createNode(1+level);
	}else{
		node->left=NULL;
	}
		
	printf("Do you want to add right node at level %d\n",level);
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		node->right=createNode(1+level);
	}else{
		node->right=NULL;
	}

	return node;
}

void inOrder(struct tree* root){
	if(root==NULL){
		return;
	}

	inOrder(root->left);
	printf("%d\t",root->data);
	inOrder(root->right);
}

void postOrder(struct tree* root){
	if(root==NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	printf("%d\t",root->data);
}

struct Stack{
	struct tree* btNode;
	struct Stack* next;
};

struct Stack* Top=NULL;
bool isempty(){
	if(Top==NULL){
		return true;
	}else{
		return false;
	}
}

void push(struct tree* root){
	struct Stack* node=(struct Stack*)malloc(sizeof(struct Stack));
	node->btNode=root;
	node->next=Top;

	Top=node;


}

struct tree* pop(){
	struct tree* node=Top->btNode;
	struct Stack* temp=Top;
	Top=Top->next;
	free(temp);
	return node;
}

void preOrder(struct tree* root){	
	push(root);
	struct tree* temp=root;
	while(!isempty()){
		if(temp!=NULL){
			printf("%d\n",temp->data);
		}

		if(temp!=NULL){
			push(temp->left);
			temp=temp->left;
		}else{
			temp=Top->btNode->right;
			pop();
			if(temp!=NULL){
				push(temp);
				temp=temp->left;
			}else{
				temp=Top->btNode->right;
				pop();
			}
		}
		
	}
}



void main(){
	printf("Do you Want to add root node\n");
	char ch;
	scanf("%c",&ch);

	if(ch=='y'){
		struct tree* root=(struct tree*)malloc(sizeof(struct tree));
		printf("Enter data\n");
		scanf("%d",&root->data);

		printf("Do you want to add left node in root\n");
		getchar();
		scanf("%c",&ch);

		if(ch=='y'){
			root->left=createNode(1);
		}else{
			root->left=NULL;
		}
		
		printf("Do you want to add right node in root\n");
		getchar();
		scanf("%c",&ch);

		if(ch=='y'){
			root->right=createNode(1);
		}else{
			root->right=NULL;
		}
	
	

		printf("Inorder=\t");
		inOrder(root);
		printf("\npreOrder=\t");
		preOrder(root);
		printf("\npostorder=\t");
		postOrder(root);
		printf("\n");
	}
}
