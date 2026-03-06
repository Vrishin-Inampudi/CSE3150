#include <iostream>


int* create_reversed_copy(int* arr,int size){
    int* copy = new int[size];
    for (int i = 0; i < size; ++i){
        copy[i] = arr[size - 1 - i]; //iterates backwards 
    }
    return copy;
}

int main(){
    int original[] = {10,20,30,40,50};
    int size = 5;
    int* reveresed = create_reversed_copy(original, size);
    for (int i = 0; i < size; i++){
        std::cout<< reveresed[i] << " ";
    }
    std::cout<< std::endl;
    delete[] reveresed;
    return 0;
}