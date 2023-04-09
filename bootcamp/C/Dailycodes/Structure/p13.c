//passing structure object

#include<stdio.h>
#include<string.h>

struct demo{
	int x;
	int y;
};

void main(){
	struct demo obj={1,2};
	int arr[]={1,2,3};
	printf("%p\n",&obj.x);
	printf("%p\n",&obj);
	//printf("%d\n\n",obj);
	printf("%p\n",&arr[0]);
	printf("%p\n\n",arr);
}

