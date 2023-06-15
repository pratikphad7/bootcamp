//overloading IOoperators using friend function

#include<iostream>

class Demo{
	private:
		int x;
	public:
		Demo(int x){
			this->x=x;
		}
	private:
		int getData(){
			std::cin>>x;
			return x;
		}
	friend std::ostream& operator<<(std::ostream& ,Demo& );
	friend std::istream& operator>>(std::istream& ,Demo& );
};

std::ostream& operator<<(std::ostream& out,Demo& obj){
	out<<obj.x;
	return out;
}

std::istream& operator>>(std::istream& in,Demo& obj){
	in>>obj.x;
	return in;
}


int main(){
	Demo obj(10);
	std::cout<<obj<<std::endl;
	std::cin>>obj<<std::endl;
	return 0;
}
