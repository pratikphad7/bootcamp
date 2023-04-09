//realloc

#include<stdio.h>
#include<stdlib.h>
void main(){

	int *ptr2 = (int*)calloc(5,sizeof(int));
	for(int i=0 ;i<5 ; i++){
		*(ptr2+i) = 10+i;
		printf("%d\n",*(ptr2+i));
	}

	int *ptr=(int*)realloc(ptr2,10);   //after realloc alwase use free() function

	for(int i=0;i<10;i++){
		*(ptr+i)=10+i;
		printf("%d\n",*(ptr+i));
	}

	free(ptr2);
}
