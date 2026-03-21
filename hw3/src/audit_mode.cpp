#include "audit_mode.h"
#include "validation.h"

#include <iostream>
#include <fstream>
#include <string>

bool ends_with(std::string text, std::string ending) {
    if (text.length() < ending.length()) {
        return false;
    }

    return text.substr(text.length() - ending.length()) == ending;
}

char get_delimiter(std::string filename) {
    if (ends_with(filename, ".csv")) {
        return ',';
    }

    return '\t';
}

void process_file(std::string input, std::string output) {
    char input_delim = get_delimiter(input);
    char output_delim = get_delimiter(output);

    std::ifstream in_file(input);
    if (!in_file) {
        std::cout << "Error opening file" << std::endl;
        return;
    }

    std::ofstream out_file(output, std::ios::app);
    if (!out_file) {
        std::cout << "Error opening file" << std::endl;
        return;
    }

    std::string username;
    std::string email;
    std::string password;

    while (std::getline(in_file, username, input_delim) &&
           std::getline(in_file, email, input_delim) &&
           std::getline(in_file, password)) {

        if (!is_valid_password(password)) {
            out_file << username << output_delim
                     << email << output_delim
                     << password << '\n';
        }
    }
}

void run_menu() {
    int choice = 0;

    while (choice != 3) {
        std::cout << "1. Check a single password" << std::endl;
        std::cout << "2. Process a TSV/CSV file" << std::endl;
        std::cout << "3. Quit" << std::endl;

        std::cin >> choice;
        std::cin.ignore(10000, '\n');

        if (choice == 1) {
            std::string password;
            std::getline(std::cin, password);

            if (is_valid_password(password)) {
                std::cout << "Valid" << std::endl;
            } else {
                std::cout << "Invalid" << std::endl;
            }
        }
        else if (choice == 2) {
            std::string input_file;
            std::string output_file;

            std::getline(std::cin, input_file);
            std::getline(std::cin, output_file);

            process_file(input_file, output_file);
        }
    }
}