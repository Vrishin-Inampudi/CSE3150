#include <iostream>
#include <string>

int main(int argc, char* argv[]){

	if (argc < 2)
		return 1;
	

	int x = std::stoi(argv[1]); //converting our main input to an int 
	std::cout <<"Program intput is: " << x << std::endl;
	return 0;
}
