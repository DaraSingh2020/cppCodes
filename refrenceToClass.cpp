#include <iostream>
#include <vector>

using namespace std;

class Base{
public:
virtual void SayHello()const {
cout << "Hello from Base" << endl;
}
virtual ~Base(){
}
};

class Derived1: public Base{
public:
virtual void SayHello()const override{
cout << "Hello from Derived1" << endl;
}
virtual ~Derived1(){
}
};

class Derived2: public Base{
public:
virtual void SayHello()const override{
cout << "Hello from Derived2" << endl;
}
virtual ~Derived2(){
}
};

class Derived3: public Base{
public:
virtual void SayHello()const override{
cout << "Hello from Derived3" << endl;
}
virtual ~Derived3(){
}
};

void saySomething(Base& b){
b.SayHello();
}

int main(){
Base B;
Base& b{B};
b.SayHello();

Derived1 D1;
Base& d1{D1};
d1.SayHello();

Derived2 D2;
Base& d2{D2};
d2.SayHello();

Derived3 D3;
Base& d3{D3};
d3.SayHello();

cout << "================from the loop===============" << endl;

vector<Base> V{b,d1,d2,d3};

for(Base v:V){
    v.SayHello();
}

cout << "================Using global function ===============" << endl;
saySomething(b);
saySomething(d1);
saySomething(d2);
saySomething(d3);

return 0;
}
