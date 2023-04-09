//recursion in string

#include<stdio.h>

int search(char *arr,int size,char ch){
	while(size>=0){
		if(arr[size]==ch)
			return size;
		else
			size--;
	}
	return -1;
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
