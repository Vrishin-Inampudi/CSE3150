#include <iostream>
#include <vector>
#include <string>
#include <sstream>


void printScores(const std::vector<int>& scores);
int highestScore(const std::vector<int>& scores);
double averageScore(const std::vector<int>& scores);
int countPassing(const std::vector<int>& scores, int threshold);

//argc is the number of arguments passed 
//argv is the actual arguments 
int main(int argc, char* argv[]){
    if(argc != 3){
        std::cerr << "Too many arguments!";
        return 1;
    }
    if(std::stoi(argv[1]) < 0){
        std::cerr << "pick a positive number";
    }
    int x = std::stoi(argv[1]); //string to integer
    std::string name = argv[2]; //store the name in string 
    std::cout << "Enter quiz scores on one line: " << std::endl;
    std::string s;
    std::getline(std::cin,s); //uses get line to store the entire line in s 
    std::stringstream num(s); //string stream parses the line to store values into t, t becomes a variable too 
    std::vector <int> v;
    int number;
    while(num >> number){
        v.push_back(number);
    }
    printScores(v);
    int max = highestScore(v);
    double average = averageScore(v);
    int passing = countPassing(v,x);
    return 0;
}

void printScores(const std::vector<int>& scores){
    for(int i = 0; i < scores.size(); i++){
        std::cout << scores.at(i) << std::endl;
    }
}

int highestScore(const std::vector<int>& scores){
    int max = scores.at(0);
    for(int i = 0; i < scores.size(); i++){
        if(max<scores.at(i)){
            max = scores.at(i);
        }
    }
    return max;
}
double averageScore(const std::vector<int>& scores){
    double average = {};
    for(int i = 0; i < scores.size(); i++){
        average += scores.at(i);
    }
    return average /= scores.size();
}

int countPassing(const std::vector<int>& scores, int threshold){
    int passing = 0;
    for(int i = 0; i < scores.size(); i++){
        if(scores.at(i) >= threshold){
            passing++;
        }
    }
    return passing;


}
 