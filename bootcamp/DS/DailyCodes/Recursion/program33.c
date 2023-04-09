//string compairing 

#include<stdio.h>
#include<stdbool.h>

int mystrlen(char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;

}

bool comp(char* str, char* str1,int len){
	if(len<0)
		return true;
	if(str[len]!=str1[len])
		return false;

		return comp(str,str1,len-1);
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
	printf("%d\n",len);
	printf("%d\n",len1);
	
	bool cmp;
	if(len==len1){
		cmp=comp(str,str1,len-1);

		if(cmp==true)
			printf("true\n");
		else
			printf("false\n");
	}else
		printf("false\n");
}
	

