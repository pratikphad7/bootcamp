#include<iostream>

class Demo{
	int x=10;
	int y=20;
	
	public:
		void info(){
			std::cout<<"this="<<this<<std::endl;
			std::cout<<"x="<<this->x<<std::endl;
			std::cout<<"y="<<this->y<<std::endl;
		}
};

int main(){
	Demo obj;
	Demo *obj1=new Demo();
	obj.info();
	obj1->info();
	std::cout<<obj<<std::endl;
	return 0;
}
