#include<stdio.h>
#include<string.h>
struct movie{
	char mname[10];
	struct minfo{
		char actor[10];
		float imdb;
	}obj1;
}obj2;

void main(){
	strcpy(obj2.mname,"msd");
	strcpy(obj2.obj1.actor,"ssr");
	obj2.obj1.imdb=10.00;

	printf("movie name-%s\n",obj2.mname);
	printf("movie actor-%s\n",obj2.obj1.actor);
	printf("movie rating-%f\n",obj2.obj1.imdb);
}
