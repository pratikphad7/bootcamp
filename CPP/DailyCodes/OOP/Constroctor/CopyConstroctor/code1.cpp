#include<iostream>

class Demo{
	private:
		int x=10;

	protected:
		int y=20;

	public:
	Demo(){
		std::cout<<"in no arg constroctor"<<std::endl;
	}

	Demo(Demo& obj){
		std::cout<<"in copy constroctor"<<std::endl;
	}
	
	Demo &fun(Demo& obj){
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;
		return obj;
	}
};

int main(){
	Demo obj;
	Demo &obj1=obj.fun(obj);
	Demo &obj3=obj;
	Demo &obj4(obj4);
	return 0;
}
