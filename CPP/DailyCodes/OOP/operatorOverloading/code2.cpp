//overload arithmatic operator using friend function

#include<iostream>

class Demo{
	int x=10;

	public:
		Demo(int x){
			this->x=x;
		}
	friend int operator+(const Demo,const Demo);
};

int operator+(const Demo obj1,const Demo obj){
	return obj.x+obj1.x;
}

int main(){
	Demo obj(20);
	Demo obj2(30);
	std::cout<<obj+obj2<<std::endl;	
	return 0;
}


