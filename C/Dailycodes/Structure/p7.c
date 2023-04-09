#include<stdio.h>
#include<string.h>
struct picnic{
	char location[50];
	int count;
	float distance;
};

void main(){
	struct picnic obj1={"goa",2,460.50};

	struct picnic obj2;
	strcpy(obj2.location,"kashmir");   //for assign string alwas use strcpy function
	obj2.count=3;
	obj2.distance=1200;
}
