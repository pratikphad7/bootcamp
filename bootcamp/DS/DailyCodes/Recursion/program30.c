#include<stdio.h>
#include<stdbool.h>

bool cvz(int* arr,int size,int count){
	if(arr[size]==0)
		count++;
	if(count>2)
		return true;
	if(size==0)
		return false;
	return cvz(arr,size-1,count);
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

	bool cnt=cvz(arr,size-1,0);

	if(cnt==true)
		printf("true\n");
	else
		printf("false\n");
}
