/*I H G
 *F E D
  C B A*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row no\n");
	scanf("%d",&row);

	int ch=64+(row*row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%c\t",ch);
			ch--;
		}printf("\n");

	}
}
