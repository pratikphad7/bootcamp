#include<stdio.h>
#include<stdlib.h>

struct treeNode{
	int data;
	struct treeNode* left;
	struct treeNode* right;
};

void createNode(struct treeNode* root){
	printf("Do you want to add node[y/n]\n");
	char ch;
	scanf(" %c",&ch);
	
	if(ch=='y'){
		printf("Where you want to add node?[l/r]\n");
		scanf(" %c",&ch);
		
		struct treeNode* node=(struct treeNode*)malloc(sizeof(struct treeNode));
		printf("Enter data\n");
		scanf("%d",&node->data);
		node->left=NULL;
		node->right=NULL;
		
		if(ch=='l'){
			root->left=node;
			createNode(root->left);
			printf("Do you want to add node at right?[y/n]\n");
			scanf(" %c",&ch);
			if(ch=='y'){
				struct treeNode* node1=(struct treeNode*)malloc(sizeof(struct treeNode));
				printf("Enter data\n");
				scanf("%d",&node1->data);
				node1->left=NULL;
				node1->right=NULL;
				root->right=node1;
				createNode(root->right);
			}
		}else{
			root->right=node;
			createNode(root->right);
			printf("Do you want to add node at left?[y/n]\n");
			scanf(" %c",&ch);
			if(ch=='y'){
				struct treeNode* node1=(struct treeNode*)malloc(sizeof(struct treeNode));
				node1->left=NULL;
				node1->right=NULL;
				printf("Enter data\n");
				scanf("%d",&node1->data);
				root->left=node1;
				createNode(root->left);
			}
		}
	}else{
			return;
	}
}

void printPreOrder(struct treeNode* root){
	if(root==NULL){
		return;
	}
		printf("%d\t",root->data);
		printPreOrder(root->left);
		printPreOrder(root->right);
}
void printInOrder(struct treeNode* root){
	if(root==NULL){
		return;
	}
		printInOrder(root->left);
		printf("%d\t",root->data);
		printInOrder(root->right);
}

void printPostOrder(struct treeNode* root){
	if(root==NULL){
		return;
	}	
		printPostOrder(root->left);
		printPostOrder(root->right);
		printf("%d\t",root->data);
}

void main(){
	struct treeNode* node=(struct treeNode*)malloc(sizeof(struct treeNode));
	printf("Enter root data\n");
	scanf("%d",&node->data);
	node->left=NULL;
	node->right=NULL;

	createNode(node);
	printf("Preorder = ");
	printPreOrder(node);

	printf("\nInorder = ");
	printInOrder(node);

	printf("\npostorder = ");
	printPostOrder(node);
	printf("\n");
}
