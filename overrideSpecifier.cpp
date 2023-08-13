#include <iostream>

using namespace std;

class Base{
public:
virtual void sayHello() const {
cout << "Hello from base class" << endl;
}
virtual ~Base(){
}
};

class Derived1:public Base {
public:
virtual void sayHello() const override {
cout << "Hello from Derived1 class" << endl;
}
virtual ~Derived1(){
}
};

class Derived2:public Base{
public:
virtual void sayHello()const override {
cout << "Hello from Derived2 class" << endl;
}
virtual ~Derived2(){
}
};

int main(){

Base* b_ptr = new Base();
b_ptr->sayHello();

Base* d1_ptr = new Derived1();
d1_ptr->sayHello();

Base* d2_ptr = new Derived2();
d2_ptr->sayHello();

delete b_ptr;
delete d1_ptr;
delete d2_ptr;
}
