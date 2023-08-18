#include<iostream>
#include <sstream>
#include <iomanip>
#include <string>

int main(){
std::string S{"Dara"};
int age{49};
double power{33.03};

std::ostringstream OSS{};
OSS << S << age << power;
std::cout << OSS.str() << std::endl;

std::string stringObj{"Jonathan 34 34.6"};

std::stringstream SS{stringObj};
std::cout<< std::fixed << std::setprecision(2);
std::cout << std::setw(15)<< std::left << S << std::setw(10)<< std::left << age << std::setw(10)<< std::left << power << std::endl;
SS >> S >> age >> power ;
std::cout << std::setw(15)<< std::left << S << std::setw(10)<< std::left << age << std::setw(10)<< std::left << power << std::endl;

bool notDone{true};
do{
    std::stringstream SS1{};
    std::cout << "Please enter a valid integer: ";
    std::string T{};
    std::cin >> T;
    SS1 << T;
    int t{};
    double d{};
    if (SS1 >> d){
        std::cout << "You entered a floating point." << std::endl;
        std::cout << "Please enter an integer" << std::endl;
    }
    if(SS1 >> t){
        std::cout <<"correct! You entered a valid integer!" << std::endl << std::endl;
        notDone = false;
    }
    else{
        std::cout << "Enter another number!" << std::endl;
    }
}
    while(notDone);


return 0;
}
