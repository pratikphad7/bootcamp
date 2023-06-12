

   //Structure

#include<iostream>

struct player{
	int jerNo=7;
	char pName[20]="MSD";

	void Disp(){
		std::cout<<jerNo<<std::endl;
		std::cout<<pName<<std::endl;
	}
};

int main(){
	player obj;
	std::cout<<obj.jerNo<<std::endl;
	std::cout<<obj.pName<<std::endl;

	obj.Disp();
	return 0;
}
