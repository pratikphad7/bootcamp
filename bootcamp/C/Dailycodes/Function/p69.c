//returning array from a function

#include<stdio.h>
int* fun(){
	int arr[]={10,20,30};
	return arr;
}
void main(){
	int *ptr=fun();
	printf("%d\n",*ptr);
}//in c we cant return array from function
