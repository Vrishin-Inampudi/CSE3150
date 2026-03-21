#include "audit_mode.h"

int main(int argc, char* argv[]) {
    if (argc == 3) {
        process_file(argv[1], argv[2]);
        return 0;
    }

    run_menu();
    return 0;
}