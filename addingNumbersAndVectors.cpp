#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
vector<int>num({1,2,0,0});
int k = 34;


int carry=0;
int N;
int i=num.size()-1;
vector<int>V;
while(k>0 && i>-1){
    N=num[i]+k%10+carry;
    V.push_back(N%10);
    carry=N/10;
    k/=10;
    i--;
}
while(k>0){
    N=k%10+carry;
    V.push_back(N%10);
    carry=N/10;
    k/=10;
}
while(i>-1){
    N=num[i]+carry;
    V.push_back(N%10);
    carry=N/10;
    i--;
}
if(carry==1){
    V.push_back(carry);
}




reverse(V.begin(),V.end());
for(int i=0; i<V.size(); i++){
    cout << V[i];
}



return 0;
}
