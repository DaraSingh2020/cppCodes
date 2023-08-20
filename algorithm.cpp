#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
#include <numeric>
#include <iomanip>

class Person{
int Age;
std::string Name;

public:
Person()=default;
Person(std::string name, int age):Name{name},Age{age}{
}
bool operator>(const Person& rhs)const{
return this->Age>rhs.Age;
}

bool operator<(const Person& rhs) const{
return this->Age<rhs.Age;
}
bool operator==(const Person& rhs) const{
return this->Age==rhs.Age;
}
int getAge(){
return Age;
}
std::string getName(){
return Name;
}
};

std::ostream& operator<<(std::ostream& COUT,Person& P){
    COUT << "Name: " << P.getName() << ", Age: " << P.getAge();
    return COUT;
}

int main(){
Person P1{"Dara", 40};
Person P2{"Jax",23};

if(P1>P2){
std::cout << "The older person is: "<< std::endl;
std::cout << P1 << std::endl;
}
if(P2<P1){
std::cout << "The younger person is: "<< std::endl;
std::cout << P2 << std::endl;
}
Person P3=P1;
Person P4{"Jonnathan",99};
Person P5{"Larry",33};

std::list<Person> People{P1,P2,P3,P4,P5};
auto loc = std::find(People.begin(),People.end(),Person{"Jeff",99});
if(loc!=People.end()){
    std::cout << "the person as old as jeff is: "<< *loc << std::endl;
}
else{
    std::cout << "There is no one as old as Jeff here!!" << std::endl;
}

std::vector<int>V{1,2,4,6,7,7,5,3,6,7,8,5,3,2,2,6,7,8,9,0,1,1,0,9,7,5,8};
int N{1};
int counts =std::count(std::begin(V),std::end(V),N);
std::cout << "The number of occurance of " << N << " is " << counts << std::endl;

N=6;
counts =std::count(std::begin(V),std::end(V),N);
std::cout << "The number of occurance of " << N << " is " << counts << std::endl;

N=7;
counts =std::count(std::begin(V),std::end(V),N);
std::cout << "The number of occurance of " << N << " is " << counts << std::endl;

int sum{};
sum=accumulate(std::begin(V),std::end(V),sum);
std::cout << "The sum is: " << sum << std::endl;

auto location = std::max_element(std::begin(V),std::end(V));
std::cout<< "The maximum number is: " << *location << std::endl;

std::vector<int>::iterator location1 =std::min_element(std::begin(V),std::end(V));
std::cout<< "The minimum number is: " << *location1 << std::endl;

std::vector<int>V1{V};
std::cout << std::boolalpha << (V1==V) << std::endl;
std::for_each(std::begin(V),std::end(V),[](const int& x){
              std::cout << x << " ";});
              std::cout << std::endl;

std::for_each(std::begin(V1),std::end(V1),[](int& x){
             x*=x; });
std::cout << std::boolalpha << (V1==V) << std::endl;
std::for_each(std::begin(V1),std::end(V1),[](const int& x){
              std::cout << x << " ";});
              std::cout << std::endl;

auto location2 = std::find_if(std::begin(V),std::end(V),[](const int& x){
             return x==9;});
std::cout << *location2 << std::endl;

auto NN = std::count_if(std::begin(V),std::end(V),[](const int& x){
                        return x%3==0;});

std::cout << "The count of numbers divisible by 3 are: " << NN << std::endl;

bool all=std::all_of(std::cbegin(V),std::cend(V),[](const int& x){
                     return x>0;});

std::cout << "Are all numbers greater than 0: " << all << std::endl;

std::cout << "Are all numbers less than 20? " <<
            std::all_of(std::cbegin(V),std::cend(V),[](const int& x){
            return x<20;}) << std::endl;

return 0;
}
