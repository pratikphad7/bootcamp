
#include<stdio.h>

void parr(int*arr,int arr1[][2]){
	int sum[3];
	for(int j=0;j<3;j++){
		int count=0;
		for(int i=arr1[j][0];i<=arr1[j][1];i++){
			if(arr[i]%2==0){
				count++;
			}	
		}
		sum[j]=count;
	}

	for(int i=0;i<3;i++){
		printf("%d\t",sum[i]);
	}
	printf("\n");
}

void main(){
	int arr[]={1,2,3,4,5,6};
	int sum[3][2]={0,2,2,4,1,4};
	parr(arr,sum);
}
