#include <iostream>

using namespace std;

int main(){

int* ptr1 = new int[1000];
cout << ptr1[0] << endl;
cout << *ptr1 << endl;
cout << *(ptr1+0) << endl;
if(ptr1[0]!=0){
    cout << "It\'s initialized to a garbage value!" << endl;
}


cout << ptr1[1] << endl;
cout << *(++ptr1) << endl;
cout << *(ptr1) << endl;

if(ptr1[1]!=0){
    cout << "It\'s initialized to a garbage value!" << endl;
}

delete [] ptr1;


return 0;
}
