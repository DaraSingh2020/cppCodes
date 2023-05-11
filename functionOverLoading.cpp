#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// declaration of a function here:
// function overloading should be done here and when defining
int sumCube(int X, int Y);
double sumCube(double X, double Y);
void printResult(int X,int Y,int Z);
void printResult(double X,double Y,double Z);

int main(){
int dara1=3;
int dara2=5;
int result=sumCube(dara1,dara2);
printResult(dara1,dara2,result);

//int numbers cannot be over-written into double
double dara3=3.14;
double dara4=5.5;
double result_=sumCube(dara3,dara4);
printResult(dara3,dara4,result_);
return 0;
}

// definition of functions here:
// function definition should be done here too:
int sumCube(int X, int Y){
return pow((X+Y),3);
}
double sumCube(double X, double Y){
return pow((X+Y),3);
}
void printResult(int X,int Y,int Z){
    cout << "The sum of cube of " << X << " and " << Y << " is: " << Z << endl;
}
void printResult(double X, double Y,double Z){
    cout << "The sum of cube of " << X << " and " << Y << " is: " << Z << endl;
}
