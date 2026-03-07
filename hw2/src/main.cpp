#include <iostream>
#include <string>

#include "text_mode.h"
#include "add_mode.h"
#include "stats_mode.h"

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cout << "Usage: ./analyzer <mode> [arguments]" << std::endl;
        return 1;
    }

    std::string mode = argv[1];

    if (mode == "1" || mode == "text") {
        text_mode::run(argc, argv);
    }
    else if (mode == "2" || mode == "add") {
        add_mode::run(argc, argv);
    }
    else if (mode == "3" || mode == "stats") {
        stats_mode::run(argc, argv);
    }
    else {
        std::cout << "Invalid mode" << std::endl;
        return 1;
    }

    return 0;
}
