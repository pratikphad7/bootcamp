#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct movie{
	int no_tic;
	char name[20];
	float price;
	struct movie *next;
}mv;

void getData(mv *ptr,mv *ptr2){

	FILE *fp=fopen("p5.c","r");

	printf("enter no of tic\n");
	scanf("%d",&ptr->no_tic);

	printf("enter mv name\n");
	scanf("%s",ptr->name);

	printf("enter price\n");
	scanf("%f",&ptr->price);
	
	ptr->next=ptr2;

}

void putdata(mv *ptr){
	printf("no of tic is %d\n",ptr->no_tic);
	printf("name of movie is %s\n",ptr->name);
	printf("price of tic is %f\n\n",ptr->price);
}

void main(){
	
	mv *ptr=(mv*)malloc(sizeof(mv));
	mv *ptr1=(mv*)malloc(sizeof(mv));
	mv *ptr2=(mv*)malloc(sizeof(mv));
	mv *ptr3=(mv*)malloc(sizeof(mv));

	getData(ptr,ptr1);
	getData(ptr1,ptr2);
	getData(ptr2,ptr3);
	getData(ptr3,NULL);

	putdata(ptr);
	putdata(ptr1);
	putdata(ptr2);
	putdata(ptr3);
}


