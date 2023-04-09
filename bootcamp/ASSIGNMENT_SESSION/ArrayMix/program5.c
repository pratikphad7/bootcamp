#include<stdio.h>
//1 2 3 4 5
//4 5 1 2 3
void rotateArray(int* arr,int N,int no){
	for(int i=0;i<no;i++){
		int temp=arr[N-1];
		for(int j=N-1;j>0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=temp;	
	}
}

int main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	if(size<2){
		printf("we can't rotate\n");
		return 0;
	}
	
	printf("Enter element\n");
	for(int i=0;i<size;i++)
		scanf("%d",arr+i);
	
	printf("Enter No to rotate\n");
	int no;
	scanf("%d",&no);
	rotateArray(arr,size,no);

	for(int i=0;i<size;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
