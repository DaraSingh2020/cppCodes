#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main(){
string daraString="daraSingh";
string dd="DaraSingh";

int charSize=dd.size();

// Normal for loop
for(int i=0; i< charSize;i++){
    cout << dd[i] << endl;
};
cout << dd << endl;

// for-each loop
for(char d : dd){
    cout << d << endl;
}; // semicolon after {} seems to be optional.
return 0;
}
