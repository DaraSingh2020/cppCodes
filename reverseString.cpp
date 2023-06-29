#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


string s = "Let's take LeetCode contest";
s = "God Ding";

        vector<string>V;
        string T="";
        string TT="";
        for(auto S:s){
            if(S==' '){
                if( T.size()>0){
                    reverse(T.begin(),T.end());
                    TT+=T+' ';
                V.push_back(T);
                    }
                T="";
                continue;
            }
            T+=S;
        }
        reverse(T.begin(),T.end());
        TT+=T;
        cout << TT << endl;
        if(T.size()>0){
            V.push_back(T);
        }
        for(int i=0; i<V.size();i++){
            cout << V[i] << "\t";
        }
        cout << endl;
        T="";
        for(int i=0;i<V.size()-1;i++){
            T+=V[V.size()-1-i]+" ";
        }
        T+=V[0];
        cout << T << endl;




return 0;
}
