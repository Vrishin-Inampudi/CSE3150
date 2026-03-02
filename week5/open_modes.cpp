#include <iostream>
#include <string>
#include <fstream>


//std::ios::in -- read
//std::ios::out -- write
//std::ios::app -- append
//std::ios::binary -- binary mode
//std::ios::trunc -- trincate file 
//std::ios::ate -- start at end 


void r_w(){

	std::fstream file(
		"data.txt",
		std::ios::in | std::ios::out //read or write
	);
	//by default ofstream is out | trunc
}

