#include<iostream>

class Demo{
	private:
		int x=10;
	protected:
		int y=20;
	public:
		int z=30;
};

int main(){

	Demo obj;	//stack frame var object banto
	
	Demo *obj1=new Demo();	//Heap var object banto
	
	std::cout<<obj1->z<<std::endl;
	return 0;
}
