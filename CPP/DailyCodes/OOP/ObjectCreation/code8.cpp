//static variable declaration

#include<iostream>

int fun(){
	static int x=10;
}

class Demo{
	static int y;
};

int Demo::y=20;

int main(){
	return 0;
}
