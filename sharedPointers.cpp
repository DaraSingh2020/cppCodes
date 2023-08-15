#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class D{
public:
int N;

D(int n):N{n}{
    cout << "constructor with argument D" << endl;
}
D():D(0){
    cout << "constructor without argument D" << endl;
}
D(const D &d):D{d.N}{
cout << "constructor with reference to the object itself D" << endl;
}
virtual void sayHello() const{
cout << "Hello from D. Your lucky number is " << N << endl;
}
virtual ~D(){
}
};

class DD: public D{
public:
int N;
DD(int n):N{n}{
    cout << "constructor with argument DD" << endl;
}
DD():DD(0){
    cout << "constructor without argument DD" << endl;
}
DD(const DD &d):DD{d.N}{
cout << "constructor with reference to the object itself DD" << endl;
}

void sayHello() const override{
cout << "Hello from DD. Your lucky number is " << N << endl;
}
virtual ~DD(){
}
};

void print(const vector<shared_ptr<D>> &V) {
for(const auto &v:V){
    v->sayHello();
}
}

void advancedPrint(const unique_ptr<vector<shared_ptr<D>>> &V){
    vector<shared_ptr<D>> W{*V};
for(const auto &v:W){
    v->sayHello();
}
}

void superAdvancedPrint(const unique_ptr<vector<shared_ptr<D>>> &V){

for(const auto &v:*V){
    v->sayHello();
}
}

int main(){
    shared_ptr<D> ptr1 = make_shared<D>(23);
    ptr1->sayHello();
    shared_ptr<D> ptr2 = make_shared<D>(46);
    ptr2->sayHello();
    shared_ptr<D> ptr3 = make_shared<D>(ptr2->N);
    ptr3->N=33;
    ptr3->sayHello();
    cout << endl << "========== derived class pointer =======" << endl << endl;
    shared_ptr<D> ptr4 = make_shared<DD>(93);
    ptr4->sayHello();
    shared_ptr<D> ptr5 = make_shared<DD>(406);
    ptr5->sayHello();
    shared_ptr<D> ptr6 = make_shared<D>(ptr2->N);
    ptr6->N=34;
    ptr6->sayHello();


    vector<shared_ptr<D>> V{ptr1,ptr2,ptr3,ptr4,ptr5,ptr6};
    unique_ptr<vector<shared_ptr<D>>> ptr = make_unique<vector<shared_ptr<D>>>(V);

    cout << endl << "================ complicated print!!    !!======================" << endl;
    print(*ptr);

    cout << endl << "========== advanced print!!!!!! ===============================" << endl;
    advancedPrint(ptr);

    cout << endl << "========== super advanced print!!!!!! ===============================" << endl;
    superAdvancedPrint(ptr);

return 0;
}
