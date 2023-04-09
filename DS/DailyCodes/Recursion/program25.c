//counting 0 in given number using recursion

#include<stdio.h>

int countnum(int num,int count){
	
	if(num==0)
		return count+1;
	if(num<10)
		return count;
	if(num%10==0)
		count++;
		
	return countnum(num/10,count);

}

void main(){
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	int count=0;
	if(num==0)
		count++;
	else
		count=countnum(num,0);

	printf("count is %d\n",count);
}
