//wap to allocate memory for salary of no of members

#include<stdio.h>
#include<stdlib.h>

void main(){
	int num;
	puts("enter num");
	scanf("%d",&num);
	float* ptr=(float*)calloc(num,sizeof(float));
	for(int i=0;i<num;i++){
		puts("enter salary");
		scanf("%f",ptr+i);
	}
	for(int i=0;i<num;i++){
		printf("%f\n",*(ptr+i));
	}
}
