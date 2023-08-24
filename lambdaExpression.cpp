#include<iostream>
#include<functional>
#include<iomanip>
#include<vector>



std::function<void(int)> lambdaFunction1(){
return [](int x){
std::cout << x << std::endl;
};
}

std::function<void(int)> lambdaFunction(const int& x){
return [](int x){
std::cout << x << std::endl;
};
}

std::function<void(void)> lambdaFunction2(const int& x){
return [&,x](){
std::cout << x << std::endl;
};
}

std::function<int(void)> lambdaFunction3(const int& x){
return [&,x](){
return x*x;
};
}

std::function<int(int)> Squaring(int& X){
return [](int X){X*=X;
return X;};
}


int multiplyStuff(int a, int b){
return a*b;
}

bool isEven(const int& N){
if(N%2==0){
    return true;
}
return false;
}

void printIfEven(std::vector<int>&V,int(*ptr_isEven)(void)){
    std::cout << std::boolalpha << std::endl;
for(const auto& v:V){
    std::cout << v << "\t"  << std::endl;
}
}


int main(){

const int n{3};
int numbers[n]{10,20,30};

auto sum = [](int N[], int n){
int s{0};
for(int i{0}; i<n; ++i){
    s+=N[i];
}
return s;
};
std::cout << "Sum of the array: " << sum(numbers,3) << std::endl;


std::vector<int>V{10,20,23};
auto sum1 = [V](){
int s{0};
for(int i{0}; i<V.size(); ++i){
    s+=V.at(i);
}
return s;
};
std::cout << "Sum of the vector is: "<< sum1() << std::endl;

auto L = [](int*x){std::cout <<"The value is passed by the pointer parameter: "<< *x << std::endl;};

int X{13};
L(&X);

int* X1{nullptr};
X1=new int(17);
L(X1);


auto squareN = [](int* n1){(*n1)*=(*n1);};

squareN(X1);
L(X1);

L(&X);
[](int* n1){(*n1)*=(*n1);}(&X);
L(&X);


L(X1);
[](int* n1){(*n1)*=(*n1);}(X1);
L(X1);


std::vector<int>V2{23,34,56};

[](const std::vector<int>& X){
for(const auto& x:X){
    std::cout << x << " ";
}
}(V2);
std::cout << std::endl;

auto lambdaX = [](std::vector<int>& X){
for(auto& x:X){
    x*=x;
}
};
lambdaX(V2);

[](const std::vector<int>& X){
for(const auto& x:X){
    std::cout << x << " ";
}
}(V2);
std::cout << std::endl;


auto displayerAny = [](auto& X){std::cout << "Display thing is: " << X << std::endl;};
displayerAny("Dara");
int SS{23474};
displayerAny(SS);
double DD{34.6455};
displayerAny(DD);
char C{'='};
displayerAny(C);


std::cout << "lambda function in a function returns: " << std::endl;
lambdaFunction1()(3);

std::cout << "Pay attention! NNN is redundant!" << std::endl;
int NNN{16};
lambdaFunction(NNN)(3);

std::cout << "lambda function in a function returns called squaring: " << Squaring(NNN)(3) << std::endl;

std::cout << "lambda function in a function returns NNN passed by capture clause: "  << std::endl;
lambdaFunction2(NNN)();


std::cout << "lambda function in a function returns NNN passed by capture clause: "  << lambdaFunction3(NNN)() <<  std::endl;

std::cout << "=================================================" << std::endl;
int N5{3};
int N6{8};
std::cout << "Multiplication of " << N5 << " and "<< N6 << " is "<< multiplyStuff(N5,N6) << std::endl;

int(*ptr_to_function)(int,int){nullptr};
ptr_to_function = multiplyStuff;


std::cout << "Multiplication of " << N5 << " and "<< N6 << " is "<< ptr_to_function(N5,N6) << std::endl;



delete X1;

return 0;
}
