#include<iostream>

class Demo{
	public:
	int x=10;
	//constroctors
	Demo(){
		std::cout<<"in no-arg constroctor"<<std::endl;
	}

	Demo(int x){
		std::cout<<"in paramiterised constroctor"<<std::endl;
		this->x=x;
	}

	Demo(Demo &obj){
		std::cout<<"In copy constroctor"<<std::endl;
	}

	//Functions
	
	void access(){
		std::cout<<"x="<<x<<std::endl;
	}

	Demo &info(Demo &obj){
		std::cout<<"in Info"<<std::endl;
		obj.x=100;
		return obj;
	}
};

int main(){
	Demo obj;
	obj.access();
	std::cout<<std::endl;
	
	Demo obj2(50);
	obj.access();
	obj2.access();
	std::cout<<std::endl;

	Demo obj3(obj);
	obj.access();
	obj2.access();
	obj3.access();
	
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<"call to info -"<<std::endl;
	obj3.info(obj2);
	std::cout<<std::endl;

	std::cout<<"call to info -"<<std::endl;
	Demo obj4=obj.info(obj);
	obj4.access();
	return 0;
}

