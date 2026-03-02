#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


int main(){


	std::if stream file("data.txt");
	

	if (!file) {
		std::cerr <<"Failed to open file /n";
		return 1;

	std::string line 
	int line_num = 1
	

	while(std::getline(file, line)){//while we haven't reached the end 
		std::istringstream iss(line); //parse every line 
		std::string word; //init word
		int wordCount = 0; //init wordCount
		while( iss >> word){ //while iss can output to word (we still have words)
			wordCount++;//increment
		}
		std::cout << "Line: " << line_num << wordCount <<" words\n";
		line_num++; //move to next line
	}

	return 0;
}






	}









