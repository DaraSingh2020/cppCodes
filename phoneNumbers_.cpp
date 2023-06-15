#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;


vector<char> giveChar(char ch){
    vector<char> V1;
    char T;

    int Limit=3;
    if(ch=='9'){
        Limit=4;
    }
    int N=int(ch)-int('0');
    int delta=int(ch)-int('2');

    for(int i=0; i<Limit;i++){
        T=char(int(ch)+int('1')-2+delta*2+i);
        V1.push_back(T);
    }
return V1;
}



vector<string> joiningChars(vector<char> W,vector<char> V){

vector<string>WW_sum;
string S1;
string S2;
string helper;
    for(auto i : W){
        for(auto j: V){
            S1=i;
            S2=j;
            helper=S1+S2;
            WW_sum.push_back(helper);
        }
    }
    return WW_sum;
}

vector<string> joiningCharsAndStrings(vector<string> W,vector<char> V){

vector<string>WW_sum;
string S1;
string S2;
string helper;
    for(auto i : W){
        for(auto j: V){
            S1=i;
            S2=j;
            helper=S1+S2;
            WW_sum.push_back(helper);
        }
    }
    return WW_sum;
}


int main(){


string digits = "2359";
vector<vector<char>> Vectors;
for(int i=0; i<digits.size();i++){
    vector<char> SS=giveChar(digits[i]);
    Vectors.push_back(SS);
}
cout << endl;
for(int i=0; i<Vectors.size();i++){
    for(int j=0;j<Vectors[i].size();j++){
    cout << Vectors[i][j] << "\t";
    }
    cout << endl;
}

vector<char> JJ0=Vectors[0];
vector<char> JJ1=Vectors[1];

vector<string>JointVector=joiningChars(JJ0,JJ1);
cout << JointVector.size() << endl;
for(int i=0;i<JointVector.size();i++){
    cout << JointVector[i] << "\t";
}
cout << endl;

vector<string> JointVector1=joiningCharsAndStrings(JointVector,Vectors[2]);

for(int i=0;i<JointVector1.size();i++){
    cout << JointVector1[i] << "\t";
}
cout << endl << endl;

vector<string> JointVector2=joiningCharsAndStrings(JointVector1,Vectors[3]);

for(int i=0;i<JointVector2.size();i++){
    cout << JointVector2[i] << "\t";
}
cout << endl;
cout << "vector size is: " << JointVector2.size();


return 0;
}

