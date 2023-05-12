#include<stdio.h>
#include<stdlib.h>

struct tree{
	int data;
	struct tree* left;
	struct tree* right;
};

struct tree* createNode(int* pre,int* in,int start,int end,int pre_pt){

	if(start>end){
		return NULL;
	}
	int i;
	for(i=start;i<=end;i++){
		if(pre[pre_pt]==in[i]){
			break;
		}
	}

	struct tree* node=(struct tree*)malloc(sizeof(struct tree));
	node->data=in[i];
	printf("i=%d\n",i);

	node->left=createNode(pre,in,start,i-1,++pre_pt);
	node->right=createNode(pre,in,i+1,end,i+1);

	return node;
}

void InOrder(struct tree* root){
	if(root==NULL){
		return;
	}

	InOrder(root->left);
	printf("%d\t",root->data);
	InOrder(root->right);
}

void postOrder(struct tree* root){
	if(root==NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	printf("%d\t",root->data);
}

void main(){
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);
	int priOrder[size];
	int inOrder[size];
	
	printf("Enter priOrder\n");
	for(int i=0;i<size;i++){
		scanf("%d",&priOrder[i]);
	}
	
	printf("Enter inOrder\n");
	for(int i=0;i<size;i++){
		scanf("%d",&inOrder[i]);
	}
	

	/* adding root node*/
	int i;
	for(i=0;i<size;i++){
		if(priOrder[0]==inOrder[i])
			break;
	}

	//creating node
	
	struct tree* node=(struct tree*)malloc(sizeof(struct tree));
	node->data=inOrder[i];

	node->left=createNode(priOrder,inOrder,0,i-1,1);
	node->right=createNode(priOrder,inOrder,i+1,size-1,i+1);

	//printing node
	printf("InOrder= ");
	InOrder(node);
	printf("\n");
	
	printf("postOrder= ");
	postOrder(node);
	printf("\n");
}
