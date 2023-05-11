#include <iostream>
using namespace std;

int main() {

    int a=7;
    int b=44;
    int temp=a;
    a=b;
    b=temp;

    cout << a << b << endl;
    cout << "no one is here" << endl;

    return 0;
}