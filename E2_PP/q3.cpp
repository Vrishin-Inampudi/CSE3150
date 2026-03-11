#include <iostream>
#include <string>

void incrementByPointer(int* x);
void incrementByReference(int& x);
void reassignPointer(int* p);

int main(){
    int x = 5;
    incrementByPointer(&x); 
    std::cout << x << std::endl;
    incrementByReference(x);
    std::cout << x << std::endl;
    int* p = nullptr;
    reassignPointer(p);
}


void incrementByPointer(int* x){
    *x += 1;
}

void incrementByReference(int& x){
    x += 1;
}

void reassignPointer(int* p){
    int y = 100;
    p = &y;
}