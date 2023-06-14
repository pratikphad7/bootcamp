//overload arithmatic operator using member function

#include<iostream>

class Demo{
	int x=10;

	public:
		Demo(int x){
			this->x=x;
		}
		
	int operator+(const Demo obj1){
		return obj1.x+this->x;
	}
};	

int main(){
	Demo obj(20);
	Demo obj2(30);
	std::cout<<obj+obj2<<std::endl;	
	return 0;
}


