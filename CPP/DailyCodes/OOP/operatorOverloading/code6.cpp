//overloading arethmatic operators using Normal function

#include<iostream>

class Demo{
	private:
		int x;
	public:
		Demo(int x){
			this->x=x;
		}
		
		int getData(){
			return x;
		}
};

int operator+(Demo& obj,Demo& obj1){
	return obj.getData()+obj1.getData();
}

int operator%(Demo& obj,Demo& obj1){
	return obj.getData()%obj1.getData();
}

int operator-(Demo& obj,Demo& obj1){
	return obj.getData()-obj1.getData();
}

int operator*(Demo& obj,Demo& obj1){
	return obj.getData()*obj1.getData();
}

int operator/(Demo& obj,Demo& obj1){
	return obj.getData()/obj1.getData();
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
