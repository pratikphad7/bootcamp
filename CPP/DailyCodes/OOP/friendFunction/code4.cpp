//friend class

#include<iostream>

class two;
class one{
	private:
		int x=10;

	public:	
		void printData()const{
			std::cout<<x<<std::endl;
		}
		
		accessData(const two& obj){
			obj.printData();
		}
};

class two{
	private:
		int a=20;

		void getData()const{
			std::cout<<a<<std::endl;
		}
	
	friend void one::accessData(const two& obj);
};

void one::accessData(const two& obj){
	obj.printData();
}

int main(){
	one obj;
	two obj2;
	obj2.getData(obj);
	return 0;
}
