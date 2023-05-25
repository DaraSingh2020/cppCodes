# include <iostream>
# include <cmath>
# include <cstdlib>
using namespace std;

template <typename T> class daraArray {

T* pointer;
int arraySize1;

public:
daraArray(T arrayD[], int s);
void printClassMethod();
};

template <typename T> daraArray<T>::daraArray(T arrayD[], int s){
cout << "template class constructor invoked form outside the class" << endl;
pointer = new T[s];
arraySize1 = s;
for (int i = 0; i < arraySize1; i++)
pointer[i] = arrayD[i];
}


template <typename T> void daraArray<T>::printClassMethod(){
cout << "This is a method declared inside the template class but defined outside of it!" << endl;
for (int i = 0; i < arraySize1; i++){
cout << " " << *(pointer + i);
}
cout << endl;
}


template<typename TT1,typename TT2, typename TT3= char> class daraClass{
TT1 NN;
TT2 DD;
TT3 CH;

public:
daraClass(TT1 nn, TT2 dd, TT3 ch){
NN=nn;
DD=dd;
CH=ch;
}
void justSaying(){
cout << NN << endl;
cout << DD << endl;
cout << CH << endl;
}
};



int main(){
int Size=5;
int arraySample[Size] = { 1, 2, 3, 4, 5 };
daraArray<int> arrayClassObject(arraySample, Size);
arrayClassObject.printClassMethod();

cout << rand()%10 << endl;


int nn=10;
double dd=28.532;
char ch='s';
cout << ch << endl;
daraClass<int,double, char> daraSingh(nn,dd,ch);

daraSingh.justSaying();


system("pause>0");
return 0;
}


