//reverse number using recursion

#include<stdio.h>

int reve(int num,int rev){
	if(num==0)
		return rev;

	return reve(num/10,(rev*10)+(num%10));
}

void main(){
	int num;
	printf("Enter number\n");
	scanf("%d",&num);

	if(num<10)
		printf("it is single digit num\n");
	else{
		int rev=reve(num,0);
		if(num%10==0)
			printf("0%d\n",rev);
		else
			printf("%d\n",rev);
	}
}
