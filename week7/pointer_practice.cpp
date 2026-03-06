#include <iostream>
using namespace ::std;

void reverseArray(int* arr,int size){
    int new_arr[size];
    for(int i = (size-1);i >= 0; i--){
        cout << *(arr + i) << endl;
        new_arr[i] = *(arr + i);
    }
    cout << *new_arr << endl;
} 


int main(){
    int arr[] = {1,2,3,4};
    reverseArray(arr, 4);
    return 0;
}

/*
void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
*\