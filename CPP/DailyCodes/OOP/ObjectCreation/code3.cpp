#include<iostream>

class Demo{
	private:
		std::string name="Virat";
		int jerNo=18;
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
