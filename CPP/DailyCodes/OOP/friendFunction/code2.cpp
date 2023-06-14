//mutual function

#include<iostream>

class Demo2;
class Demo1{
	private:
		int x=10;
	protected:
		int y=20;
	private:
		void getData()const{
			std::cout<<x<<std::endl<<y<<std::endl;
		}
		
	friend void accessData(const Demo1& obj1,const Demo2& obj2);
};

class Demo2{
	private:
		int a=30;
	protected:
		int b=40;
	private:
		void printData()const{
			std::cout<<a<<std::endl<<b<<std::endl;
		}
	
	friend void accessData(const Demo1& obj1, const Demo2& obj2);
};

void accessData(const Demo1& obj, const Demo2& obj1){
	obj.getData();
	obj1.printData();
}

int main(){
	Demo1 obj1;
	Demo2 obj2;
	accessData(obj1,obj2);
}
