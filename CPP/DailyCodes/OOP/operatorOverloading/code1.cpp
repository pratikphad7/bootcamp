#include<iostream>

class Demo{
	int x=10;

	public:
		Demo(){
		
		}
};

int main(){
	int x=10;
	std::cout<<x<<std::endl;	//internal :- operator<<(cout,x)  
					//prototype:- ostream& operator<<(ostream&,int) :- (predifined function)
	
	Demo obj;
	std::cout<<obj<<std::endl;	//internal :- operator<<(cout,obj)
					//prototype:- ostream& operator<<(ostream&,Demo&) :-(user defined function)
	return 0;
}

//error:- operator<<(ostream&,Demo&) navach function sapdat nahi
