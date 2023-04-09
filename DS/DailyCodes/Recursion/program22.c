//string pelindrome using recursion

#include<stdio.h>

int pel(char *str,int n){
	int i=0;
	while(n>=i){
		if(str[i]!=str[n])
			return -1;
		else{
			i++;
			n--;
		}
	}
	return 0;
}

void main(){
	char str[]={'m','a','l','a','y','a','l','a','m'};

	int ret=pel(str,8);
	if(ret==0)
		printf("string is pelindrome\n");
	else
		printf("not pelindrome\n");
}
