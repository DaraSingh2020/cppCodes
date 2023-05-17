#include <iostream>

using namespace std;

void printingPointer(int *ptr);
void printingPointer(char *ptr);
void printAnyPointer(void* ptr);
void printPointWithType(void* ptr,char ptrType);

int main(){
int number=17;
int* ptrToNumber=&number;
char letter='C';
char* ptrToChar=&letter;

printingPointer(ptrToNumber);
printingPointer(ptrToChar);
cout << "using void pointer function now: " << endl;
printAnyPointer(ptrToNumber);
printAnyPointer(ptrToChar);
cout << endl;
printPointWithType(ptrToNumber,'i');
printPointWithType(ptrToChar,'C');

system("pause>0");
return 0;
}


void printingPointer(int *ptr){
cout << "pointer: " << ptr << endl;
cout << "De-referencing: " << *ptr << endl;
}

void printingPointer(char *ptr){
cout << "pointer: " << ptr << endl;
cout << "De-referencing: " << *ptr << endl;
}
void printAnyPointer(void* ptr){
cout << "pointer: " << ptr << endl;
cout << "No De-referencing when using void pointer " << endl;
}

void printPointWithType(void* ptr,char ptrType){
cout << "De-referencing by explicit casting" << endl;
switch(ptrType){
case 'i': cout << *((int*)ptr) << endl; break;
case 'C': cout << *((char*)ptr) << endl; break;
}
}
