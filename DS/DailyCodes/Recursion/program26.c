#include<stdio.h>

int stepcount(int num){
	int count=0;
	while(num){
		if(num%2!=0)
			num=num-1;
		else
			num=num/2;
		count++;
	}
	return count;
}

void main(){
	int num;
	printf("Enter num\n");
	scanf("%d",&num);
	int count=stepcount(num);
	printf("step count=%d\n",count);
}
