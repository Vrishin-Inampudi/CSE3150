# include < fstream >
# include < string >
int main () {
	std::ifstream file("data.txt");
	std::stringline;
	while(std::getline(file,line)){
		std::cout<<line<<std::endl;
	}
}





