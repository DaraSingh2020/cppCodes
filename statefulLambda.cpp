#include<iostream>
#include<functional>
#include<string>
#include<vector>
#include<algorithm>


void Test1(){
int X{17};
int t{13};

[X](int T){
//    X*=X;
std::cout << "Captured by value and not changed! " << X <<" "<< T<< std::endl;
}(t);

[X](int T)mutable {
    X*=X;
std::cout << "Captured by value and not changed! " << X <<" "<< T<< std::endl;
}(t);

[X](int T){
    T*=X;
    std::cout<<"captured by refrence and modified: "<< X << " " << T << std::endl;
}(t);

}


void Test2(){
int X{19};
int t{13};
std::cout << std::endl<< "=================This is a message from Test2================" << std::endl;
auto I =[X](int T)mutable{
        X+=X;
        T+=T;
std::cout << "Captured by value and not changed! " << X <<" "<< T<< std::endl;
};
I(t);
std::cout << "outside the function " << X <<" "<< t<< std::endl;
I(t);

std::cout << "outside the function " << X <<" "<< t<< std::endl;

}


void Test3(){
int X{19};
int t{13};
std::cout << std::endl<< "=================This is a message from Test3================" << std::endl;
auto I =[&X](int T)mutable{
        X+=X;
        T+=T;
std::cout << "Captured by value and not changed! " << X <<" "<< T<< std::endl;
};
I(t);
std::cout << "outside the function " << X <<" "<< t<< std::endl;
I(t);

std::cout << "outside the function " << X <<" "<< t<< std::endl;

}

void Test4(){
int X{19};
int t{13};
std::cout << std::endl<< "=================This is a message from Test4================" << std::endl;
auto I =[=](int T)mutable{
        X+=X;
        T+=T;
std::cout << "Captured by value and not changed! " << X <<" "<< T<< std::endl;
};
I(t);
std::cout << "outside the function " << X <<" "<< t<< std::endl;
I(t);

std::cout << "outside the function " << X <<" "<< t<< std::endl;

}

void Test5(){
int X{19};
int t{13};
std::cout << std::endl<< "=================This is a message from Test5================" << std::endl;
auto I =[&](int T)mutable{
        X+=X;
        T+=T;
std::cout << "Captured by value and not changed! " << X <<" "<< T<< std::endl;
};
I(t);
std::cout << "outside the function " << X <<" "<< t<< std::endl;
I(t);

std::cout << "outside the function " << X <<" "<< t<< std::endl;

}

void Test6(){
int X{19};
int t{13};
std::cout << std::endl<< "=================This is a message from Test6================" << std::endl;
auto I =[&,X](int T)mutable{
        X+=X;
        T+=T;
std::cout << "Captured by value and not changed! " << X <<" "<< T<< std::endl;
};
I(t);
std::cout << "outside the function " << X <<" "<< t<< std::endl;
I(t);

std::cout << "outside the function " << X <<" "<< t<< std::endl;

}

class Person{
friend std::ostream& operator<<(std::ostream& os, const Person& P);
int Age;
std::string Name;
public:
Person()=default;
Person(std::string name, int age):Name{name},Age{age}{
}
Person(const Person& P):Person(P.Name, P.Age){
}
void setName(std::string name){
Name=name;
}
void setAge(int age){
Age=age;
}
std::string getName(){
return Name;
}
int getAge(){
return Age;
}

std::function<void(std::string,int)> changePerson() {
   return [this](std::string name, int age) {Age=age;Name=name;};
}

};
std::ostream& operator<<(std::ostream& os, const Person& P){
os << "[ Name: " << P.Name << " ,Age: " << P.Age << " ]";
return os;
}




int main(){

Test1();
Test2();
Test3();
Test4();
Test5();
Test6();

return 0;
}
