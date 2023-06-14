#include<iostream>

class Demo{
	private:
		int x=10;
	
	protected:
		int y=20;
	
	public:
		void getData(){
			std::cout<<"x="<<x<<std::endl;
			std::cout<<"y="<<x<<std::endl;
		}
		
		void readData()const{
			std::cout<<"x="<<x<<std::endl;
			std::cout<<"y="<<x<<std::endl;
		}

		friend void accessData(Demo& obj);

		friend void accessDataWithConst(const Demo& obj);
};

void accessData(Demo& obj){
	obj.getData();

	obj.x=100;
	obj.y=200;
	
	obj.getData();
}

void accessDataWithConst(const Demo& obj){
	obj.readData();

	//obj.x=100;	//error:-in const Data friend function can only access data, it can't change data
	//obj.y=200;
	
	obj.readData();
}

int main(){
	Demo obj;
	Demo obj1;
	accessData(obj);
	accessDataWithConst(obj1);
	return 0;
}
