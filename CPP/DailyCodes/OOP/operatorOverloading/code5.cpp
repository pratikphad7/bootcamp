//overloading arethmatic operators using friend function

#include<iostream>

class Demo{
	private:
		int x;
	public:
		Demo(int x){
			this->x=x;
		}
	friend int operator+(Demo& obj,Demo& obj1);
	friend int operator-(Demo& obj,Demo& obj1);
	friend int operator*(Demo& obj,Demo& obj1);
	friend int operator/(Demo& obj,Demo& obj1);
	friend int operator%(Demo& obj,Demo& obj1);
};

int operator+(Demo& obj,Demo& obj1){
	return obj.x+obj1.x;
}

int operator%(Demo& obj,Demo& obj1){
	return obj.x%obj1.x;
}

int operator-(Demo& obj,Demo& obj1){
	return obj.x-obj1.x;
}

int operator*(Demo& obj,Demo& obj1){
	return obj.x*obj1.x;
}

int operator/(Demo& obj,Demo& obj1){
	return obj.x/obj1.x;
}

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
