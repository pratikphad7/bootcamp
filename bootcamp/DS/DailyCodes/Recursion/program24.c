//counting 0 in given number

#include<stdio.h>

int countnum(int num){
	int count=0;
	if(num==0)
		return 1;
	while(num){
		if(num%10==0)
			count++;
		num=num/10;
	}
	return count;

}

void main(){
	int num;
	printf("Enter number\n");
	scanf("%d",&num);

	int count=countnum(num);

	printf("count is %d\n",count);
}
