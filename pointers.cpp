#include <iostream>

using namespace std;

int main(){
int N1=7;
int* pointerToInt=&N1;
cout << "N1: " << N1<< endl;
cout << "&N1: " << &N1 << endl;
cout << "pointerToInt: " << pointerToInt << endl;
cout << "*pointerToInt: " << *pointerToInt << endl << endl;

*pointerToInt=17;
cout << "*pointerToInt=17; " << endl;
cout << "N1: " << N1<< endl;
cout << "&N1: " << &N1 << endl;
cout << "pointerToInt: " << pointerToInt << endl;
cout << "*pointerToInt: " << *pointerToInt << endl;

system("pause>0");
return 0;
}
