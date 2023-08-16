#include <iostream>
#include <string>
using namespace std;

class DivideByZeroException{
public:
void message(){
cerr << "You have divide by zero error" << endl;
}
};

class NegativeValueException{
public:
void message(){
cerr << "You have negative value error" << endl;
}
};

double MPG(double miles, double gallons){
if(gallons==0){
    throw DivideByZeroException();
}
if(gallons<0 || miles <0){
    throw NegativeValueException();
}
return miles/gallons;
}

int main(){
double miles{0};
double gallons{0};

cout << "Enter miles: ";
cin >> miles;

cout << "Enter gallons: ";
cin >> gallons;

try{
double mpg{};
mpg=MPG(miles,gallons);
}
catch(NegativeValueException &N){
    N.message();
}
catch(DivideByZeroException &N){
    N.message();
}
cout << "Okay! Thanks. Bye" << endl;


return 0;
}

