#include<stdio.h>

struct player{
	char player_name[20];
	int jursy_no;
	float avg;
};

void main(){
	struct player object1={"MS DHONI",7,50.77};
	struct player object2={"VIRAT KOHLI",18,58.77};
	struct player object3={"RAVINDRA JADEJA",8,40.77};
	struct player object4={"KL RAHUL",1,50.17};

	struct player arr[4]={object1,object2,object3,object4};
	
	int size=sizeof arr/sizeof(struct player);
	for(int i=0;i<size;i++){
		printf("Name Of Player-%s\n",arr[i].player_name);
		printf("Jursy No Of Player-%d\n",arr[i].jursy_no);
		printf("Avg Of Player-%f\n\n",arr[i].avg);
	}
}


