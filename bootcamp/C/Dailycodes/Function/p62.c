#include<stdio.h>

int array(int (*ptr)[3][3],int size){
	int add=0;
	for(int i=0;i<size;i++){
		add+= *(*(*ptr)+i);
		printf("arr[%d]=%d\n",i,*(*(*(ptr))+i));
	}
	return add;
}

void main(){
	int arr[][3]={1,4,7,9,11,6,12,8,9};
	int size=sizeof arr/sizeof(int);
	
	printf("size=%d\n",size);

	int x=array(&arr,size);
	
	printf("sum = %d\n",x);
}




