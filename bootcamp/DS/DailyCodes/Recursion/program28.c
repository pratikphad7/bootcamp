//reverse number

#include<stdio.h>

int reve(int num){
	int rev=0;
	while(num){
		rev=(rev*10)+num%10;
		num=num/10;
	}
	return rev;
}

void main(){
	int num;
	printf("Enter number\n");
	scanf("%d",&num);

	if(num<10)
		printf("it is single digit num\n");
	else{
		int rev=reve(num);
		if(num%10==0)
			printf("0%d\n",rev);
		else
			printf("%d\n",rev);
	}
}
