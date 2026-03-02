#include <iostream>
#include <string>
#include <fstream>
//fstream is the header to read and write to files 

void read(){
	std::ifstream file("data.txt"); //input data.txt and save it as a file  
	std::string line; //init line

	while (std::getline(file, line)){ //get line uses file and prints every line  
		std::cout << line << std::endl;
	}
}




void write(){
	std::ofstream file("output.txt");
	file << "Hello output file" << std::endl;
}


int main(){
	write();
	read();
	return 0;
}
