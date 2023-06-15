//overloading arethmatic operators using friend function

#include<iostream>

class Demo{
	private:
		int x;
	public:
		Demo(int x){
			this->x=x;
		}
	int operator+(Demo& obj1){
		return this->x+obj1.x;
	}

	int operator-(Demo& obj1){
		return this->x-obj1.x;
	}

	int operator*(Demo& obj1){
		return this->x*obj1.x;
	}

	int operator/(Demo& obj1){
		return this->x/obj1.x;
	}

	int operator%(Demo& obj1){
		return this->x%obj1.x;
	}
};


int main(){
	Demo obj(10);
	Demo obj1(20);
	std::cout<<obj+obj1<<std::endl;
	std::cout<<obj-obj1<<std::endl;
	std::cout<<obj*obj1<<std::endl;
	std::cout<<obj/obj1<<std::endl;
	std::cout<<obj%obj1<<std::endl;
	return 0;
}
