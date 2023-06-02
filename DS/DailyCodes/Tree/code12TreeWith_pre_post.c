#include<stdio.h>
#include<stdlib.h>

struct Tree{
	int data;
	struct Tree* left;
	struct Tree* right;
};

struct Tree* createNode(int* preOrder,int* postOrder,int preStart,int preEnd,int postStart,int postEnd){
	if(preStart>preEnd){
		return NULL;
	}
	struct Tree* Node=(struct Tree*)malloc(sizeof(struct Tree));
	Node->data=preOrder[preStart];

	int index=preStart;
	
	for(index=preStart;index<=preEnd;index++){
		if(postOrder[postStart-1]==preOrder[index]){
			break;
		}
	}
	if(preStart==preEnd){
		preEnd--;
	}
	Node->left=createNode(preOrder,postOrder,preStart+1,index-1,index-2,postEnd);
	Node->right=createNode(preOrder,postOrder,index,preEnd,postStart-1,index-1);

	return Node;
	
}

void inOrder(struct Tree* root){
	if(root==NULL){
		return;
	}

	inOrder(root->left);
	printf("%d\t",root->data);
	inOrder(root->right);
}

void main(){
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);

	//preOrder array
	int preOrder[size];

	printf("Enter priOrder array\n");
	for(int i=0;i<size;i++){
		scanf("%d",preOrder+i);
	}

	//postOrder array
	
	int postOrder[size];
	printf("Enter postOrder array\n");
	for(int i=0;i<size;i++){
		scanf("%d",postOrder+i);
	}

	struct Tree* root=createNode(preOrder,postOrder,0,size-1,size-1,0);
	printf("Inorder =\t");
	inOrder(root);
	printf("\n");
}
