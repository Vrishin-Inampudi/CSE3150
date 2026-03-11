#include <iostream>
#include <string>
#include <vector>

int* createHeapArray(int size);
void printArray(const int* arr, int size);
int* findMaxPointer(int* arr, int size);
void addTenByPointer(int* p);
void addTenByReference(int& x);
std::vector<int> copyToVector(const int* arr, int size);
void printVector(const std::vector<int>& v);
int findVectorMax(const std::vector<int>& v);





int main(){
    int size = 6;
    int* arr = createHeapArray(size);
    std::cout << "Heap created starting address is:" << arr << "  " << *arr <<std::endl;
    printArray(arr, size);
    int* max = findMaxPointer(arr,size);
    std::cout << *max << " is the max value at address " << max <<std::endl;
    int x = 0;
    addTenByPointer(&x);
    std::cout << x << std::endl;
    addTenByReference(x);
    std::cout << x << std::endl;
    std::vector<int> v = copyToVector(arr, size);
    printVector(v);
    std::cout << "Vector max: " << findVectorMax(v) << std::endl;
    delete[] arr;
    arr = nullptr;

    return 0;
}

int* createHeapArray(int size){
    int* arr = new int[size];
    arr[0] = 3;
    arr[1] = 8;
    arr[2] = 1;
    arr[3] = 10;
    arr[4] = 35;
    arr[5] = 12;
    return arr;
}


void printArray(const int* arr, int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << std::endl;
    }
}
int* findMaxPointer(int* arr, int size){
    int* max = arr;
    for(int i = 1 ; i < size; i++){
        if(*max < arr[i]){
            max = &arr[i];
        }
    }
    return max;
}
void addTenByPointer(int* p){
    *p += 10;
}


void addTenByReference(int& x){
    x += 10;
}

std::vector<int> copyToVector(const int* arr, int size){
    std::vector<int> vec;
    for(int i = 0; i < size; i++){
        vec.push_back(arr[i]);
        }
    return vec;
}

void printVector(const std::vector<int>& v){
    for(const auto& i : v){
        std::cout << i << std::endl;
    
   }
}



int findVectorMax(const std::vector<int>& v){
    int max = v.at(0);
    for(int i = 0 ; i < v.size(); i++){
        if(v.at(i) > max){
            max = v.at(i);
        }
    }
    return max;
}



