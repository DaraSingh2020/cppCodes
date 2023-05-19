#include <iostream>
#include <memory>
using namespace std;

int main(){
int N=10;
int* ptr1=&N;
cout << ptr1 << "  " << *ptr1  << endl;
unique_ptr<int>uniquePointer=make_unique<int>(25);

cout << *uniquePointer << endl; //cout << uniquePointer << endl; does not work

unique_ptr<char>unPTR=make_unique<char>('a');
cout << *unPTR << endl;

unique_ptr<double>unPTRd=make_unique<double>(5.6734);
cout << *unPTRd << endl;

unique_ptr<int>uniquePointer2=move(uniquePointer);
cout << *uniquePointer2 << endl;
cout << *uniquePointer << endl;


system("pause>0");
return 0;
}
