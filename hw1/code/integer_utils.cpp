#include <iostream>
#include "integer_utils.h"
using std::cout, std::cin, std::endl, std::string;

namespace integer_utils{

    void runIntegerOptions(){
        int f_int {};
        int s_int {};
        cout << "Enter first integer:" << endl;
        cin >> f_int;
        cout << "Enter second integer:" << endl;
        cin >> s_int;

        if (s_int == 0){
            cout << "Error: division by zero" << endl;
            return;
        }

        cout << "Result: " << f_int/s_int << endl;
        //Write a single line comment
        cout << "After post-increment: " << f_int++ << endl;
        cout << "After pre-increment: " << ++f_int<< endl;
    }

}