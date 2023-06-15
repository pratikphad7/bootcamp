//friend member function

#include<iostream>

class Demo1;
class Demo{
	public:
		void accessData(const Demo1& obj);
};

class Demo1{
	private:
		int x=10;
		void fun()const{
			std::cout<<x<<std::endl;
		}
	friend void Demo::accessData(const Demo1&);
};

void Demo::accessData(const Demo1& obj){
	obj.fun();
}

int main(){
	Demo obj;
	Demo1 obj1;
	obj.accessData(obj1);
	return 0;
}
