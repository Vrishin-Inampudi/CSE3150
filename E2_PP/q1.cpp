#include <iostream>
#include <string>

int* makeNumber(int value); //passes a int 
void setToDouble(int& x);

int main(){
    int x = 5;
    int* px = makeNumber(x);
    std::cout<<*px<< std::endl;
    setToDouble(*px);
    std::cout<<*px<< std::endl;
    delete px;
    std::cout << "Deleted" << std::endl;
    return 0;
}

//1: Returning address is bad when we have a local variable because since its on the stack it no longer has the value stored there and just has some random undefined behavior.
//2: Returning heap is safe because it's stored somewhere else and always points to the value untill you deallocate the memory.
//3: a pointer is dangeling if the address it point's to doesn't have the value 


int* makeNumber(int value){
    int* px = new int(value); //changes to a pointer on the heap 
    return px; //returns said pointer
}

void setToDouble(int& x){ //refrence so simple double function 
    x *= 2;
}
    
