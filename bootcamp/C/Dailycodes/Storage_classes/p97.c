#include<stdio.h>

void main(){
	register int x=10; 
	printf("%p\n",&x); //error, we can't get address of register variable 
			   //auto and register only given to local varible not globle varible
			   //register got memory at cpu or RAM
			   //default value(auto,register = g.v)
			   //lifetime-function scope

}

