#include<stdio.h>

int fun(int *ptr,int size){  //or ptr[]
	int add=0;
	for(int i=0;i<size;i++){
		add+=*(ptr+i);  //or ptr[i]
	}
	return add;
}
		
void main(){
	int size=5;
	int arr[]={1,2,3,4,5};
	fun(arr,size);
	int sum= fun(arr,size);
	printf("sum of arr is %d\n",sum);
}
