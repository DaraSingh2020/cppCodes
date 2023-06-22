#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
vector<vector<int>> V;
vector<int> V1({5,1,9,11});
vector<int> V2({2,4,8,10});
vector<int> V3({13,3,6,7});
vector<int> V4({15,14,12,16});

V.push_back(V1);
V.push_back(V2);
V.push_back(V3);
V.push_back(V4);
for(int i=0; i<V.size();i++){
    for(int j=0; j<V[i].size();j++){
        cout << V[i][j] << "\t";
    }
    cout << endl;
}
cout << endl;
for(int i=0; i<V.size();i++){
    for(int j=i; j<V[i].size();j++){
        swap(V[i][j],V[j][i]) ;
    }
}

for(int i=0; i<V.size();i++){
    for(int j=0; j<V[i].size();j++){
        cout << V[i][j] << "\t";
    }
    cout << endl;
}
cout << endl;

for(int i=0; i<V.size();i++){
        reverse(V[i].begin(),V[i].end()) ;
}

for(int i=0; i<V.size();i++){
    for(int j=0; j<V[i].size();j++){
        cout << V[i][j] << "\t";
    }
    cout << endl;
}

return 0;
}
