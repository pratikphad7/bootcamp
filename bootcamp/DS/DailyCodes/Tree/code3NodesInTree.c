#include<stdio.h>
#include<stdlib.h>

struct tree{
	int data;
	struct tree* left;
	struct tree* right;
};

struct tree* createNode(int level){
	printf("in level %d\n",++level);

	struct tree* newNode=(struct tree*)malloc(sizeof(struct tree));
	printf("Enter data\n");
	scanf("%d",&newNode->data);
	
	//to add left node 
	char ch;
	getchar();
	printf("Do you want to add left node on %d level\n",level);
	scanf("%c",&ch);

	if(ch=='y'){
		newNode->left=createNode(level);
	}else{
		newNode->left=NULL;
	}

	//to add right node
	getchar();
	printf("Do you want to add right node in %d level\n",level);
	scanf("%c",&ch);
	if(ch=='y'){
		newNode->right=createNode(level);
	}else{
		newNode->right=NULL;
	}
	return newNode;
}

void preOrder(struct tree* root){
	if(root==NULL){
		return;
	}

	printf("%d\t",root->data);
	preOrder(root->left);
	preOrder(root->right);
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

int noOfNode(struct tree* root){
	if(root==NULL){
		return 0;
	}

	int leftSubTree=noOfNode(root->left);
	int rightSubTree=noOfNode(root->right);

	return leftSubTree+rightSubTree+1;
}


void main(){
	struct tree *root=(struct tree*)malloc(sizeof(struct tree));
	
	printf("Enter root data\n");
	scanf("%d",&root->data);
	getchar();
	
	//to add left node in root node
	printf("Do you want to add left node in root?[y/n]\n");
	char ch;
	scanf("%c",&ch);
	if(ch=='y'){
		root->left=createNode(0);
	}else{
		root->left=NULL;
	}

	
	//to add right node in root node
	printf("Do you want to add right node in root?[y/n]\n");
	getchar();
	scanf("%c",&ch);

	if(ch=='y'){
		root->right=createNode(0);
	}else{
		root->right=NULL;
	}
	
	do{
		printf("1:preOrder\n");
		printf("2:inOrder\n");
		printf("3:postOrder\n");

		int choice;
		printf("Enter choice\n");
		scanf("%d",&choice);

		switch(choice){
			case 1 :{
					printf("preOrder=\t");
					preOrder(root);
					printf("\n");
				}
				break;

			case 2 :{	
					printf("\ninOrder=\t");
					inOrder(root);
					printf("\n");
				}
				break;

			case 3 :{
					printf("\npostOrder=\t");
					postOrder(root);
					printf("\n");
				}
				break;
		}
		getchar();
		printf("Do you want to continue?[y/n]\n");	
		scanf("%c",&ch);
	}while(ch=='y');

	int no=noOfNode(root);

	printf("sum of tree data = %d\n",no);

}
