#include <iostream>
#include <string>

int main(int argc,char* argv[]){
	if (argc < 3){
		return 1;
	}

	int a = std::stoi(argv[1]);
	int b = std::stoi(argv[2]);
	std::cout << a + b << std::endl;
	return 0;
}
