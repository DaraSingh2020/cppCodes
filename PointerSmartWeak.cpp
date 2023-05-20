#include <iostream>
#include <memory>

using namespace std;

class classForPointer{
int Number;
public:
classForPointer(int number){
Number=number;
cout << "classForPointer is been created!" << endl;
cout << "The integer used is: " << Number << endl;
}
~classForPointer(){
cout << "classForPointer is now destroyed!" << endl;
}

};

class B{
public:
B(){

}

~B(){
}
};

void pointerInfo(shared_ptr<classForPointer> PTR);
void pointerInfo(shared_ptr<int> PTR);
void pointerInfo(shared_ptr<B> PTR);

int main(){
classForPointer daraPTR=classForPointer(4);
shared_ptr<classForPointer>ptr1=make_shared<classForPointer>(daraPTR);
pointerInfo(ptr1);

shared_ptr<classForPointer>ptr2=make_shared<classForPointer>(classForPointer(2));
pointerInfo(ptr2);

shared_ptr<int>ptr5=make_shared<int>(5);
pointerInfo(ptr5);
shared_ptr<int> ptr6=ptr5;
pointerInfo(ptr5);
cout << ptr5.use_count() << " is the count of weak pointer 5"<< endl;
pointerInfo(ptr6);
weak_ptr<int>ptr7=ptr6;
cout << ptr7.use_count() << " is the count of weak pointer 7"<< endl;
shared_ptr<int>ptr8=make_shared<int>();
pointerInfo(ptr8);
shared_ptr<B>ptr9=make_shared<B>();
pointerInfo(ptr9);
cout << ptr9.use_count() << endl;
cout << "when a shared pointer is called from a function, it\'s value increases by 1" << endl;
cout << "huh!" << endl;
{
    shared_ptr<B>ptr10=make_shared<B>();
    cout << "Inside the scope: " << endl;
    cout << ptr10.use_count() << endl;
    {
        shared_ptr<B>ptr11=ptr10;
        cout << "Inside of inside the scope: " << endl;
        cout << ptr10.use_count() << endl;
        weak_ptr<B>ptr12=ptr10;
        cout << "Inside of inside the scope using weak pointer: " << endl;
        cout << ptr10.use_count() << endl;
        cout << ptr12.use_count() << endl;
    }
    cout << "Outside of the inner scope: " << endl;
    cout << ptr10.use_count() << endl;
}
cout << endl << "This time using a more complicated class: " << endl << endl;
{
    shared_ptr<classForPointer>ptr20=make_shared<classForPointer>(classForPointer(7));
    cout << "Inside the scope: " << endl;
    cout << ptr20.use_count() << endl;

    {
        shared_ptr<classForPointer>ptr21=ptr20;
        cout << "Inside of inside the scope: " << endl;
        cout << ptr20.use_count() << endl;
        weak_ptr<classForPointer>ptr22=ptr20;
        cout << "Inside of inside the scope using weak pointer: " << endl;
        cout << ptr20.use_count() << endl;
        cout << ptr22.use_count() << endl;
    }
    cout << "Outside of the inner scope: " << endl;
    cout << ptr20.use_count() << endl;
}
cout << "unassigned pointers: " << endl;
weak_ptr<classForPointer>ptr23;
cout << "For weak pointer: " << ptr23.use_count() << endl;
shared_ptr<classForPointer>ptr24;
cout << "For shared pointer: " << ptr24.use_count() << endl;

system("pause>0");
return 0;
}


void pointerInfo(shared_ptr<classForPointer> PTR){
cout << "The shared pointer is: " << PTR << " and it\'s users number is: " << PTR.use_count() << endl;
}
void pointerInfo(shared_ptr<int> PTR){
cout << "The shared pointer is: " << PTR << " and it\'s users number is: " << PTR.use_count() << endl;
cout << "It\'s value is: " << *PTR << endl;
}
void pointerInfo(shared_ptr<B> PTR){
cout << "The shared pointer is: " << PTR << " and it\'s users number is: " << PTR.use_count() << endl;
}
