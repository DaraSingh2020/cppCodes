#include <iostream>
#include <string>
#include <cmath>
#include <list>

using namespace std;

class daraEats{
protected:
int Quantity;
string Quality;

public:
daraEats(int quantity, string quality){
Quality=quality;
Quantity=quantity;
}
public:
void eatingDone(){
cout << "The food quantity that dara ate was: " << Quantity << endl;
cout << "It\'s quality was: " << Quality << endl;
}
};

class breakfast:public daraEats{

public:
breakfast(int quantity_, string quality_):daraEats(quantity_,quality_){
    // Note to self: daraEats(quantity_,quality_) variabe names are different and types not defined.
}

void breakfastDone(){
cout << "The breakfast quantity that dara ate was: " << Quantity << endl;
cout << "It\'s quality was: " << Quality << endl;
daraEats::eatingDone();
}
};

class dinner:public daraEats{

public:
dinner(int quantity_1, string quality_1):daraEats(quantity_1,quality_1){
}

void dinnerDone(){
cout << "The dinner quantity that was: " << Quantity << endl;
if(Quantity>5){

    cout<< "Dara at too much." <<endl;
}
cout << "It\'s quality was: " << Quality << endl;
daraEats::eatingDone();
}
};

int main(){
daraEats generalEats=daraEats(3,"Great");
cout << "calling a parent function from the parent class..." << endl;
generalEats.eatingDone();
cout << endl;

cout << "calling a parent function from a child class..." << endl;
breakfast breakfastEats=breakfast(5,"Great");
breakfastEats.eatingDone(); // calling the parent function from the child object
cout << endl;

cout << "calling child function from the child class which also contains parent function..." << endl;
breakfastEats.breakfastDone(); // calling the parent function from inside the child function
cout << endl;

cout << "calling a parent function from a child class through parent class..." << endl;
breakfastEats.daraEats::eatingDone(); // calling the parent function from the child object
cout << endl;

cout << "child class with child and parent functions.." << endl;
dinner dinner(7,"fantastic!!");
dinner.dinnerDone();
cout<< endl;

cout<< "pointer of the parent type refrencing the child object address..." << endl;
daraEats* ptr1=&breakfastEats;

ptr1->eatingDone(); //parent function

// Error: ptr1->breakfastDone(); //child function

cout << endl;
daraEats* ptr2=&dinner;
ptr2->eatingDone();


daraEats* ptr3=&dinner;
// Enrror: ptr3->dinnerDone(); // error: 'class daraEats' has no member named 'dinnerDone'
// Note: dinner is a class name

daraEats* ptr4=&breakfastEats;
// ptr4->breakfastDone(); // error: 'class daraEats' has no member named 'breakfastDone'

return 0;
}
