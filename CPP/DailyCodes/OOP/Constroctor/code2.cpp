#include<iostream>

class Demo{
	public:
	int x=10;
	//constroctors
	
	Demo(){
		std::cout<<"In no-arg constroctor"<<std::endl;	
	}
	
	Demo(int x){
		std::cout<<"In para constroctor"<<std::endl;	
	}
	
	Demo(Demo &obj){
		std::cout<<"In copy constroctor"<<std::endl;
	}


	Demo info(Demo obj){
		std::cout<<"in Info"<<std::endl;
		return obj;
	}
};

int main(){
	Demo obj1(10);
	Demo obj;
	obj1.info(obj);
	return 0;
}

