#include <iostream>
#include <memory>
#include <exception>

using namespace std;

class NegativeValueException{
    public:
NegativeValueException()=default;
void message(){
cerr << "You cannot open an account with negative value!!" << endl;
}
~NegativeValueException()=default;
};

class NegativeAgeException:public exception{
    public:
NegativeAgeException() noexcept =default;
~NegativeAgeException()=default;
virtual const char* what() const noexcept{
return "Illegal age!!! It can't be NEGATIVE!";
}
};


class Account{
double Amount;
string Name;
int Age;
static constexpr double defaultAmount=0;
public:

Account(string name, int age, double amount=defaultAmount):Name{name},Age{age},Amount{amount}{
    if(Age<0){
        throw NegativeAgeException();
    }
    if(amount<0){
        throw NegativeValueException();
    }
cout << "Congratulations! YOu have an account now!" << endl;
}
Account(const Account &A):Name{A.Name},Age{A.Age},Amount{A.Amount}{
cout << "Congratulations! YOu have another account now!" << endl;
}
};

class Checking: public Account{
double Amount;
string Name;
int Age;
static constexpr double defaultAmount=0;
public:

Checking(string name, int age, double amount=defaultAmount):Account (name,age,amount), Name{name},Age{age},Amount{amount}{
    if(amount<0){
        throw NegativeValueException();
    }
cout << "Congratulations! YOu have an account now!" << endl;
}
Checking(const Checking &A):Account (A), Name{A.Name},Age{A.Age},Amount{A.Amount} {
cout << "Congratulations! YOu have another account now!" << endl;
}
};




int main(){

try{
    Account* ptr1{nullptr};
    ptr1 =  new Account("Jerry", 13, 34.55);
    delete ptr1;
}
    catch(NegativeValueException &N){
        N.message();
    }

    Account* ptr2{nullptr};
    ptr2 =  new Account("Jax", 19, 17.55);

    Account* ptr3 = new Account(*ptr2);

    try{
        Account* ptr4{nullptr};
        ptr4 =  new Account("Jax", 19, -19.85);
        delete ptr4;
    }
    catch(NegativeValueException &N){
    N.message();
    }

    delete ptr2;
    delete ptr3;

    shared_ptr<Account> ptr = make_shared<Checking>("John", 85, 90.34);

    try{
    shared_ptr<Account> ptrT = make_shared<Checking>("Jeff",45,-0.45);
    }
    catch(NegativeValueException &N){
    N.message();
    }

    try{
    unique_ptr<Account> ptrT1 = make_unique<Checking>("Jessy", -23, 45.07);
    }
    catch(const NegativeAgeException &N){
    cout << N.what() << endl;
    }

return 0;
}
