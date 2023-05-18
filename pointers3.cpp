#include <iostream>

using namespace std;
int findMin(int N[7]);
int findMax(int N[7]);
void findMaxAndMin(int N[7],int* ptrMin, int* ptrMax);

int main(){
int N1=17;
int N[7];
int maxInt=1;
int minInt=0;
for(int i=0;i<7; i++){
    cout << "Please input a number: " << endl;
    cin >> N[i];
}
cout << "Your numbers were: " << endl;
for (int i=0;i<7;i++){
    cout << N[i] << ",  ";
}
cout << endl;
cout << "The minimum is: " << findMin(N) << endl;
cout << "The maximum is: " << findMax(N) << endl;
cout << endl;

int* maxIntP=&maxInt;
int* minIntP=&minInt;
findMaxAndMin(N,minIntP,maxIntP);
cout << "max is: " << *maxIntP << " min is: " << *minIntP << endl;

system("pause>0");
return 0;
}


int findMin(int N[7]){
int minNumber=N[0];
for(int i=1;i<7; i++){
    if(N[i]<minNumber){
        minNumber=N[i];
    }
}
return minNumber;
}

int findMax(int N[7]){
int maxNumber=N[0];
for(int i=1;i<7;i++){
    if(maxNumber<N[i]){
        maxNumber=N[i];
    }
}
return maxNumber;
}
void findMaxAndMin(int N[7],int* ptrMin, int* ptrMax){
*ptrMax=N[0];
*ptrMin=N[0];
for(int i=1;i<7;i++){
    if(*ptrMax<N[i]){
        *ptrMax=N[i];
    }
}
for(int i=1;i<7;i++){
    if(*ptrMin>N[i]){
        *ptrMin=N[i];
    }
}
}
