#include <iostream>
#include <iomanip>

int main(){

int N{13};
int M{13};
int K{26};

std::cout << (N==M) << std::endl;
std::cout << (N==K/2) << std::endl;
std::cout << (K==M) << std::endl;

std::cout << std::boolalpha << std::endl;

std::cout << (N==M) << std::endl;
std::cout << (N==K/2) << std::endl;
std::cout << (K==M) << std::endl;

std::cout << std::noboolalpha << std::endl;

std::cout << (N==M) << std::endl;
std::cout << (N==K/2) << std::endl;
std::cout << (K==M) << std::endl;

std::cout << std::boolalpha << std::endl;

std::cout << (N==M) << std::endl;
std::cout << (N==K/2) << std::endl;
std::cout << (K==M) << std::endl;

std::cout << std::resetiosflags(std::ios::boolalpha) << std::endl;

std::cout << (N==M) << std::endl;
std::cout << (N==K/2) << std::endl;
std::cout << (K==M) << std::endl;

std::cout << std::setw(50) << std::endl;
std::cout << 34+4*2.44 << std:: endl;

std::cout << std::resetiosflags(std::ios_base::adjustfield) << std::endl;
std::cout << 34+4*2.44 << std:: endl;

int A{255};

std::cout << std::dec << A << std::endl;
std::cout << std::hex << A << std::endl;
std::cout << std::oct << A << std::endl;

std::cout << std::resetiosflags(std::ios_base::dec) << std::endl;
std::cout << A << std::endl;
std::cout << std::dec << A << std::endl;

std::cout << std::showbase << std::endl;
std::cout << std::dec << A << std::endl;
std::cout << std::hex << A << std::endl;
std::cout << std::oct << A << std::endl;
std::cout <<std::noshowbase << std::dec << A << std::endl;

std::cout <<std::uppercase << std::endl;
std::cout << "Dara" << std::endl;
std::cout << std::hex << A << std::endl;

std::cout <<std::nouppercase << std::endl;
std::cout<< A << std::endl;
std::cout << std::dec << A << std::endl;

std::cout << std::showpos << A << std::endl;
std::cout << std::noshowpos <<A <<std::endl;







return 0;
}
