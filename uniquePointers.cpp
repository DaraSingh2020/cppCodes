#include <iostream>
#include <memory>
#include <iomanip>
#include <vector>

using namespace std;

class B{
    public:
B(){
cout << "Constructor in Base class is called!!!" << endl;
}
virtual void sayHello() const {
cout <<"Hello from base class" << endl;
}
~B(){
cout << "Destructor in Base class is called!!!" << endl;
};
};

class D:public B{
    public:
D():B(){
cout << "Constructor in drived class is called!!!" << endl;
}
virtual void sayHello() const override{
cout <<"Hello from Derived class" << endl;
}
~D(){
cout << "Destructor in Base class is called!!!" << endl;
};
};

class D1:public B{
    public:
D1():B(){
cout << "Constructor in drived class is called!!!" << endl;
}
void sayHello() const override {
cout <<"Hello from 2nd Derived class" << endl;
}
~D1(){
cout << "Destructor in Base class is called!!!" << endl;
};
};


int main(){

unique_ptr<int> ptr1{new int{33}};
cout << *ptr1 << endl;

unique_ptr<int> ptr2{new int{13}};
cout << *ptr2 << endl;

int N{(*ptr1)*(*ptr2)};
unique_ptr<int> ptr3{new int{N}};
cout << boolalpha << (*ptr1**ptr2 == *ptr3) << endl;

unique_ptr<int> ptr4 = make_unique<int>(16);
unique_ptr<int> ptr5 = make_unique<int>(N);

cout <<  (*ptr1**ptr2 == *ptr5) << endl;

cout << ptr1.get() << endl;
ptr1.reset();
if(ptr1){
    cout << *ptr1 << endl;
}

if(!ptr1){
    cout << "ptr1 is nullptr now!!!" << endl;
}
cout << endl << "================================" << endl << endl;
{
    unique_ptr<B> base_ptr{new D()};
    base_ptr->sayHello();
    if(base_ptr){
        cout << "base pointer is there" << endl;
    }
}

cout << endl << "================================" << endl << endl;
{
    unique_ptr<B> base_ptr1 = make_unique<D1>();
    base_ptr1->sayHello();
}

cout << endl << "================================" << endl << endl;
{
    unique_ptr<B> base_ptr2 = make_unique<B>();
    base_ptr2->sayHello();
}

cout << endl << "================================" << endl << endl;
{
    unique_ptr<B> base_ptr2 = make_unique<B>();
    unique_ptr<B> base_ptr1 = make_unique<D1>();
    unique_ptr<B> base_ptr3{new D()};
    vector<B> V;
    cout << "===========making copies of the references only!!==============" << endl;
    V.push_back(move(*base_ptr1));
    V.push_back(move(*base_ptr2));
    V.push_back(move(*base_ptr3));
    cout << "===========making vector of unique pointer to the base object!!======" << endl;
    vector<unique_ptr<B>> W;

    W.push_back(move(base_ptr1));
    W.push_back(move(base_ptr2));
    W.push_back(move(base_ptr3));
    for(unique_ptr<B> const &w:W){
        w->sayHello();
    }
    cout << "==============end of the loop!!!============" << endl;

}
{
    cout << endl << "=========== creating shared pointers ===========" << endl << endl;
    shared_ptr<B> base_ptr2 = make_shared<B>();
    shared_ptr<B> base_ptr1 = make_shared<D1>();
    shared_ptr<B> base_ptr3{new D()};
    vector<shared_ptr<B>> W;

    W.push_back(move(base_ptr1));
    W.push_back(move(base_ptr2));
    W.push_back(move(base_ptr3));
    for(const auto &w:W){
        w->sayHello();
    }
    cout << "==============end of the loop!!!============" << endl;

}

{
    cout << endl << "========= creating shared pointers but unique objects ==========" << endl << endl;
    shared_ptr<B> base_ptr2 = make_unique<B>();
    shared_ptr<B> base_ptr1 = make_unique<D1>();
    shared_ptr<B> base_ptr3{new D()};
    vector<shared_ptr<B>> W;

    W.push_back(move(base_ptr1));
    W.push_back(move(base_ptr2));
    W.push_back(move(base_ptr3));
    for(const auto &w:W){
        w->sayHello();
    }
    cout << "==============end of the loop!!!============" << endl;

}



return 0;
}
