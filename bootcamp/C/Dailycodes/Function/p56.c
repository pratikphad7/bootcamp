//passing array to a function

#include<stdio.h>

void fun(int arr){
	printf("%d\n",arr);

}

void main(){

	int arr[]={1,2,3,4,5,6};

	for(int i=0;i<6;i++){
		fun(arr[i]);
	}
}
