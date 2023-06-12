#include<iostream>

class Demo{
	private:
		int no;
		std::string name;
	public:
		void seter(int no,std::string name){
			this->no=no;
			this->name=name;
		}

		void geter(){
			std::cout<<no<<"  ";
			std::cout<<name<<std::endl;
		}
};

int main(){
	Demo obj;
	Demo *obj1=new Demo();
	obj.seter(7,"Dhoni");
	obj1->seter(18,"Virat");
	obj.geter();
	obj1->geter();
	
	obj1->seter(1,"KL");
	obj.geter();
	obj1->geter();
	return 0;
}
