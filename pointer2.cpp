#include <iostream>

using namespace std;

int main(){
int N[5]={2,3,5,7,11};
int X[5];
cout<< "pointers and arrays: " << endl << endl;
for(int i=0;i<5;i++){
    cout<< N[i] << "  " << &N[i] << "  " << *(N+i) << endl;
}
cout << endl;
cout << N << "  " << &N[0] << endl;
cout << N[0] << "  " << *(&N[0]) << "  " << *(N) << endl;
for(int i=0;i<5;i++){
cout << "Please enter a number: " << endl;
cin >>  X[i];
}
cout << "The numbers you entered were: " << endl;
for(int i=0;i<5;i++){
cout << X[i] << endl;
}
}
