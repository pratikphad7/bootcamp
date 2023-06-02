#include<stdio.h>
#include<stdlib.h>

struct tree{
	int data;
	struct tree* left;
	struct tree* right;
};

struct tree* createNode(int* postOrder, int* inOrder ,int inStart, int inEnd, int postStart, int postEnd){
		if(inStart>inEnd){
			return NULL;
		}

		struct tree* Node=(struct tree*)malloc(sizeof(struct tree));
		Node->data=postOrder[postStart];

		int index=inEnd;
		for(index=inEnd;index>=inStart;index--){
			if(inOrder[index]==postOrder[postStart]){
				break;
			}
		}

		for(index=inStart;index<=inEnd;index++){
			if(inOrder[index]==postOrder[postStart]){
				break;
			}
			
		}
		
		Node->left=createNode(postOrder,inOrder,inStart,index-1,index-1,index);
		Node->right=createNode(postOrder,inOrder,index+1,inEnd,postStart-1,postEnd);

		return Node;
}



void InOrder(struct tree* root){
	if(root==NULL){
		return;
	}

	InOrder(root->left);
	printf("%d\t",root->data);
	InOrder(root->right);
}

void preOrder(struct tree* root){
	if(root==NULL){
		return;
	}

	printf("%d\t",root->data);
	preOrder(root->left);
	//printf("%p\n",root->right);
	preOrder(root->right);
}

void main(){
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);
	int postOrder[size];
	int inOrder[size];
	
	printf("Enter postOrder\n");
	for(int i=0;i<size;i++){
		scanf("%d",&postOrder[i]);
	}
	
	printf("Enter inOrder\n");
	for(int i=0;i<size;i++){
		scanf("%d",&inOrder[i]);
	}
	

	

	struct tree* node=createNode(postOrder,inOrder,0,size-1,size-1,0);


	//printing node
	printf("InOrder= ");
	InOrder(node);
	printf("\n");
	
	printf("preOrder= ");
	preOrder(node);
	printf("\n");
}
