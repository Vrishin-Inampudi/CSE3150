#include <iostream>
#include "while_count_utils.h"
using std::cout, std::cin, std::endl, std::string;

namespace while_count_utils {

void runWhileCount() {
    int number{};

    cout << "Enter a number to count to:" << endl;
    cin >> number;

    while (number > 10) {
        cout << "I'm programmed to only count up to 10!" << endl;
        cout << "Enter a number to count to:" << endl;
        cin >> number;
    }

    int current = 1;
    while (current <= number) {
        if (current != 5) {
            cout << current << endl;
        }
        current++;
    }
}

}


