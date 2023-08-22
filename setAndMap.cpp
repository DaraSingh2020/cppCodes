#include<iostream>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<unordered_map>

struct Person{
std::string Name;
int Age;
Person()=default;
Person(std::string name, int age):Name{name},Age{age}{
}
Person(const Person& P):Person(P.Name, P.Age){
}
~Person(){
}
bool operator<(const Person& P)const{
    return this->Age<P.Age;
}
bool operator==(const Person& P)const{
return this->Age==P.Age && this->Name==P.Name;
}
bool operator>(const Person& P)const{
return this->Age>P.Age;
}
bool operator!=(const Person& P)const{
return this->Age!=P.Age;
}
};

std::ostream& operator<<(std::ostream& os, const Person& P){
os<< "Name: " <<P.Name << " Age: " << P.Age;
return os;
}


int main(){
Person P;
std::cout << "Garbage: " << P <<  std::endl;

Person P1{};
std::cout << "No garbage or at least zero " << P1 << std::endl;

Person p3{"Jerry",33};
Person p4{"Jax",45};
Person p5{"Jim",42};
Person p6{"Jonnathan",4};
Person p7{"Jeeff",45};
Person p8{"Jeree",85};
Person p9{"Laxe",7};
Person p10{"Tim",34};
Person p11{"Larrry",34};
Person p12{"Krry",31};
std::set<Person> S{{"Dara",40},{"Jax",33},p3,p4,p5,p6};
std::list<Person> L{p3,p4,p5,p6,p7,p8};
std::vector<Person> V1{p3,p4,p5,p6,p7,p8,p9,p10,p11};
std::vector<Person> V2{p3,p4,p5,p6,p7,p8,p9,p10,p11};

S.insert({"Jerry",19});
S.insert(p3);
S.insert(p4);
S.insert(p5);

std::vector<int>V{1,3,5,3,5,7,6,7,8,8,4,3,4,5,6,6,7,8,8,9,7,6,4,4,6,7,8,9,6,5,4,4,5,7,6,8,9,9};

std::set<int> S2{std::begin(V),std::end(V)};
std::multiset<int> S3{std::begin(V),std::end(V)};
std::cout << S2.count(3) << std::endl;
std::cout << S3.count(3) << std::endl;

auto it=L.begin();
while(it!=L.end()){
    std::cout << *it << std::endl;
    ++it;
}
std::cout << "=========== printing sorted Person in a vector ==============="<< std::endl;
std::sort(std::begin(V1),std::end(V1));

for(int i{0}; i<V1.size();++i){
    std::cout << V1.at(i) << std::endl;
}
S.emplace("Torryyy",55);

std::pair result = S.insert(p11);

std::cout << std::boolalpha << std::endl;
std::cout << "auto result = S.insert(p11)" << std::endl;
std::cout << "First: " << *(result.first) << " second: "<< result.second << std::endl;

std::pair result1 = S.insert(p11);

std::cout << std::boolalpha << std::endl;
std::cout << "auto result = S.insert(p10)" << std::endl;
std::cout << "First: " << *(result1.first) << " second: "<< result1.second << std::endl;

result = S.insert(p10);

std::cout << std::boolalpha << std::endl;
std::cout << "auto result = S.insert(p11)" << std::endl;
std::cout << "First: " << *result.first << " second: "<< result.second << std::endl;


V1.push_back({"Masiiii",34});

L.push_back({"Masiiii",34});
L.push_front({"Masiiii",34});
S.insert({"Masiiii",34});

V1.emplace_back("Torryyy",55);

std::cout << "=========== printing sorted Person in a vector ==============="<< std::endl;
for(int i{0}; i<V1.size();++i){
    std::cout << V1.at(i) << std::endl;
}

std::cout << "=========== traversing through a set ==============="<< std::endl;
std::set<Person>::iterator IT2 = S.begin();
while(IT2!=S.end()){
    std::cout << *IT2 << std::endl;
    ++IT2;
}

std::cout << "=========== Defining a map of person object versus int ==============="<< std::endl << std::endl;
std::map<Person,int>M{{{"Dara",34},1},{{"Jax",35},3},{{"Jerry",25},5},{{"larry",56},8},{p4,4},{p7,9},{p8,5},{p5,89},{p11,12},{p10,9},{p9,3}};

for(std::map<Person,int>::iterator i3{M.begin()};i3!=M.end();++i3){
    std::cout << (*i3).first << " value:  " << (*i3).second<< std::endl;
}

if(M.find(p8)!=M.end()){
    std::cout << p8 << "  " << M.at(p8)<<std::endl;
}

M[p5]=6;

if(M.find(p5)!=M.end()){
    std::cout << p5 << "  " << M.at(p5)<<std::endl;
}

if(M.find(p5)!=M.end()){
    M.erase(p5);
}

std::pair<Person,int> pair1{p5,7};
M.insert(std::move(pair1));

if(M.find(p5)!=M.end()){
    std::cout << p5 << "  " << M.at(p5)<<std::endl;
}

if(M.find(p5)!=M.end()){
    M.erase(p5);
}

if(M.find(p5)==M.end()){
    std::cout << "Deleted " << std::endl;
}

M[p5]=9;

if(M.find(p5)!=M.end()){
    std::cout << p5 << "  " << M.at(p5)<<std::endl;
}

std::map<Person,int>MM{{{"Dara",34},1},{{"Jax",35},3},{{"Jerry",25},5},{{"larry",56},8},{p4,4},{p7,9},{p8,5},{p5,89},{p11,12},{p10,9},{p9,3}};

std::unordered_map<std::string,std::set<int>>M1{{"Jax",{2,4,6}},{"Jim",{4,7,3,5,6}},{"Tom",{5,7,9,5,9}}};

std::set<int>S5= M1["Jax"];
for(auto s:S5){
    std::cout << s << " ";
}
std::cout << std::endl;

for(const auto& s:S5){
    std::cout << s << " ";
}
std::cout << std::endl;

auto S6= M1["Jax"];
for(const auto& s:S6){
    std::cout << s << " ";
}
std::cout << std::endl;

for(const int& s:S6){
    std::cout << s << " ";
}
std::cout << std::endl;

std::unordered_map<std::string,std::set<int>>::iterator it5{M1.begin()};
it5 = M1.find("Tom");
if(it5!=M1.end()){
    std::cout << "Found Tom!!" << std::endl;
    for(auto s:it5->second){
        std::cout << s << " ";
    }
    std::cout << std::endl;
    it5->second={2,4,5,6,7,9,12,45,67,67};
}

if(it5!=M1.end()){
    std::cout << "Found Tom!!" << std::endl;
    for(auto s:it5->second){
        std::cout << s << " ";
    }
}


return 0;
}
