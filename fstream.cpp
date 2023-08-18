#include<iostream>
#include<iomanip>
#include<fstream>


int main(){

std::fstream daraFile {
"test1.txt",
std::ios::in
};
if(daraFile.is_open()){
    std::cout<< "<<=========== daraFile is open ===============>>" << std::endl;
    std::string SS{};
    while(!daraFile.eof()){
        std::getline(daraFile,SS);
        std::cout << SS << std::endl;
    }
    std::cout << std::endl;
    daraFile.close();
}
if(!daraFile.is_open()){
    std::cout << "This file is closed!!" << std::endl << std::endl;
}

std::ifstream daraFile1 {
"test2.txt",
std::ios::in
};
if(daraFile1.is_open()){
    std::cout<< "<<=========== daraFile1 is open ===============>>"  << std::endl;
    std::string SS{};
    std::getline(daraFile1,SS);
    std::cout << SS << std::endl;
}
if(!daraFile.is_open()){
    std::cout << "This file is closed!!" << std::endl << std::endl;
}

std::ifstream daraFile2;
std::string fileName;
std::cin >>fileName;


std::string line1{};
std::string line2{};
daraFile2.open(fileName);
if(daraFile2.is_open()){
    std::cout<< "daraFile2 is open" << std::endl;
    std::getline(daraFile2, line1);
    std::cout << line1 << std::endl;
    std::getline(daraFile2, line2);
    std::cout << line2 << std::endl;
    daraFile2.close();
}
if(daraFile2.is_open()){
    std::cout<< "daraFile2 is open" << std::endl;
}
else{
    std::cout<< "daraFile2 is closed now!!!!!!" << std::endl;
}

char CH{};
std::ifstream daraFile3{
"test1.txt",
std::ios::in
};
if(daraFile3.is_open()){
    std::cout << "This new file is open!!" << std::endl << std::endl;
}
while(daraFile3.get(CH)){
    if(CH==' '){
        std::cout <<'*';
    }
    else if (CH==toupper(CH)){
        std::cout << '#';
    }
    else {
        std::cout << CH;
    }
}
daraFile3.close();

std::cout << std::endl;

std::ifstream daraFile4{
"test1.txt",
std::ios::in
};
if(daraFile4.is_open()){
    std::cout<<std::endl<< "Hurray!!! Even this file is open!!!" << std::endl << std::endl;
}
std::string SS5{};
while(daraFile4>>SS5){
    std::cout << SS5 << " * ";
}
std::cout << std::endl;
daraFile4.close();
if(!daraFile4.is_open()){
    std::cout << "successful file closing!!" << std::endl;
}


return 0;
}
