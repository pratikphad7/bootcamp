//n string compairing  

#include<stdio.h>
#include<stdbool.h>

int mystrlen(char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;

}

bool comp(char* str, char* str1,int n){
	if(n<0)
		return true;
	if(str[n]!=str1[n])
		return false;

		return comp(str,str1,n-1);
}

void main(){
	char str[7];
	char str1[8];
	
	char ch;
	printf("enter str\n");
	int i=0;
	while((ch=getchar())!='\n')
		str[i++]=ch;
	
	printf("enter str1\n");
	i=0;
	while((ch=getchar())!='\n')
		str1[i++]=ch;

	int len=mystrlen(str);
	int len1=mystrlen(str1);
	
	bool cmp;

	printf("Enter n\n");
	int n;
	scanf("%d",&n);
	if(len1>=n&&n<=len){
		cmp=comp(str,str1,n-1);

		if(cmp==true)
			printf("true\n");
		else
			printf("false\n");
	}else
		printf("false\n");
}
	

