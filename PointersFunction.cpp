#include <iostream>
#include <cstdlib>

using namespace std;

bool isAscending(int a, int b); // bool (*isAscendingPTR)(int,int)=isAscending;
bool isDescending(int a, int b); // bool (*isDescendingPTR)(int,int)=isDescending;
void printArray(int* daraArray_,int arraySize_); //void (*printArrayPTR)(int*,int)=printArray;
void printArray1(int daraArray_[],int arraySize_); // void (*printArray1PTR)(int,int)=printArray1;
void swapFunction(int* arrayD,int index1,int index2); //void(*swapFunctionPTR)(int*,int,int)=swapFunction;
void makeCopy(int* copyFrom,int* copyTo, int arraySize);


void sorting(int* d, int dSize,bool (*isAscendingOrDescendingPTR)(int,int), void(*swapFunctionPTR)(int*,int,int) ){
for(int i=0;i<dSize; i++){
for(int j=0; j<dSize; j++){
if (isAscendingOrDescendingPTR(d[i], d[j])){
swapFunctionPTR(d,i,j);
}
}
}
}


int main(){
int arraySize=10;
int randomNumber;
int daraArray[arraySize];
int daraArrayCopy[arraySize];

void(*swapFunctionPTR)(int*,int,int)=swapFunction;
bool (*isAscendingPTR)(int,int)=isAscending;
bool (*isDescendingPTR)(int,int)=isDescending;
void (*printArrayPTR)(int*,int)=printArray;
void (*printArray1PTR)(int*,int)=printArray1;



cout<< "Creating an array 10 random numbers:" << endl;
for (int i=0; i<arraySize; i++){
randomNumber=rand()%50;
cout << randomNumber << " ";
daraArray[i]=randomNumber;
}
cout << endl;

makeCopy(daraArray,daraArrayCopy,arraySize);



cout << "Printing out the numbers: " << endl;
for(int i=0; i<arraySize; i++){
cout<< daraArray[i] << "\t";
}
cout << endl;

(isDescending(daraArray[4], daraArray[7]))? cout<<daraArray[4] << " > " << daraArray[7]<< endl : cout<<daraArray[4] << " < " << daraArray[7]<< endl ;

int daraArray__[arraySize];
printArray(daraArray,arraySize);
printArray1(daraArray,arraySize);

cout << endl <<"Testing the manual swap function: " <<endl;
swapFunction(daraArray,3,7);
printArray1(daraArray,arraySize);

sorting(daraArray,arraySize, isAscendingPTR,swapFunctionPTR);
printArray1(daraArray,arraySize);

printArray1(daraArrayCopy,arraySize);
makeCopy(daraArrayCopy,daraArray,arraySize);
printArray1(daraArray,arraySize);

sorting(daraArray,arraySize, isDescendingPTR,swapFunctionPTR);
printArray1(daraArray,arraySize);

printArray(daraArrayCopy,arraySize);

system("pause>0");
return 0;
}

/*              Functions here only!                                     */
// functions:
bool isAscending(int a, int b){
return a<b;
}
bool isDescending(int a, int b){
return a>b;
}

void printArray(int* daraArray_,int arraySize_){
cout << endl << "void printArray(int* daraArray_,int arraySize_)" << endl;
cout << "Printing out the numbers: " << endl;
for(int i=0; i<arraySize_; i++){
cout<< daraArray_[i] << "\t";
}
cout << endl;
}

void printArray1(int daraArray_[],int arraySize_){
cout << endl << "void printArray(int daraArray_[],int arraySize_)" << endl;
cout << "Printing out the numbers: " << endl;
for(int i=0; i<arraySize_; i++){
cout<< daraArray_[i] << "\t";
}
cout << endl;
}

void swapFunction(int* arrayD,int index1,int index2){
int temp=arrayD[index1];
arrayD[index1]=arrayD[index2];
arrayD[index2]=temp;
}

void makeCopy(int* copyFrom,int* copyTo, int arraySize){
for(int i=0;i<arraySize; i++){
copyTo[i]=copyFrom[i];
}
}
