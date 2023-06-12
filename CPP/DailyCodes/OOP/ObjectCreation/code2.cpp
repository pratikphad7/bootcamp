#include<iostream>

class Demo{
	private:
		std::string name;
		int jerNo;
	public:
		void info(){
			std::cout<<name<<" "<<jerNo<<std::endl;
		}
};

int main(){
	Demo vk;
	vk.info();
	return 0;
}
