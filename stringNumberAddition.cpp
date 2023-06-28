#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main(){
string T1="401716832807512840963";
string T2="167141802233061013023557397451289113296441069";

//T1="1";
//T2="9";
string T3="";
string temp="";
int i=T1.size()-1;
int j=T2.size()-1;
int carry=0;
int N;
while(i>-1 && j>-1){
    N=T1[i]+T2[j]-'0'-'0'+carry;
    carry=N/10;
    N=N%10;
    T3=to_string(N)+T3;
    i--;
    j--;
}
while(j>-1){
    N=T2[j]-'0'+carry;
    carry=(N+1)/10;
    N=N%10;
    T3=to_string(N)+T3;
    j--;
}
while(i>-1){
    N=T1[i]-'0'+carry;
    carry=(N+1)/10;
    N=N%10;
    T3=to_string(N)+T3;
    i--;
}
if(carry==1){
    T3=to_string(carry)+T3;
}
cout << T3 << endl;













return 0;
}
