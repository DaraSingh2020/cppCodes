#include <iostream>

using namespace std;

template<typename T> void swapT(T& c,T& d){
T temp=c;
c=d;
d=temp;
}

template<typename T> void printOut(T c,T d){
cout << c << " -- " << d << endl;
}


void swapDara(int& a, int& b){
int temp=a;
a=b;
b=temp;
}
void swapDara(char& a, char& b){
char temp=a;
a=b;
b=temp;
}


int main(){
int a=5;
int b=17;
cout << a << " -- " << b << endl;
swapDara(a,b);
cout << a << " -- " << b << endl;


char X='x';
char Y='y';
cout << X << " -- " << Y << endl;
swapDara(X,Y);
cout << X << " -- " << Y << endl;
cout << "-     Now by generic function!   -" << endl;
cout << "----------------------------------" << endl;

printOut<int>(a,b);
swapT<int>(a,b);
printOut<int>(a,b);

printOut<char>(X,Y);
swapT<char>(X,Y);
printOut<char>(X,Y);



system("pause>0");
return 0;
}
