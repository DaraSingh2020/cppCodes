#include <iostream>
#include <string>

using namespace std;

int main(){
int I1=10;
int I2;
int I3;
int I4=112;
int I5=17;

double D1=12.71;
double D2;
double D3;

cout << "I1: " << I1 << ", I1-type: " << typeid(I1).name() << ", I2-type: " << typeid(I2).name() << endl;
cout << "D1: " << D1 << ", D1-type: " << typeid(D1).name() << ", D2-type: " << typeid(D2).name() << endl << endl;

// implicit data conversion:
I2=D1;
D2=I1;

cout << "After interchanging values: " << endl;
cout << "I2: " << I2 << ", I2-type: " << typeid(I2).name() << endl;
cout << "D2: " << D2 << ", D2-type: " << typeid(D2).name() << endl << endl;

cout << "Observations in implicit data conversion: " << endl << "Values got somewhat interchanged but data-type remained the same!" << endl;


// explicit data conversion and then assigning:
D3=(int)D1;
I3=(double)I1;

cout << "After interchanging values: " << endl;
cout << "I3: " << I3 << ", I3-type: " << typeid(I3).name() << endl;
cout << "D3: " << D3 << ", D3-type: " << typeid(D3).name() << endl << endl;

cout << "Observations in explicit data conversion before addition: " << endl << "Values somewhat interchanged but data-type remained the same!" << endl;

cout << "Explicit conversion: " << endl;
cout << "I1: " << (double)I1 << ", I1-type: " << typeid(I1).name() << endl;
cout << "D1: " << (int)D1 << ", D1-type: " << typeid(D1).name() << endl << endl;

cout << "Observations in explicit data conversion before addition: " << endl << "Values somewhat interchanged but data-type remained the same!" << endl << endl;

cout << "I4/I5= " << I4/I5 << endl;
cout << "(double)I4/(double)I5= " << (double)I4/(double)I5 << endl;

return 0;
}
