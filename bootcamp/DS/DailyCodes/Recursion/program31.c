#include<stdio.h>
#include<stdbool.h>

bool cvz(int* arr,int size){
	if(arr[size]<arr[size-1])
		return false;
	if(size-1==0)
		return true;
	return cvz(arr,size-1);
}

void main(){
	printf("Enter size\n");
	int size;
	scanf("%d",&size);

	int arr[size];
	printf("Enter array\n");
	for(int i=0;i<size;i++){
		scanf("%d",arr+i);
	}

	bool cnt=cvz(arr,size-1);

	if(cnt==true||size==1)
		printf("true\n");
	else
		printf("false\n");
}
