#include<iostream>

void fun(int x,int y){
	std::cout<<x<<" "<<y<<std::endl;
}

void fun(int x,float y){
	std::cout<<x<<" "<<y<<std::endl;
}

void fun(float x,float y){
	std::cout<<x<<" "<<y<<std::endl;
}

int main(){
	fun(10,20);		//funii
	fun(10.5f,20.5f);	//funff
	fun(10,20.5f);		//funif
	//fun(10.5,20.5);		//fundd error
	return 0;
}
