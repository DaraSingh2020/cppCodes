#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
int N;
int a;
vector<int> daraVector;
cin>>N;
for(int i=0;i<N;i++){
    cin>>a;
    daraVector.push_back(a);
}
vector<int> sortedDaraV;

sort(daraVector.begin(),daraVector.end());

for(int i=0;i<N;i++){
    cout << daraVector[i] << " ";
}
return 0;
}

