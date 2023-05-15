#include <iostream>
#include <string>

using namespace std;

int main(){
int N2=13, N3= 7;
double D;

D = static_cast<double>(N2)/N3; //making sure N2 temporarily looks like a double data type.
cout << "static_cast<double>(N2)/N3= " << D << endl;

cout << typeid(N2).name() << endl;
cout << "Type of N2 does not change!" << endl << endl;
cout << "N2: " << N2 << endl;

D = N2/N3;
cout << "D = N2/N3; D= " << D << endl;

cout << "(double)N2/N3= " << (double)N2/N3 << endl;

return 0;
}
