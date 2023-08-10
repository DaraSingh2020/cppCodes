#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SomeClass{
public:
int Age;
string Name;

public:
static int number;
SomeClass():SomeClass("None",0){
}
SomeClass(string name, int age):Name{name},Age{age}{
    number++;
}

SomeClass(SomeClass& S):SomeClass(S.Name,S.Age){
}
void displayInfo(){
cout << "Name: " << Name << "\tAge: " << Age << endl;
}
void setName(string name){
Name=name;
}
void setAge(int age){
Age=age;
}
string getName(){
return Name;
}
int getAge(){
return Age;
}

SomeClass& operator+=(SomeClass& other){
Name+=other.Name;
Age+=other.Age;
return *this;
}
SomeClass& operator++(){
Age++;
return *this;
}

static void objectCount(){
cout << "There are " << number << " people around here!" << endl;
}
~SomeClass(){
number--;
}


};

int SomeClass::number=0;

ostream& operator<<(ostream& Cout, SomeClass& S) {
Cout << "Name: " << S.getName() << "\tAge: " << S.getAge() << endl;
return Cout;
}

void swapObjects(SomeClass& S1, SomeClass& S2){
SomeClass S(S1);
S1.Name=S2.Name;
S1.Age=S2.Age;

S2.Name=S.Name;
S2.Age=S.Age;

}


class A{
public:
int N;
A():N{0}{
cout << "Default constructor was called!" << endl;
}
A(const int& n):N{n}{
cout << "l-Value reference constructor was called!" << endl;
}
A(const int&& n):N{n}{
cout << "r-Value reference constructor was called!" << endl;
}

A& operator++(){
N++;
return *this;
}

A& operator--(){
N--;
return *this;
}

};




int main(){
    int N{4};
    string Name{"Dara"};
    SomeClass S1{Name,N};
    SomeClass::objectCount();
    S1.displayInfo();

    SomeClass S2{"Jerry",23};
    SomeClass::objectCount();
    S2.displayInfo();

    SomeClass* S3_ptr = new SomeClass{"Jim",14};
    SomeClass::objectCount();
    S3_ptr->displayInfo();


    SomeClass S4=S2;
    SomeClass::objectCount();
    S4.setName("Jax");
    S4.setAge(13);
    S4.displayInfo();

    SomeClass S5;
    SomeClass::objectCount();
    S5.displayInfo();
    S5.setName("Timmy");
    S5.setAge(63);
    S5.displayInfo();
    SomeClass::objectCount();
    cout << S1 << endl;
    SomeClass::objectCount();
    S5+=S1;
    S5.displayInfo();
    S1.displayInfo();

    SomeClass::objectCount();

    SomeClass S6(S1);
    S6.displayInfo();
    SomeClass::objectCount();

    swapObjects(S6,S5);

    cout << S5;
    cout << S6;
    ++S6;
    cout << S6;

    A a;
    A b(23);
    int nn=34;
    A c(nn);
    A d(move(nn));
    cout << d.N << endl;
    ++d;
    cout << d.N << endl;
    --d;
    cout << d.N << endl;


    delete S3_ptr;




return 0;
}
