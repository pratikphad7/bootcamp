#include<stdio.h>
//1 2 3 4
int countElement(int* arr,int N,int count,int i,int max,int sameElement){
		if(arr[i]>max){
			max=arr[i];
			count=sameElement+count;
			sameElement=1;
		}else if(arr[i]==max){
			sameElement++;
		}
		if(i>N)
			return count;
		return countElement(arr,N,count,++i,max,sameElement);
	
}

void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter element\n");
	for(int i=0;i<size;i++)
		scanf("%d",arr+i);
	int max=arr[0];
	int count=countElement(arr,size,0,0,max,1);
	printf("count is %d\n",count);
}
