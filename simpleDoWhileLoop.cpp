#include<iostream>
#include<string>

using namespace std;

int main(){

int number{0};
do{
    cout << "input a number: ";
    cin >> number;
    cout <<"\nif the number is less than 100, it will stop!" << endl;
    cout << "you entered: " << number << endl;
}
while(number>100);
cout << "Your number was less than 100!" << endl;



return 0;
}
