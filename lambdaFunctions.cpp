#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>



int main(){
int N{10};
std::vector<int> V{1,2,3,4,5,6,7,8};
std::for_each(std::cbegin(V),std::cend(V),[](const int& x){
              std::cout << std::setw(7) << std::left << x << " ";});
              std::cout << std::endl;

std::for_each(std::begin(V),std::end(V),[](int& x){
              x*=x;});
std::for_each(std::cbegin(V),std::cend(V),[](const int& x){
              std::cout << std::setw(7) << std::left << x << " ";});
              std::cout << std::endl;

std::for_each(std::begin(V),std::end(V),[N](int& x){
              x*=N;});
std::for_each(std::cbegin(V),std::cend(V),[](const int& x){
              std::cout << std::setw(7) << std::left << x << " ";});
              std::cout << std::endl;

auto add = [](int a, int b)->int {return a+b;};
int A{13};
int B{24};
int c=add(A,B);

std::cout << c << std::endl;

int A1{131};
int B1{241};
int c1=add(A1,B1);

std::cout << c1 << std::endl;

auto someLambda = [N](int a, int b)->int const {return (N*(a*a+b*b));};

int A2{1};
int B2{2};
int c2=someLambda(A2,B2);
std::cout << c2 << std::endl;

auto someLambda3 = [&,N](int a, int b)->int const {return (N*(a*a+b*b));};

int A3{1};
int B3{2};
int c3=someLambda3(A3,B3);
std::cout << c3 << std::endl;

auto someLambda4 = [N](int a, int b)->int const {return (N*(a*a+b*b));};

int A4{1};
int B4{2};
int c4=someLambda4(A4,B4);
std::cout << c4 << std::endl;
int Bonus{10};

auto bonus = [&Bonus](int& g1,int& g2){
    g1+=Bonus;
    g2+=Bonus;
    };
int G1{87};
int G2{89};

std::cout << "grade1: "<< G1 << "  grade2: " << G2 << std::endl;

bonus(G1,G2);

std::cout << "grade1: "<< G1 << "  grade2: " << G2 << std::endl;


auto bonus1 = [&Bonus](int* g1,int* g2){
    *g1+=Bonus;
    *g2+=Bonus;
    };
int G11{87};
int G21{89};

std::cout << "grade1: "<< G11 << "  grade2: " << G21 << std::endl;

bonus1(&G1,&G2);

std::cout << "grade1: "<< G11 << "  grade2: " << G21 << std::endl;

N=17;
[N](int x, int y){
    std::cout << N << std::endl;}(10, 13);

N=17;
[N](int x){
    std::cout << N << std::endl;}(10);

N=17;
[N](int&& x){
    std::cout << N << std::endl;}(std::move(0));

N=17;
[&,N](const int&& x){
    std::cout << N << std::endl;}(std::move(0));

const int NN{5};
int Array[NN]{2,4,6,8,9};

[](int arr[], int S) {for(int i{0}; i<S; ++i){
std::cout << arr[i] << " ";};}(Array,NN);
std::cout << std::endl;

auto sum = [](int arr[], int S) {
    int s{0};
    for(int i{0}; i<S; ++i){
    s+=arr[i];
    std::cout << s << std::endl;
    }
    return s;};

sum(Array,NN);
std::cout << sum << std::endl;



return 0;
}
