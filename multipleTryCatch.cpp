#include <iostream>
#include <string>

using namespace std;

double MPG(double miles, double gallons){
if(gallons==0){
    throw int{0};
}

if(gallons<0 || miles < 0){
    throw string{"Negative value error!!!!!"};
}
return miles/gallons;
}

int main(){
double m{};
double g{};
cout << "Plese enter the miles you have driven: ";
cin >> m;
cout << "Please enter the gallons you have consumed: ";
cin >> g;

try{
    double mpg{MPG(m,g)};
    cout << "You miles per gallon consumption is: " << mpg << endl;
}
catch(int &ex){
cerr << "Your gallons cannot have the value: " << ex << endl;
cerr << "This is invalid value!!!!" << endl;
}
catch(string &ex){
cerr << ex << endl;
}
catch(...){
cerr << "There is an error!! Go and fix it!!" << endl;
}
cout << "It\'s great that you have a car! I didn't have a car for the longest time!!" << endl;





return 0;
}
