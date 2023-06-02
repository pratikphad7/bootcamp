#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct btTree{
	int data;
	struct btTree* left;
	struct btTree* right;
};

struct btTree* createNode(int level){
	struct btTree* node=(struct btTree*)malloc(sizeof(struct btTree));
	printf("Enter %d level data\n",++level);
	scanf("%d",&node->data);
	
	printf("Do you want to add left node at %d level\n",level);
	char ch;
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		node->left=createNode(level);
	}else{
		node->left=NULL;
	}

	printf("Do you want to add right node at %d level\n",level);
	getchar();
	scanf("%c",&ch);
	
	
	if(ch=='y'){
		node->right=createNode(level);
	}else{
		node->right=NULL;
	}

	return node;
}

void Inorder(struct btTree* root){

	if(root==NULL){
		return;
	}

	Inorder(root->left);
	printf("%d\t",root->data);
	Inorder(root->right);
}
struct Queue{
	struct btTree* btNode;
	struct Queue* next;
};

struct Queue* front=NULL;
struct Queue* rear=NULL;

bool isempty(){
	if(front==NULL&&rear==NULL){
		return true;
	}else{
		return false;
	}
}

void enQueue(struct btTree* root){
	struct Queue* node=(struct Queue*)malloc(sizeof(struct Queue));
	node->btNode=root;
	node->next=NULL;

	if(isempty()){
		rear=node;
		front=node;
	}else{
		rear->next=node;
		rear=node;
	}
}

void rightView(struct btTree* root){
	printf("%d\t",root->data);
}

struct btTree* deQueue(){
	struct btTree* ret=front->btNode;
	if(front==rear){
		free(front);
		front=NULL;
		rear=NULL;
	}else{
		struct Queue* temp=front;
		front=front->next;
		free(temp);
	}

	if(front!=NULL&&ret==NULL){
		rightView(front->btNode);
	}
	return ret;
}


void levelOrder(struct btTree* root){
	if(root==NULL){
		return;
	}

	enQueue(NULL);
	enQueue(root);

	while(!isempty()){
		
		struct btTree* ret=deQueue();
		if(ret==NULL&&isempty()){
			break;
		}

		if(ret==NULL&&!isempty()){
			enQueue(NULL);
		}else{
			if(ret->left!=NULL){
				
				enQueue(ret->left);
		
			}
			if(ret->right!=NULL){
				enQueue(ret->right);
			}
		}
	}

}

void main(){
	struct btTree* root=(struct btTree*)malloc(sizeof(struct btTree));
	printf("Enter root data\n");
	scanf("%d",&root->data);

	printf("Do you want to add left node\n");
	char ch;
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		root->left=createNode(0);
	}else{
		root->left=NULL;
	}

	printf("Do you want to add right node\n");
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		root->right=createNode(0);
	}else{
		root->right=NULL;
	}

	printf("Inorder=\t");
	Inorder(root);
	printf("\nleftView\t");
	levelOrder(root);
	printf("\n");

}
