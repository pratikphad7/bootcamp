//friend class


#include<iostream>

class Demo2;
class Demo{
	int x=10;
	
	void fun(){
		std::cout<<x<<std::endl;
	}

	friend Demo2;
};

class Demo2{
	public:
		void getfun(Demo& obj){
			obj.fun();
		}
};

int main(){
	Demo obj;
	Demo2 obj2;
        obj2.getfun(obj);	
	return 0;
}
