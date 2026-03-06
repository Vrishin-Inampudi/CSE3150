#include <iostream>
using namespace ::std;


void swapValues(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10;
    int y = 20;
    swapValues(x,y);
    return 0;


}