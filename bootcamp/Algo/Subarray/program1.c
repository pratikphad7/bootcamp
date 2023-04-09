//[1,2,3,]  finding subarray

#include<stdio.h>

void subarr(int* arr,int N){
	int k=0;	
	for(int i=0;i<N;i++){
		k=i;
		for(int j=i;j<N+(N-i);j++){
			if(k<=j-(N-i))
			
			//for(int k=i;k<=j;k++){
				printf("%d\t",arr[k]);
				k++;
			//}
			//printf("\n");
		}
		printf("\n");
	}
	printf("\n");
}

void main(){
	int arr[5]={1,2,3};
	
	subarr(arr,3);
}
