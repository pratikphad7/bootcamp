//friend class

#include<iostream>

class one{
	private:
		int x=10;

		void printData()const{
			std::cout<<x<<std::endl;
		}
	friend class two;
};

class two{
	private:
		int a=20;
	
	public:
		void getData(const one obj)const{
			std::cout<<a<<std::endl;
			obj.printData();
		}
};

int main(){
	one obj;
	two obj2;
	obj2.getData(obj);
	return 0;
}
