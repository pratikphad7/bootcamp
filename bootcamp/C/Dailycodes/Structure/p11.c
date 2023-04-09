//pointer to structure

#include<stdio.h>

struct movie{
	char movie_name[20];
	int no_tic;
	float rating;
}obj1={"MS Dhoni",3,10.00};

void main(){
	struct movie obj2={"ginius",2,9.7};
	struct movie *ptr=&obj1;
	struct movie *ptr1=&obj2;
	printf("%s\n",(*ptr).movie_name);
	printf("%d\n",(*ptr1).no_tic);
	printf("%f\n",ptr->rating);
}


	
