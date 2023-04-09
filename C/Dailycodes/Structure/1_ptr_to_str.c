
#include<stdio.h>

struct movie{
	char movie_name[10];
	int no_of_ticket;
	float price_of_ticket;
}object1={"Tumbad",5,200.56};

void main(){
	struct movie object_2={"ginius",2,150.44};

	struct movie *ptr=&object_2;

	printf("movie name- %s\n",(*ptr).movie_name);
	printf("no of tickets- %d\n",(*ptr).no_of_ticket);
	printf("price of tickets- %f\n\n",(*ptr).price_of_ticket);

	printf("movie name- %s\n",object1.movie_name);
	printf("no of tickets- %d\n",object1.no_of_ticket);
	printf("price of tickets- %f\n",object1.price_of_ticket);

}

