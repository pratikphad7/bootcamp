#include<stdio.h>
 
int rotateArray(int* arr,int N,int no){
	if(no==0)
		return 0;
	if(no>N)
		no=
	int arr1[no];
	int j=0;
	for(int i=N-no;i<N;i++){
		arr1[j]=arr[i];
		j++;
	}

	j=0;
	for(int i=0;i<N;i++){
		int temp=arr[i];
		arr[i]=arr1[j];
		arr1[j]=temp;
		j++;
		if(j==no)
			j=0;
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
