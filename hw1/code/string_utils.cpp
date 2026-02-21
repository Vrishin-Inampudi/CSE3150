#include <iostream>
#include "string_utils.h"
using std::cout, std::cin, std::endl, std::string;


namespace string_utils{

    int runStringOptions() {
    cout << "Enter string length:" << endl;

    int string_length{};
    cin >> string_length;

    if (string_length >= 20) {
        cout << "Error: string length must be less than 20" << endl;
        return 1;
    }

    cout << "Enter string:" << endl;

    string str;
    getline(cin >> std::ws, str);

    char arr[21]{};

    for (int i = 0; i < string_length && i < (int)str.size(); i++) {
        arr[i] = str[i];
    }

    arr[string_length] = '\0';

    cout << "C-style string: " << arr << endl;

    return 0;
    }
}