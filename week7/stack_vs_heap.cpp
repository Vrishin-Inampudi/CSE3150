#include <iostream>

int* createArray(int size){
    int* arr = new int[size];
    for(int i = 0; i <= size-1; i++){
        arr[i] = i;
        std::cout<< arr[i] << std::endl; 
    }
    return arr;

}





int main(){
    int size = 5;
    int* arr = createArray(5); //get the pointer from the function 

    for(int i = 0; i < size; i++){
        std::cout << arr[i] << std::endl;
    }

    delete[] arr;

    return 0;

}