//wap to allocate memory to increase the no of friends salary

#include<stdio.h>
#include<stdlib.h>

void main(){
	int* ptr=(int*)calloc(5,sizeof(int));

	for(int i=0;i<5;i++){
		*(ptr+i)=10*i;
	}

	int* ptr1=(int*)realloc(ptr,3);

	for(int i=0;i<3;i++){
		*(ptr1+i)=12*i;
	}

	for(int i=0;i<5;i++){
		printf("%d\n",*(ptr1+i));
	}


	free(ptr1);
}
