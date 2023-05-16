#include <iostream>
using namespace std;

class Base{
virtual void somePolymorphicFunction(){
cout << "The virtual function makes the class polymorphic!" << endl;
}
};

class Derived:public Base{
};

int main(){
Base* baseClassPointer = new Derived;
Derived* pointerDerived = dynamic_cast<Derived*>(baseClassPointer);
if(baseClassPointer!=NULL){
    cout << "Dynamic casting is done successfully" << endl;
}
else {
    cout << "Dynamic casting has failed" << endl;
}



int i = 10;
void* v = static_cast<void*>(&i);
int* ip = static_cast<int*>(v);
cout << *ip;

return 0;
}
