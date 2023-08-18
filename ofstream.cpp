#include <iostream>
#include <fstream>
#include <iomanip>

int main(){

std::string fileName{"someFile.txt"};
std::ifstream daraReader{fileName,std::ios::in};
if(daraReader.is_open()){
    std::string S;
    /*while(daraReader>>S){
        std::cout << S << std::endl;
    }*/
    while(std::getline(daraReader,S)){
        std::cout << S << std::endl;
    }
}
else {
    std::cout << "File wasn\'t read! This is an error!!!" << std::endl;
    return 1;
}
daraReader.close();


std::ofstream daraWriter {fileName,std::ios::app};
if(daraWriter.is_open()){
    std::string W;
    std::cout << std::endl << "This file is open now!!" << std::endl;
    std::getline(std::cin,W);
    daraWriter << W << std::endl;
}
else{
    std::cerr <<"Error in opening the file!!" << std::endl;
    return 1;
}

daraWriter.close();

std::ifstream daraReader2{fileName,std::ios::in};
if(daraReader2.is_open()){
    char C{};
    while(daraReader2.get(C)){
        std::cout<< C;
    }
}
else{
    std::cerr << "Error in opening this particular file!!" << std::endl;
}
daraReader2.close();
std::cout << "File closed" << std::endl << std::endl;

std::string fileNameCopy{"someFileCopy.txt"};
std::ifstream daraReader3{fileName,std::ios::in};
std::ofstream daraWriter3(fileNameCopy, std::ios::trunc);
if(!daraReader3.is_open() ||!daraWriter3.is_open()){
    std::cerr << "Can\'t open the file!" << std::endl;
}
else{
    std::string SS{};
    while(std::getline(daraReader3,SS)){
        daraWriter3 << SS << std::endl;
    }
}
std::cout << "=========================" << std::endl;
std::cout << "file copy was successful!" << std::endl;
std::cout << "=========================" << std::endl;
daraReader3.close();
daraWriter3.close();



return 0;
}
