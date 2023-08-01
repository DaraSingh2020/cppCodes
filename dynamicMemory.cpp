#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

int* int_ptr{nullptr};
int_ptr = new int;

cout << "pointer memory address: " << int_ptr << endl;
cout << "some garbage value: "<< *int_ptr << endl;
*int_ptr = 100;
cout << "100 is assigned to the pointer: "<< int_ptr << endl;
cout << *int_ptr << endl;
cout << "sizeof the pointer: " << sizeof(int_ptr) << endl;

cout << "!!!=======================================================!!!" << endl;
cout << " the pointer is created on the stack but it point to the heap" << endl;
cout << "!!!=======================================================!!!" << endl;

size_t sizeT{0};
double *double_ptr{nullptr};

cout << "How big do you want the array size? ";
cin >> sizeT;

double_ptr = new double[sizeT];
cout << double_ptr << endl;
cout << "sizeof the pointer: " << sizeof(double_ptr) << endl;


delete [] int_ptr;
delete [] double_ptr;

int N{88};
cout << "N=88. Now we use *(&N) to get the same value:" << *(&N) << endl;

int intArray[]{33,45,23,55};
size_t arrayS=sizeof(intArray)/sizeof(intArray[0]);
cout << "Display the array using auto method: " << endl;
for(auto i:intArray){
    cout << i <<"\t";
}
cout << endl;
cout << "Display the array using index with array name: " << endl;
for(size_t i{0}; i<arrayS;i++){
    cout << intArray[i] << "\t" ;
}
cout << endl;
cout << "Display the array using derefereincing method with array name: " << endl;
for(size_t i{0}; i<arrayS;i++){
    cout << *(intArray+i) << "\t" ;
}
cout << endl;

int* intArray_ptr{nullptr};
intArray_ptr=intArray;
cout << "Display the array using pointer and index and dereferencing: " << endl;
cout << "It\'s called offset notation when you say +1 or +2!" << endl;
for(size_t i{0}; i<arrayS;i++){
    cout << *(intArray_ptr+i) << "\t" ;
}
cout << endl;

cout << "Display the array using pointer as if it\'s array name: " << endl;
for(size_t i{0}; i<arrayS;i++){
    cout << intArray_ptr[i] << "\t" ;
}
cout << endl;

cout << "even (&N)[0] works!!!!!! " << (&N)[0] << endl;
cout << "even (&N)[1] works!!!!!! This is non-existant " << (&N)[1] << endl;
cout << "even (&N)[2] works!!!!!! This is non-existant " << (&N)[1] << endl;

return 0;
}
