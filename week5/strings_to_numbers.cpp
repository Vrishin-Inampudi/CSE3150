#include <iostream>
#include <string>


int main(){
	//std::stoi (string to int)
	//std::stod (string to double)
	//std::stol (string to long)
	int score = 95;
	std::string points = "Score is " + std::to_string(score);
	std::cout << points << std::endl;

	std::string s = "42";
	int x = std::stoi(s);
	std::cout << x << x + 10 << std::endl;
	return 0;
}
