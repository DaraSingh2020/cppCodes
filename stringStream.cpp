#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>


using namespace std;

int main(){
stringstream ss;
string numString="789";
int num;
ss << numString;
ss >> num;
num=num+5;
cout << num << endl;

int N=586523;
stringstream SS, SS2;
SS<< N;



string STR;
SS >> STR;
int len = STR.size();
int n=len-1;
for(int i=0;i<(len/2);i++){
    //Using the swap method to switch values at each index
swap(STR[i],STR[n]);
n = n-1;
}

SS << STR;

cout << STR << endl;









return 0;
}
