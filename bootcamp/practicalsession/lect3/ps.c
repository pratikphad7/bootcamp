#include<stdio.h>

void main(){
	char str[10];
	printf("Enter string\n");
	char ch;
	int i=0;
	while((ch=getchar())!='\n')
		str[i++]=ch;
	
	i=0;
	int sum=0;
	while(str[i]!='\0'){
		int no=0;
		while(str[i]>=48 && str[i]<=57){
			 int n = str[i] - 48;
			 no= (no*10) + n;
			 i++;	 
		}
		sum=no+sum;
		i++;
	}
	printf("sum=%d\n",sum);
}
