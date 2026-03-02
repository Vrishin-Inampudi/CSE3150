#include <iostream>
#include <stream>
#include <fstream>

void check_open(){
	std::ifstream file("data.txt")
	if (!file) {
		std:: cerr << "Failed to open file\n";
		file.close();
	}	
}
