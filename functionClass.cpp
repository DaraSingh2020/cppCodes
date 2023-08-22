#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>

class Multiplier{
int N;
public:
Multiplier(int n):N{n}{
}
int operator()(int n){
return N*n;
}
~Multiplier()=default;
};

struct MultiplierM{
int N;
MultiplierM(int n):N{n}{
}
void operator()(const int& n){
N*=n;
}
~MultiplierM()=default;
};


std::ostream& operator<<(std::ostream& os,const std::vector<int>& V){
for(int i{0}; i<V.size();++i){
    os << V.at(i) << " ";
}
return os;
}

void message(const std::string& S){
std::cout << S << std::endl;
}

void multiplicator( int& N){
N*=19;
}


template<typename T>
struct displayer{
displayer()=default;
void operator()(const T& t){
std::cout << t << "  ";
}

};

struct SquareFunctor{
void operator()(int N){
std::cout <<"The square of "<< N << " is " << N*N << std::endl;
}
};


int main(){
Multiplier M{10};
std::vector<int>V{10,20,30,40};
std::vector<std::string> V2{"Jax", "Jimmy", "Jakson", "Jonnathan"};
std::string S{"Before multiplication:"};

message(S);
std::cout << V << std::endl;
std::transform(std::begin(V),std::end(V), std::begin(V),M);
message("After multiplication by 10:");
std::cout << V << std::endl;

std::transform(std::begin(V), std::end(V),std::begin(V),Multiplier{13});
message("After multiplication by 13:");
std::cout << V << std::endl;

std::for_each(std::begin(V), std::end(V),[](int& N){
              return N*=17;});
message("After multiplication by 17:");
std::cout << V << std::endl;

std::for_each(std::begin(V),std::end(V), multiplicator);
message("After multiplication by 19:");
std::cout << V << std::endl;

displayer<std::string> D;
D("This is a message from the displayer class function!");

int N1{77};
Multiplier M1{100};
int N2 = M1(N1);
displayer<int> D1;
std::cout << std::endl;
D1(N1);
std::cout << std::endl;
D1(N2);
std::cout << std::endl;
MultiplierM MM(7);
D("Another class:");
D1(MM.N);
std::cout << std::endl;
MM(N2);
std::cout << std::endl;
D1(MM.N);

std::for_each(std::begin(V2),std::end(V2),displayer<std::string>());
std::cout << std::endl;
std::for_each(std::begin(V),std::end(V),displayer<int>());
std::cout << std::endl;

SquareFunctor SQ;
SQ(5);
SQ(7);
std::vector<int>V5{10,20,30,40};
std::for_each(std::begin(V5),std::end(V5),SQ);

std::vector<int>V6{1,2,3,4,5,6,7};
std::for_each(std::begin(V6),std::end(V6),[](int &x){
              x*=x;});
std::for_each(std::begin(V6),std::end(V6),SQ);


std::vector<int>V7{1,2,3,4,5,6,7};
std::for_each(std::begin(V7),std::end(V7),[](int &x){
              return std::move(x*x);});
std::for_each(std::begin(V7),std::end(V7),SQ);

return 0;
}
