#include<iostream>
#include<string>
#include<queue>

class Human{

std::string Name;
int Age;
public:
Human(std::string name,int age):Name{name},Age{age}{
}
Human(const Human& H):Human(H.Name,H.Age){
}
Human():Human("Unknown",99){
}
bool operator<(const Human& H) const{
return this->Age<H.Age;
}
bool operator==(const Human& H) const{
return this->Age==H.Age;
}
bool operator>(const Human& H) const{
return this->Age>H.Age;}
~Human()=default;
std::string getName(){
return Name;
}
int getAge(){
return Age;
}
};

std::ostream& operator<<(std::ostream& os,Human& H){
os<< "Human has a name: "<< H.getName() <<" and an age: " << H.getAge();

return os;
}

int main(){
std::priority_queue<Human> P;
Human H1{"Dara",43};
Human H2{"Jax",33};
Human H3{"Jim",73};
Human H4{};
Human H5{"Jeff",89};
Human H6{"Joe",19};
Human H7{"Jaxons",35};
P.push(H1);
P.push(H2);
P.push(H3);
P.push(H4);
P.push(H5);
P.push(H6);
P.push(H7);

std::priority_queue<int> PP;
for(int i:{1,3,6,8,3,9,5}){
    PP.push(i);
}
std::cout << PP.size() << std::endl;

while(!PP.empty()){
    std::cout << PP.top() << " ";
    PP.pop();
}
std::cout << std::endl;
std::cout << H1 << std::endl;

std::cout << "========== coming from the priority queue========"<< std::endl;
std::cout << "================  Ascending Order ==============="<< std::endl;
while(!P.empty()){
    auto h1=P.top();
    P.pop();
    std::cout << h1 << std::endl;
}

return 0;
}
