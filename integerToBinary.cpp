#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;


main(){


int n=339;
int nn=n;
vector<int> V;
vector<int> binary;
int counter=0;
int base=2;
int N=1;

while(true){
    if(N>n){
        binary[binary.size()-1]=1;
        break;
    }
    V.push_back(N);
    N*=base;
    counter++;
    binary.push_back(0);
}
for(int i=0; i<V.size();i++){
    cout << V[i] << "\t";
}
cout << endl;
for(int i=0; i<binary.size();i++){
    cout << binary[i] << "\t";
}
cout << endl;
bool Flag=true;
int marker=V.size()-1;
while(n>0){
    n=n-V[marker];
    cout << n << endl;
    for(int i=0; i<V.size();i++){
        if(V[i]>n){
            marker=i-1;
            binary[marker]=1;
            break;
        }
    }

}
for(int i=0; i<binary.size();i++){
    cout << binary[i] << "\t";
}
cout << endl;
string B="";
for(int i=binary.size()-1; i>-1;i--){
    B+=to_string(binary[i]);
}
cout << endl << nn << " is basically " << B << endl;

int Number=339;
int Number_=Number;
int remainder=0;
string binaryS="";
while (Number>0){
    remainder=Number%2;
    binaryS=to_string(remainder)+binaryS;
    Number/=2;
}
cout << Number_ << " has a binary of " << binaryS << endl;


vector<int> bitSum;
Number_=5;
remainder=0;
int binarySum=0;
while(Number_>-1){
    Number=Number_;
    //cout << Number << " ";
    while (true){
        binarySum+=Number%2;;
        if(Number==0){
            cout << binarySum << " ";
            bitSum.push_back(binarySum);
            break;
        }
        Number/=2;
    }
    Number_--;
    remainder=0;
    binarySum=0;
}
cout << endl;

//bitSum.push_back(0);
reverse(bitSum.begin(),bitSum.end());
for(int i=0; i<bitSum.size();i++){
    cout << bitSum[i] << "\t";
}
cout << endl;
return 0;
}
