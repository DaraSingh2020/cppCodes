#include<iostream>
#include<array>
#include<algorithm>
#include<numeric>

template<int T>
void display(std::array<int, T>& a){
for(int i{0}; i<T;++i){
    std::cout << a.at(i) <<" ";
}
std::cout<<std::endl;
}


int main(){
std::array<int,23> A{2,3,6,8,3,4,5,6,9,0,7,4,3,2,3,4,5,6,7,6,8,9,2};
std::array<std::string,4> S{"Dara", "Jax", "Johny", "Jimmy"};

std::for_each(std::cbegin(S),std::cend(S),[](const auto& s){
              std::cout << s << std::endl;});

std::for_each(std::begin(S),std::end(S),[](auto& s){
                     s+=" Singh";});

std::for_each(std::begin(S),std::end(S),[](const auto& s){
              std::cout << s << std::endl;});

bool anyOf=std::any_of(std::begin(A),std::end(A),[](const int& n){
                  return n>=9;});

std::cout << std::boolalpha << anyOf <<std::endl;

display<23>(A);

std::array<int,23> A1;
display<23>(A1);

std::array<int,23> A2{};
display<23>(A2);

std::array<int,23> A3{};
std::fill(std::begin(A3),std::end(A3),100);
display<23>(A3);

std::array<int,23> A4{500};
std::fill(std::begin(A4),std::end(A4),100);
display<23>(A4);

std::array<int,23> A5{500};
display<23>(A5);

std::cout <<std::endl<< "======================Before swapping=================="<<std::endl;
display<23>(A5);
display<23>(A4);
std::cout <<std::endl<< "==========================swapping===================="<<std::endl;
A5.swap(A4);
display<23>(A5);
display<23>(A4);

A5.at(1)=345;
A5.at(2)=265;
display<23>(A5);
int* ptr{nullptr};
ptr=A5.data();
std::cout << ptr << " " << *ptr << " " << *(++ptr) << " " << std::endl;

std::array<int,23>A6{A};
display<23>(A6);
std::sort(std::begin(A6),std::end(A6));
display<23>(A6);

std::cout << std::endl << std::endl;
display<23>(A);
std::cout<< "min: " << *(std::min(std::begin(A),std::end(A))) << std::endl;
std::cout<< "max: " << *(std::max(std::begin(A),std::end(A))) << std::endl;

std::cout<< "min: " << *(std::min_element(std::begin(A),std::end(A))) << std::endl;
std::cout<< "max: " << *(std::max_element(std::begin(A),std::end(A))) << std::endl;

int sum =std::accumulate(std::begin(A),std::end(A),0);
std::cout << "sum: " << sum << std::endl;


return 0;
}
