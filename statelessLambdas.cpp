#include<iostream>
#include<string>
#include<functional>
#include<iomanip>
#include<vector>
#include<algorithm>

class Person{
std::string Name;
int Age;
public:

Person()=default;
Person(std::string name,int age):Name{name},Age{age}{
}
Person(const Person& P):Person(P.Name,P.Age){
}
std::string getName(){
return Name;
}
int getAge(){
return Age;
}
void setName(std::string name){
Name=name;
}
void setAge(int age){
Age=age;
}
bool operator<(const Person& P){
return this->Age<P.Age;
}
bool operator==(const Person& P){
return this->Age==P.Age;
}
bool operator>(const Person& P){
return this->Age>P.Age;
}
~Person()=default;
};
std::ostream& operator<<(std::ostream& os, Person& P){
os<< "Name: " << P.getName() << " Age: " << P.getAge();
return os;
}

void Test1(){
[](){std::cout << "Hello" << std::endl;}();
int X{100};
[](int X){std::cout << X << std::endl;}(X);
[](int X, int Y){std::cout << X+Y << std::endl;}(100,300);

}

void Test2(){
int X{100};
int Y{300};
auto L = [](){std::cout << "Hello Sir" << std::endl;};
L();
auto LL = [](int& X){std::cout << X << std::endl;};
LL(X);

auto LLL = [](int& X, int& Y){std::cout << X+Y<< std::endl;};
LLL(X,Y);

}

void Test3(){
    Person P1{"Jax",34};
    Person P2{"Dara",45};
    Person P3{"Jimmy",35};
    [](Person& P11,Person& P12){std::cout << P11 << std::endl;
    std::cout << P12 << std::endl;}(P1,P2);
    [](Person& P){
    P.setName("Tiffff");
    P.setAge(222);
    std::cout << P << std::endl;
    }(P3);
    auto II = [](Person& P){
    std::cout << P << std::endl;};
    II(P3);
    P3.setAge(512);
    II(P3);
}

void function_(std::vector<int> V){
for(const int v:V){
    std::cout << v << " ";
}
std::cout << std::endl;
}

void Test4(const std::vector<int>& V,std::function<void(std::vector<int>)> func){
func(V);
}

auto makeLambda(){
    auto I =[](){std::cout << "Hello from Lambda Function" << std::endl;};
return I;
}

void Test5(std::function<void(void)> makeLambda){
makeLambda();
}

void Test6(){
int X{13};
int Y{17};
double D1{13.017};
double D2{17.0568};
Person P1{"Jax",33};
Person P2{"DifDifgoofGoof",34};
std::string S1{"Diffffffffff"};
std::string S2{"Dooooooooooff"};

auto I = [](auto T1, auto T2){
std::cout <<"The first argument is: " << T1 << std::endl;
std::cout <<"The second argument is: " << T2 << std::endl;};


std::cout << std::endl<< "This is a message from Test6:" << std::endl;
I(X,Y);
I(D1,D2);
I(P1,P2);
I(S1,S2);
}

void Test7(){
std::vector<Person> V{{"Jax",45},{"Jerry",56},{"Johson",29},{"Doooof",30}};
auto V1{V};
std::cout<< std::endl;
for(auto& v:V){
    std::cout << v << std::endl;
}
std::cout<< std::endl;
std::cout<< "Sorted by age: "<<std::endl;
std::sort(std::begin(V), std::end(V));
for(auto& v:V){
    std::cout << v << std::endl;
}

std::cout<< std::endl;
for(auto& v:V1){
    std::cout << v << std::endl;
}
std::sort(std::begin(V1),std::end(V1),[](Person& P1, Person& P2){return P1.getAge()<P2.getAge();});
std::cout<< std::endl;
std::cout<< "Sorted by age: "<<std::endl;
for(auto& v:V1){
    std::cout << v << std::endl;
}

std::sort(std::begin(V1),std::end(V1),[](Person& P1, Person& P2){return P1.getName()<P2.getName();});
std::cout<< std::endl;
std::cout<< "Sorted by name: "<<std::endl;
for(auto& v:V1){
    std::cout << v << std::endl;
}



}



int main(){
Test1();
Test2();
Test3();

std::vector<int>V{23,12,34,65,77,57};
function_(V);

Test4(V,function_);
Test4(V,[](std::vector<int> V){for(const int v:V){
      std::cout << v << " ";
      std::cout << std::endl;}});

auto II = [](int &x){
std::cout << "Dara likes weird numbers like: "<< x << std::endl;};
int X{13};
II(X);

std::function<void(int&)> III = [](int &x){
std::cout << "Dara likes weird numbers like: "<< x << std::endl;};
III(X);

std::function<void(int&)> IV = [](int& x){
x*=x;
};

IV(X);
III(X);

std::function<int*(int&)> VI = [](int& Y){
int* N = new int{Y*Y};
return N;
};
auto I = makeLambda;
I();

Test6();
Test7();


return 0;
}
