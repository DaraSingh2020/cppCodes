#include <iostream>
#include <fstream>
#include <iomanip>

int main(){
std::string S{};
std::string keys{};

std::ifstream daraReader{"Grades.txt",std::ios::in};
if(daraReader.is_open()){
    std::cout << "=========== Let\'s Grade Now ================" << std::endl;
    std::cout << std::setw(0) << "Names"<< std::setw(36)<< std::right << "Grades"<< std::endl;
    daraReader>>keys;
    bool readingName{true};
    while(daraReader>>S){
            if(readingName){
                std::cout << std::setw(40) << std::left << S;
                readingName=false;
                continue;
            }
            int grade{};
        for(int i{0}; i<keys.size();i++){
            if(S.at(i)==keys.at(i)){
                ++grade;
            }
        }
        std::cout<< grade << std::endl;
        readingName=true;
    }
}
else {
    std::cerr << "File not Opened!" << std::endl;
    return 1;
}

return 0;
}
