#include<iostream>
#include<unordered_map>
#include<vector>
#include<cstdlib>
#include <algorithm>


using namespace std;

int main(){
int N;
vector<int> V;
unordered_map<int, int> M;
for(int i=0; i<15; i++){
    N=rand()%10;
    V.push_back(N);
    cout << V[i] << "\t";
        M[V[i]]++;
}
cout << endl << "Frequency of items in the hash table" << endl;
cout << "numbers     Frequency" << endl;
for(auto const& m:M){
    cout << m.first << "\t\t" <<m.second<< endl;
}
vector<pair<int,int>> VV;
for(auto const& m:M){
    VV.push_back(make_pair(m.second,m.first));
}
cout << endl;
cout << "Frequency     Numbers" << endl;
for(auto const& vv:VV){
    cout << vv.first << "\t\t" << vv.second << endl;
}
sort(VV.begin(),VV.end());
cout << endl;
cout << "Frequency     Numbers" << endl;
for(auto const& vv:VV){
    cout << vv.first << "\t\t" << vv.second << endl;
}

reverse(VV.begin(),VV.end());
cout << endl;
cout << "Frequency     Numbers" << endl;
for(auto const& vv:VV){
    cout << vv.first << "\t\t" << vv.second << endl;
}
cout << endl;
sort(V.begin(),V.end(),greater<int>());
for(auto const& v:V){
    cout << v << "\t";
}
vector<pair<int,int>>::reverse_iterator it;
for(it=VV.rbegin(); it!=VV.rend();it--){
    cout << (*it).second << endl;
}



return 0;
}
