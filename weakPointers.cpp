#include <iostream>
#include <memory>
#include <iomanip>

using namespace std;

class B;
class C;

class A {
shared_ptr<B> B_ptr;
shared_ptr<C> C_ptr;
public:
    void setB(shared_ptr<B> &b){
    B_ptr = b;
    }
    void setC(shared_ptr<C> &c){
    C_ptr = c;
    }
    A(){
    cout << "Class A constructor" << endl;
    }
    ~A(){
    cout << "Class A destructor" << endl;
    }
};

class B {
shared_ptr<A> A_ptr;
shared_ptr<C> C_ptr;
public:
    void setA(shared_ptr<A> &a){
    A_ptr = a;
    }
    void setC(shared_ptr<C> &c){
    C_ptr = c;
    }
    B(){
    cout << "Class B constructor" << endl;
    }
    ~B(){
    cout << "Class B destructor"<< endl;
    }
};

class C {
weak_ptr<A> A_ptr;
weak_ptr<B> B_ptr;
public:
    void setA(shared_ptr<A> &a){
    A_ptr = a;
    }
    void setB(shared_ptr<B> &b){
    B_ptr = b;
    }
    C(){
    cout << "Class C constructor" << endl;
    }
    ~C(){
    cout << "Class C destructor"<< endl;
    }
};

void daraDeleter(int* int_ptr){
    cout << "custom deleter invoked!!" << endl;
delete int_ptr;
}


int main(){

    shared_ptr<A> ac = make_shared<A>();
    shared_ptr<A> ab = make_shared<A>();
    shared_ptr<B> bc = make_shared<B>();
    shared_ptr<B> ba = make_shared<B>();
    shared_ptr<C> ca = make_shared<C>();
    shared_ptr<C> cb = make_shared<C>();

    ab->setB(ba);
    ac->setC(ca);

    ba->setA(ab);
    bc->setC(cb);

    cout << "=============================" << endl;
    shared_ptr<int> int_ptr {new int(1342),daraDeleter};
    cout << *int_ptr << endl;

    shared_ptr<int> ptrLambda (new int{17}, [] (int *ptrLambda){
                               cout << "Using custom lambda deleter" << endl;
                               *ptrLambda = *ptrLambda**ptrLambda;
                               cout << *ptrLambda << endl;
                               delete ptrLambda;
                               });

    shared_ptr<int> int_ptr12 {new int(1342),daraDeleter};

    cout << *ptrLambda << endl;

    return 0;
}
