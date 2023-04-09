//my length library


#include<stdio.h>

int str_len(char str[],int *y){
	
	int len=0;
	while(*str !='\0'){
		len++;
		str++;
		(*y)++;
	}
	len++;
	(*y)++;
	return len;
}

void main(){
	char str[]={"virat kohli"};
	int x=0;
	printf("%p\n",&x);
	int len=str_len(str,&x);
	printf("length of str is %d\n",len);
	printf("length of str is %d\n",x);
}
