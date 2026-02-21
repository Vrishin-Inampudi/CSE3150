#include <iostream> 
#include "integer_utils.h"
#include "string_utils.h"
#include "grade_utils.h"
#include "while_count_utils.h"
#include "do_while_count_utils.h"

using std::cout; 
using std::cin; 
using std::endl; 
using std::string;

int main(){
    bool running = true;

    while(running){
        int choice{};
        cout << "Chose and Operation: " << endl;
        cout << "1. Integer operations" << endl;
        cout << "2. Character arrays and C-style strings" << endl;
        cout << "3. Grade evaluation" << endl;
        cout << "4. While-loop counting" << endl;
        cout << "5. Do-while and range-based for counting" << endl;
        cout << "6. Quit" << endl;
        cin >> choice;

        switch(choice) {

            case 1:
                integer_utils::runIntegerOptions();
                break;

            case 2: {
                int result = string_utils::runStringOptions();
                if (result != 0) {
                    cout << "Error something went wrong" << endl;
                    exit(1);
                }
                break;
            }

            case 3: {
                int result = grade_utils::calculateGrade();
                if (result != 0) {
                    cout << "Error something went wrong" << endl;
                    exit(1);
                }
                break;
            }

            case 4:
                while_count_utils::runWhileCount();
                break;

            case 5:
                do_while_count_utils::runDoWhileCount();
                break;

            case 6:
                cout << "Goodbye!" << endl;
                running = false;
                break;

            default:
                cout << "Invalid choice: " << endl;
                break;
        }
    }

    return 0;
}