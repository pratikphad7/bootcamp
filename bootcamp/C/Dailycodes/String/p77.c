#include<stdio.h>

void main(){
	char pname[]={'v','i','r','a','t','\0','k','o','h','l','i'};
	char *name="virat kohli";

	printf("%ld\n",sizeof(pname));
	printf("%ld\n",sizeof(name));

	for(int i=0;i<11;i++){
		printf("%c",pname[i]);
	}
	printf("\n");

	for(int i=0;i<11;i++){
		printf("%c",*(name+i));
	}
	printf("\n%s\n",pname);
	printf("%s\n",name);
}
