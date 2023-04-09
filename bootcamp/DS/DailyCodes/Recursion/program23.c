//string pelindrome using recursion

#include<stdio.h>

int pel(char *str,int n,int i){
	if(i>=n)
		return 0;
	if(str[i]!=str[n])
		return -1;
	return pel(str,n-1,i+1);
}

void main(){
	char str[]={'m','a','l','a','y','a','l','a','m'};

	int ret=pel(str,8,0);
	if(ret==0)
		printf("string is pelindrome\n");
	else
		printf("not pelindrome\n");
}
