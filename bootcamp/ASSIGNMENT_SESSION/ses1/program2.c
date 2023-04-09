//countig element that have atleast 1 elment is greter in array

#include<stdio.h>

int goodpairarr(int* arr,int size,int b){
	int count=0;
	
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]+arr[j]==b)
				count++;
		}
	}

	return count;
}

void main(){
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter element\n");

	for(int i=0;i<size;i++){
		scanf("%d",arr+i);
	}

	printf("Enter no\n");
	int n;
	scanf("%d",&n);

	int count=goodpairarr(arr,size,n);

	printf("Count=%d\n",count);
}
