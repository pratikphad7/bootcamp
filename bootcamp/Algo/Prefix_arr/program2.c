//assignment Q2

#include<stdio.h>

int equilibrium(int *arr,int size){
	int parr[size];
	parr[0]=arr[0];
	for(int i=1;i<size;i++){
		parr[i]=arr[i]+parr[i-1];
	}

	for(int i=0;i<size;i++){
		if(parr[i]==(parr[size-1]-parr[i+1]))
			return i+1;
	}

	return -1;
}
void main(){
	int arr[]={-7,1,5,2,-4,3,0};
	int ret=equilibrium(arr,7);

	if(ret>=0)
		printf("index=%d\n",ret);
	else
		printf("not found\n");
}
