#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Interface_Print{
    friend ostream& operator<<(ostream &os,const Interface_Print &obj);
public:
    virtual void printInfo(ostream& os) const = 0;
};

ostream& operator<<(ostream &os, const Interface_Print &obj){
obj.printInfo(os);
return os;
}

class Instrument:public Interface_Print{
    string Name;
    int Price;

public:
    Instrument(string name,int price):Name{name}, Price{price}{
    }
    virtual string makeSound() const =0;
    virtual int cost() const = 0;
    virtual int Difficulty() const = 0;
    virtual void printInfo(ostream& os) const =0;
    virtual ~Instrument(){
    }
};

class Jazz:public Instrument {
    string Name;
    int Price;
    int Hard;
static constexpr int p{100};
static constexpr int h{10};
    public:
Jazz(string name,int price = p, int difficulty = h):Instrument(name,price),Hard{difficulty},Price(price),Name(name){
}
string makeSound() const override {
return "jazzzzzzzzzzz";
}
virtual int cost() const override {
return Price;
}
virtual int Difficulty() const override {
return Hard;
}
virtual void printInfo(ostream& os) const override{
    os << endl <<  "The cost of Jazz instument called " << Name << " is " <<cost() << "$."<< endl;
    os << "The difficulty level for learning " << Name << " is " << Difficulty() << "/10.";
}
virtual ~Jazz(){
}
};


class Guitar:public Instrument {
    string Name;
    int Price;
    int Hard;
static constexpr int p{100};
static constexpr int h{10};

    public:
Guitar(string name,int price=p, int difficulty=h):Instrument(name,price), Hard{difficulty},Price(price),Name(name){
}
string makeSound() const override {
return "ding ding";
}
virtual int cost() const override {
return Price;
}
virtual int Difficulty() const override {
return Hard;
}
virtual void printInfo(ostream& os) const override{
    os << endl <<  "The cost of guitar instument called " << Name << " is " <<cost() << "$."<< endl;
    os << "The difficulty level for learning " << Name << " is " << Difficulty() << "/10.";
}
virtual ~Guitar(){
}
};

int main(){
Instrument* ptr1{nullptr};
ptr1 = new Jazz("jazzii",35, 9);
cout << ptr1->makeSound() << endl;
cout << "Price of Jazz is: " << ptr1->cost() << endl;
cout << "difficulty level of Jazz is: " << ptr1->Difficulty() << endl;
cout << endl;

Instrument* ptr2{nullptr};
ptr2 = new Guitar("dirinnnnnnn",24, 7);
cout << ptr2->makeSound() << endl;
cout << "Price of Guitar is: " << ptr2->cost() << endl;
cout << "difficulty level of Guitar is: " << ptr2->Difficulty() << endl;

cout << *ptr1 << endl;
cout << *ptr2 << endl;

cout << "*****================ out of a vector in loop ==================*****" << endl;

vector<Instrument*> V{ptr1, ptr2};
for(auto v:V){
    cout << *v << endl;
}

cout << "*****=============== some more examples =============*****" << endl;

Instrument* ptr3{nullptr};
ptr3 = new Guitar("git");

cout << *ptr3 << endl;


Instrument* ptr4{nullptr};
ptr4 = new Jazz("zzzzz");

cout << *ptr4 << endl;

delete ptr1;
delete ptr2;
delete ptr3;
delete ptr4;

return 0;
}
