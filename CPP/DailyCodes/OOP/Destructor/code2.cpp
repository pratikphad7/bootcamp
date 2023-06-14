//Delete and Delete Array

#include<iostream>

class Demo{
	public:
	Demo(){
		std::cout<<"In no-arg constructor"<<std::endl;
	}

	~Demo(){
		std::cout<<"In destructor"<<std::endl;
	}
};


int main(){
	Demo *obj=new Demo();
	Demo *obj1=new Demo();
	Demo *obj2=new Demo();

	Demo *obj3[]={obj,obj1,obj2};

	delete[] obj3;		//for delete array of objects

	//delete(obj); 		//for delete single object
	return 0;
}
