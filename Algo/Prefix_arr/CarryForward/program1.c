//CarryForward assignment q1

#include<stdio.h>

int carFor(char* arr,int N){
	int cntA=0;
	int count=0;
	for(int i=0;i<N;i++){
		if(arr[i]=='A')
			cntA++;

		if(arr[i]=='G'&&cntA>0){
			count=count+cntA;
		}
	}
	return count;
}

void main(){
	char arr[100];
	printf("Enter string\n");

	int i=0;
	char ch;
	while((ch=getchar())!='\n'){
		arr[i++]=ch;
	}

	int count=carFor(arr,i);
	printf("count=%d\n",count);
}
