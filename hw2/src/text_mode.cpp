#include <iostream>


namespace text_mode{

	void run(int argc, char* argv[]){

		if(argc < 4){
			std::cerr << "Incorrect number of arguments";
			return 1;		
		}
		std::string og_String;
		og_String = argv[3];
		std::cout<< og_String << std::endl;
	}









}
