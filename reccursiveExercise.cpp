#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sumOfAllNumbers(int X);
int sumOfArray(int X[5]);

int main(){
int daraNumber=50;
int dara[5]={1,2,3,4,5};

cout << sumOfAllNumbers(50) << endl << endl;
cout << sumOfArray(dara) << endl << endl;

for (int i : dara){
    cout << i << endl;
}
}

int sumOfAllNumbers(int X){
if (X>0){
    return X+sumOfAllNumbers(X-1);
    }
else {
    return 0;
    }
}

int sumOfArray(int X[5]){
int holder=0;
for (int i=0; i<5; i++){
    holder+=X[i];
}
return holder;
}
