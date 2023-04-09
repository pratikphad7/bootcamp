//merge sort

#include<stdio.h>
//{3,4,6,8,3,2}
void mergsorting(int* arr,int start,int mid,int end){
	int a=mid-start+1;
	int b=end-mid;
	int arr1[a];
	int arr2[b];

	for(int i=0;i<a;i++){
		arr1[i]=arr[start+i];
	}

	for(int i=0;i<b;i++){
		arr2[i]=arr[mid+1+i];
	}
	
	int i=0;
	int j=0;
	int k=start;
	while(i<a&&j<b){
		if(arr1[i]<arr2[j]){
			arr[k]=arr1[i];
			i++;
		}else{
			arr[k]=arr2[j];
			j++;
		}
		k++;
	}

	while(i<a){
		arr[k]=arr1[i];
		i++;
		k++;
	}

	while(j<a){
		arr[k]=arr2[j];
		j++;
		k++;
	}
}

void sorting(int *arr,int start,int end){
	if(start<end){
		int mid=(start+end)/2;
		sorting(arr,start,mid);
		sorting(arr,mid+1,end);
		mergsorting(arr,start,mid,end);
	}
}

void main(){
	int arr[]={1,3,5,2,6,8,9};
	sorting(arr,0,6);
	
	for(int i=0;i<7;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
