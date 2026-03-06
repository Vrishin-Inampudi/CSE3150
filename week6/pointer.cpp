#include <iostream>
#include <string>

int main(){
	int x = 42;
	int* p = &x; //p stores the address
	*p = 109; 
	std::cout << "p= " << p << "*p= " << *p << std::endl;
	return 0;
}


void change_pointer(){
	int a = 5; 
	int b = 8;
	int* p = &a; //p = address of a 
	std::cout << *p << std::endl; //should print out value at a
	p = &b //now it changes to b 
	std::cout << *p <<std::endl; //now it should print out value at b
}

void nullPointer(){
	int* p = nullptr;
	

	if (p == nullptr) {
		std::cout << "p points to nothing\n";
	}
	//if i derefrence a null pointer program crashes

}



void setToZero(int* p) {
	*p = 0; //derefrences the pointer and sets it to zero.
}

int main(){
	int x = 100;
	setToZero(&x); //can pass address into functions
	std::cout << x << std::endl; //0
}
