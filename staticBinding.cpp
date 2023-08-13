#include <iostream>
#include <memory>

using namespace std;

class BaseClass{
int N;
public:
BaseClass(int n):N{n}{
cout << "Hello from our lovely base class constructor!" << endl;
}

void baseClassDisplay(){
cout << "Hello from our lovely base class display!" << endl;
}
int getNumber(){
return N;
}
void sayHello(){
cout << "Hello from baseClass!" << endl;
}
};

class DerivedClass :public BaseClass{
int N;
public:
DerivedClass(int n):BaseClass(n){
cout << "Hello from our beautiful derived class constructor!!!" << endl;
}
void DerivedClassDisplay(){
cout << "Hello from our beautiful derived class display!" << endl;
}
int getNumber(){
return N;
}
void sayHello(){
cout << "Hello from derivedClass!" << endl;
}
};


class BaseClassV{
int N;
public:
BaseClassV(int n):N{n}{
cout << "Hello from our lovely base class constructor!" << endl;
}

void baseClassDisplay(){
cout << "Hello from our lovely base class display!" << endl;
}
virtual int getNumber(){
return N;
}
virtual void sayHello(){
cout << "Hello from baseClass!" << endl;
}
};

class DerivedClassV :public BaseClassV{
int N;
public:
DerivedClassV(int n):BaseClassV(n){
cout << "Hello from our beautiful derived class constructor!!!" << endl;
}
void DerivedClassDisplay(){
cout << "Hello from our beautiful derived class display!" << endl;
}
int getNumber(){
return N;
}
void sayHello(){
cout << "Hello from derivedClass!" << endl;
}
};




class Base{
public:
void display(){
cout << "Hello from Base display!" << endl;
}
};

class Derived:public Base{
public:
void display(){
cout << "Hello from Derived display!" << endl;
}
};

void display(BaseClass& obj){
    cout << "The number in this object is: " << obj.getNumber() << endl;
    obj.sayHello();
}





int main(){
int NN=12;
BaseClass B{NN};
int MM=24;
DerivedClass D{MM};

Base b;
b.display();
Derived d;
d.display();

cout << "================B using Base Class method ====================" << endl;
B.baseClassDisplay();
cout << endl << "============D using Base Class and Derived method ==============" << endl;
D.baseClassDisplay();
D.DerivedClassDisplay();

cout << "===========================================" << endl;
display(B);
display(D);

cout << "====================Without Virtual function =======================" << endl;

BaseClass* b0_ptr = new BaseClass(13);
b0_ptr->sayHello();

BaseClass* b_ptr = new DerivedClass(92);
b_ptr->sayHello();

DerivedClass* d_ptr = new DerivedClass(45);
d_ptr->sayHello();

cout << "====================With Virtual function =======================" << endl;

BaseClassV* b0V_ptr = new BaseClassV(13);
b0V_ptr->sayHello();

BaseClassV* bV_ptr = new DerivedClassV(92);
bV_ptr->sayHello();

DerivedClassV* dV_ptr = new DerivedClassV(45);
dV_ptr->sayHello();

cout << "=================Unique Pointers =======================" << endl;
unique_ptr<BaseClass> B_ptr = make_unique<DerivedClass>(77);
B_ptr->sayHello();
cout << "=========================================================" << endl;
unique_ptr<BaseClass> B1_ptr{nullptr};
B1_ptr = make_unique<DerivedClass>(36);
B1_ptr->sayHello();

cout << "=========================================================" << endl;
unique_ptr<BaseClass> B2_ptr{nullptr};
B2_ptr = make_unique<BaseClass>(37);
B2_ptr->sayHello();

delete b_ptr;
b_ptr = nullptr;
delete d_ptr;
d_ptr = nullptr;

}
