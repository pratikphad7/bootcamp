#include<stdio.h>

void reverseArray(int* arr,int N,int start,int End){
	while(start<End){
		int temp=arr[start];
		arr[start]=arr[End];
		arr[End]=temp;
		start++;
		End--;
	}
}

int main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	if(size<2){
		printf("we can't reverse\n");
		return 0;
	}

	printf("Enter Start&End Element\n");
	int start;
	int end;
	scanf("%d",&start);
	scanf("%d",&end);

	if(start<0||start>size||End<0||End>size){
		printf("Invalid");
		return 1;
	}
	
	printf("Enter element\n");
	for(int i=0;i<size;i++)
		scanf("%d",arr+i);

	reverseArray(arr,size,start,end);

	for(int i=0;i<size;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
