#include <iostream>
#include "do_while_count_utils.h"
using std::cout, std::cin, std::endl, std::string;


#include <iostream>
#include "do_while_count_utils.h"

using std::cout;
using std::cin;
using std::endl;

namespace do_while_count_utils {
int runDoWhileCount() {
    int n{};
    do {
        cout << "Enter a number between 1 and 5:" << endl;
        cin >> n;
    } while (n < 1 || n > 5);
    const int arr[5] = {1, 2, 3, 4, 5};
    for (int value : arr) {
        cout << "Value: " << value << endl;
        if (value == n) break;
    }
    return 0;
}

}
