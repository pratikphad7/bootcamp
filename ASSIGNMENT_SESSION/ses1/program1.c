//countig element that have atleast 1 elment is greter in array

#include<stdio.h>

int countarr(int* arr,int size){
	int count=0;
	int num=arr[0];
	int cnt=1;
	
	for(int i=0;i<size;i++){
		if(arr[i]==num&&i!=0)
			cnt++;
		if(arr[i]>num){
			num=arr[i];
			if(cnt>0){
				count=count+cnt;
				cnt=1;
			}else
				count++;
	
		} 
		
		if(arr[i]<num)
			count++;
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

	int count=countarr(arr,size);

	printf("Count=%d\n",count);
}
