#include <iostream>
#include <string>

using namespace std;


int main(){
string food="noon o panir";
cout << food << endl;

string food_=food;
cout << food_ << endl;

string &meal=food;
cout << meal << endl;

cout << &food << endl;
cout << &food_ << endl;
cout << &meal << endl;

if (&food == &meal){

    cout << "food and meal have the same memory address" << endl;
}
string* pointerToFood = &food;
cout << endl << "Food variable memory address is: " << pointerToFood << endl << endl;

int number1=6;
cout << "memory address of " << number1 << " is " <<&number1 << endl << endl;
//string* n=&number; doesn't work!
int* address_n1=&number1;
cout << number1 << " has a memory address of " << address_n1 << endl << endl;

double number2=10.01;
double* address_n2=&number2;
cout << number2 << " has a memory address of " << address_n2  << endl << endl;


cout << "using * to dereference values " << *address_n2 << endl;

*pointerToFood="barbari";
cout << pointerToFood << endl;
cout << food << endl;

return 0;
}
