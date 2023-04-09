//array of structure object

#include<stdio.h>

struct player{
	char player_name[20];
	int jer_no;
	float avg;
};
void main(){
	struct player obj1={"MS DHONI",7,50.57};
	struct player obj2={"RISHABH PANT",17,47.5};
	struct player obj3={"KL RAHUL",1,50.55};
	struct player obj4[]={obj1,obj2,obj3};
	for(int i=0;i<3;i++){
	printf("obj%d %s\n",i,(*(obj4+i)).player_name);
	printf("obj%d %d\n",i,(*(obj4+i)).jer_no);
	printf("obj%d %f\n",i,(*(obj4+i)).avg);
	}
}
	

