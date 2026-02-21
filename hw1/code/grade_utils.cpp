#include <iostream>
#include "grade_utils.h"
#include <cctype>
using std::cout, std::cin, std::endl, std::string;

namespace grade_utils{

        int calculateGrade(){
            char type_s;
            cout << "Enter student type (U for undergrad, G for grad):" << endl;
            cin >> type_s;
            int grade;
            cout << "Enter numeric grade: " << endl;
            cin >> grade;
            type_s = toupper(type_s);   
            if (grade < 0 || grade > 100){
                cout << "Invalid grade" << endl;
                return 1;
            }
            if (grade >= 70 and type_s == 'G')
                cout << "Status: Pass" << endl;
            else if (grade >= 60 and type_s == 'U' )
                cout << "Status: Pass" << endl;
            else
                cout << "Status: Fail" << endl;
            return 0;
        }

}


