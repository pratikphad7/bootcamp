//recursion in string

#include<stdio.h>

int search(char *arr,int size,char ch){
	if(size<0)
		return -1;

	if(arr[size-1]==ch)
		return size-1;
	return search(arr,size-1,ch);
}

void main(){
	int size;
	printf("Enter size\n");
	scanf("%d",&size);

	char arr[size];

	for(int i=0;i<size;i++){
		printf("enter character\n");
		getchar();
		scanf("%c",&arr[i]);
	}

	printf("Enter character to search\n");
	getchar();
	char ch;
	scanf("%c",&ch);

	int i=search(arr,size,ch);

	printf("index is %d\n",i);
}
