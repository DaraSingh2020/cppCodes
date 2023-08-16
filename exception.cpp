#include <iostream>



using namespace std;

int main(){

double gallons{};
double miles{};
cout << "Enter the miles: ";
cin >> miles;
cout << "Enter the gallons of gas consumed: ";
cin >> gallons;

 try{
    if(gallons==0){
        throw 0;
    }

    double mpg{miles/gallons};
    cout << endl << "Your vehicle mile per gallon consumption is: " << mpg << endl;
 }
 catch(int &ex){
cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
cout << "sorry you entered a zero number!" << endl;
 }

    cout << "happy that you have a car!!" << endl;

int L{};
int t{};

cout<< "Enter the length: ";
cin >> L;
cout << "Enter the time taken: ";
cin >>t;

try{
    if(t==0){
        throw 0;
    }
double speed{};

speed = static_cast<double>(L)/t;

cout << "the speed of your car is: "<< speed << endl;
}
catch(int &ex){
cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
cout << "Division by zero is invalid. You cannot have taken zero time!" << endl;
}
cout << "Glad that you have a car!!" << endl;





return 0;
}
