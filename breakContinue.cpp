#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
string myName1="daraSingh";
string myName2="Dara1Singh34";

int mySize1=size(myName1);
int mySize2=size(myName2);
cout << mySize1 << endl << mySize2 << endl;

for(int i=0 ; i< mySize2; i++){
    if (isupper(myName2[i])){
            cout << "Not printing the upper letter." << endl;
        continue;
    }
    else if (isdigit(myName2[i])){
        cout << "There is a digit: " << myName2[i] << " in here." << endl;
    }
    cout << myName2[i] << endl;
}
cout << endl << endl << "starting a new loop:" << endl;
for (int i=0; i<mySize1; i++){
    if(isupper(myName1[i])){
        cout << "oops! upper letters not allow. getting out of loop now" << endl;
        break;
    }
    cout << myName1[i] << endl;
}
return 0;
}
