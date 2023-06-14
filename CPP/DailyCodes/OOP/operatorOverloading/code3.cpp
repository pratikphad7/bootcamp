//overload arithmatic operator using normal function

#include<iostream>

class Demo{
	int x=10;

	public:
		Demo(int x){
			this->x=x;
		}
		
		int getData()const{
			return x;
		}
};

int operator+(const Demo obj1,const Demo obj){
	return obj1.getData()+obj.getData();
}

int main(){
	Demo obj(20);
	Demo obj2(30);
	std::cout<<obj+obj2<<std::endl;	
	return 0;
}


