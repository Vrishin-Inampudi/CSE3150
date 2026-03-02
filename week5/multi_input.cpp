#include <iostream>
#include <fstream>
#include <string>


int main() {
	int count;
	std::cout<<"How many time would you like to write: " << std::endl;
	std::cin >> count;
	std::cin.ignore();
	std::ofstream file("entries.txt");//open file 
	if(!file){ //if not ok to open error
		std::cerr << "Failed to open file /n";
		return 1;}
	for (int i = 0; i < count < i++){
		std::string line; //init line
		std::cout <<"Enter your message: " << std::endl;
		std::getline(std::cin, line); //stores this line 
		file << line << std::endl; //write line to file 
	} 
	file.close()  //this isn't really needed as c++ closes the file for you after it leaves the scope
	return 0;
}














}
