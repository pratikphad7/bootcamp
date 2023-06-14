
#include<iostream>

class Demo{
	public:
	Demo(){
		std::cout<<"In no-arg constroctor"<<std::endl;
	}

	Demo(Demo& ref){
		std::cout<<"in copy constructor"<<std::endl;
	}

	~Demo(){
		std::cout<<"in destructor"<<std::endl;	
	}
};

int main(){
	printf("In main\n");

	Demo obj;		//hyachy destructor madhe main samptana call jatoy

	{
		Demo obj;	//hyachya destuctor madhe hyacha block samplyavar call jatoy 
	}

	Demo *obj1=new Demo();  //hyachya destructor madhe process samptana call jail
			
	printf("End main\n");

	return 0;

}
