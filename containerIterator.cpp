#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <list>

void displayVector(const std::vector<int>& V){
    std::cout << "[";
    for(auto const& v:V){
        std::cout << v << " ";
    }
    std::cout << "]" << std::endl;
}

void Jax(){
    std::cout << "\n===============Message from Jax iterator=================" << std::endl;
    std::vector<int> N{1,2,3,4,5};
    auto it = N.begin();
    std::cout << *it << std::endl;

    it++;
    std::cout << *it << std::endl;

    it+=2;
    std::cout << *it << std::endl;

    it-=2;
    std::cout << *it << std::endl;

    it =N.end()-1;
    std::cout << *it << std::endl;
}

void Jimmy(){
std::cout << "========= message from Jimmy iterator==========" << std::endl;
std::vector<std::string>S{"Dara","?","Jimmy", "X", "Jeff","oofOOf", "tadaaa"};
std::vector<std::string>::const_iterator I;
I=S.begin();
std::cout << "[";
while(I!=S.end()){
    std::cout << *I << " ";
    ++I;
}
std::cout <<"]" << std::endl << std::endl;

std::vector<std::string>::iterator IT;
IT=S.begin();
std::cout << "[";
while(IT!=S.end()){
    *IT="XXX";
    std::cout << *IT << " ";
    ++IT;
}
std::cout <<"]" << std::endl << std::endl;

I=S.begin();
std::cout << "[";
while(I!=S.end()){

    std::cout << *I << " ";
    ++I;
}
std::cout <<"]" << std::endl << std::endl;
}

void JonnathanIdiot(){
std::vector<double>V{23.4,56.3,67.9,34.5,22.5,80997.55,34.12};
auto it=V.crbegin();

std::cout <<"{"<< std::endl <<std::endl;
while(it!= V.crend()){
    std::cout << std::setw(15) << std::left << std::setprecision(3) << std::fixed << *it ;
    ++it;
}
std::cout <<"}"<< std::endl<<std::endl;

auto it2=V.begin();
std::cout <<"{"<< std::endl<<std::endl;
while(it2!= V.end()){
    std::cout << std::setw(15) << std::left << std::setprecision(3) << std::fixed << *it2 ;
    *it2+=14;
    ++it2;
}
std::cout <<"}"<< std::endl<<std::endl;

auto it1=V.cbegin();
std::cout <<"["<< std::endl<<std::endl;
while(it1!= V.cend()){
    std::cout << std::setw(15) << std::left << std::setprecision(3) << std::fixed << *it1 ;

    ++it1;
}
std::cout <<"]"<< std::endl<<std::endl;
}

void Jeff(){
std::map<std::string, std::string> M{{"Dara","D"},{"Loolika","XX"},{"SISI SOOOSOO","BMX"}};
auto it = M.cbegin();
std::cout << "[";
while(it!=M.end()){
    std::cout << "{ " <<it->first << "\t"<< it->second << "}\t";
    ++it;
}
std::cout << "]";
}


int main(){
std::vector<int> V{1,2,3,4,5};
displayVector(V);
Jax();
Jimmy();
JonnathanIdiot();
Jeff();


return 0;
}
