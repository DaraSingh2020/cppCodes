#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <queue>
#include <set>

using namespace std;

int main(){

vector<int> myArray;
int T;
for(int i=0; i<30; i++){
    T=rand()%20;
    myArray.push_back(T);
    cout << myArray[i] << "\t";
}


sort(myArray.begin(),myArray.end());

for(int i=0; i<30; i++){
    cout << myArray[i] << "\t";
}
vector<int>dara=myArray;
cout << endl<< endl;




cout << "Dara" << endl<< endl;
set<int> S(myArray.begin(),myArray.end());
set<int>::iterator it;

int TT=0;
for(it=S.begin();it!=S.end();it++){
    cout << *it << "\t";
    myArray[TT]=*it;
    TT++;
}
cout << endl;

for(int i=0; i<30; i++){
    cout << myArray[i] << "\t";
}



int k=0;
for(int i=1;i<dara.size();i++){
    if(dara[k]!=dara[i]){
            k++;
        dara[k]=dara[i];
    }
}
cout << endl << "small loop" << endl;
for(int i=0; i<30; i++){
    cout << dara[i] << "\t";
}




return 0;
}
