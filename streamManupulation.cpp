#include <iostream>
#include <iomanip>

int main(){

double num{1234.5678};
std::string name{"saisoonni"};

std::cout << num << name << std::endl;

std::cout << num << std::endl;
std::cout << name << std::endl;

std::cout << std::setw(10) << num << name << std::endl;

std::cout   << std::setw(10) << num
            << std::setw(10) << name
            << std::endl;

std::cout << std::setw(10) <<std::left << num << name << std::endl;

std::cout << std::endl;
std::cout << std::setw(15)<< std::setfill('*')<< num
<< std::setw(15) << std::setfill('=') << name << std::endl;

std::cout <<std::setfill('+');
std::cout <<std::setw(15) << std::left << num
          <<std::setw(15) << std::left << num
          <<std::setw(15) << std::left << name
          <<std::setw(15) << std::left << num
          <<std::setw(15) << std::left << name << std::endl;

std::cout <<std::setfill('-');
std::cout <<std::setw(15) << std::left << num
          <<std::setw(15) << std::left << num
          <<std::setw(15) << std::left << name
          <<std::setw(15) << std::left << num
          <<std::setw(15) << std::left << name << std::endl;





return 0;
}
