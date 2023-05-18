#include <iostream>
#include <string>

using namespace std;

int main(){
int arraySize;
cout << "Please enter the size of the array: ";
cin >> arraySize;
cout << endl;

int* daraArray= new int[arraySize];
for(int i=0; i<arraySize; i++){
    cout << "array[" << i << "]: ";
    cin >> daraArray[i];
}
cout << endl;

for (int i=0; i<arraySize; i++){
    cout << "daraArray[" << i << "]: " << daraArray[i] << endl;
}
delete[]daraArray;
daraArray=NULL;

system("pause>0");
return 0;
}
