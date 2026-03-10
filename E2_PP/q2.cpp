#include <iostream>
#include <string>

void reverseArray(int* arr, int size);
int* findMax(int* arr, int size);

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    for(int i : arr){
        std::cout << i << std::endl;
    }
    reverseArray(arr, size);
    for(int i : arr){
        std::cout << i << std::endl;
    }
    int* x = findMax(arr,size);
    std::cout << *x << std::endl;
}


void reverseArray(int* arr, int size){
    if(size == 0){
        std::cerr << "Incomplete array";
    }
    for(int i = 0; i < (size/2); i++){
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - i -1); 
        *(arr + size - i -1) = temp; 
        }
}

int* findMax(int* arr, int size) {
    if (size == 0) {
        return nullptr;
    }
    int* maxPtr = arr;
    for (int* p = arr + 1; p < arr + size; p++) {
        if (*p > *maxPtr) {
            maxPtr = p;
        }
    }
    return maxPtr;
}
        
    
