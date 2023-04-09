#include<stdio.h>

int stepcount(int num,int count){
	if(num==0)
		return count;

	if(num%2!=0)
		num=num-1;
	else
		num=num/2;
	count++;
	
	return stepcount(num,count);
}

void main(){
	int num;
	printf("Enter num\n");
	scanf("%d",&num);
	int count=stepcount(num,0);
	printf("step count=%d\n",count);
}
