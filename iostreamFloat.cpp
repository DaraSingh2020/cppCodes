#include <iostream>
#include <iomanip>

int main(){
double N1{123456789.987654321};
double N2{12345.6789};
double N3{123.45};

int precision = std::cout.precision();

std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::setprecision(2) << std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::setprecision(5) << std:: endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;


std::cout << std::setprecision(9) << std:: endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::fixed << std::setprecision(3) << std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::setprecision(3) <<std::scientific << std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout <<std::uppercase << std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout.unsetf(std::ios_base::fixed);
std::cout.unsetf(std::ios_base::scientific);
std::cout.unsetf(std::ios_base::uppercase);
std::cout << std::endl;

std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::defaultfloat <<std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::setprecision(precision) << std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::setprecision(10) << std::showpoint<< std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

std::cout << std::setprecision(precision) << std::endl;
std::cout << N1 << std::endl << N2 << std::endl << N3 << std::endl;

return 0;
}
