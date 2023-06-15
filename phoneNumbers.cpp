#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<char> giveChars(char ch){
    vector<char> V1;
    char T;
    int Limit=3;
    if(ch=='9'){
        Limit=4;
    }
    int N=int(ch)-int('0');
    int delta=int(ch)-int('2');
    cout << N << "\t" << ":" << "\t";
    for(int i=0; i<Limit;i++){
        T=char(int(ch)+int('1')-2+delta*2+i);
        V1.push_back(T);
    }
return V1;
}

vector<char> giveChars_(char ch){
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

vector<string> joiningStrings(vector<char> Char,vector<string> S2){

vector<string> jointString;
string helper;

    for(char i : Char){
        for(string j: S2){
            helper=i+j;
            jointString.push_back(helper);
        }
    }
    return jointString;
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





vector<string> joining(vector<string> W,vector<char> V){

vector<string>WW_sum;
string W1(V.begin(),V.end());

string helper;
    for(auto i : W){
        for(auto j: W1){
            helper=i+j;
            WW_sum.push_back(helper);
        }
    }
    return WW_sum;
}

int main(){
vector<char> V1;
char ch='2';

V1=giveChars(ch);
for(int i=0; i<V1.size();i++){
    cout << V1[i] << "\t";
}
cout << endl;

vector<char> V2;
ch='3';

V2=giveChars(ch);
for(int i=0; i<V2.size();i++){
    cout << V2[i] << "\t";
}
cout << endl;

vector<char> V3;
ch='4';

V3=giveChars(ch);
for(int i=0; i<V3.size();i++){
    cout << V3[i] << "\t";
}
cout << endl;
vector<char> V5;
ch='6';

V5=giveChars(ch);
for(int i=0; i<V5.size();i++){
    cout << V3[i] << "\t";
}
cout << endl;
vector<char> V4;
ch='5';
V4=giveChars(ch);
for(int i=0; i<V4.size();i++){
    cout << V4[i] << "\t";
}
cout << endl;

string S1;
string S2;
for(int i=0; i<V1.size();i++){
    for(int j=0; j<V2.size();j++){
            S1=V1[i];
            S2=V2[j];
        cout << S1+S2 << "\t";
    }
}
string digits = "2369";
vector<vector<char>> W;
for(int i=0;i<digits.size(); i++){
        ch=digits[i];
    vector<char>* V=new vector<char>;
    *V=giveChars_(ch);
    W.push_back(*V);
}
cout << endl << "W size = "<< W.size() << endl;

for(int i=0; i< W.size();i++){
    for(int j=0; j<W[i].size();j++){
    cout << W[i][j] << "\t";
    }
    cout << endl;
}
//
digits = "239";
ch=digits[0];
vector<char> WW1,WW2;

vector<string>WW_sum,WW_helper,WW_helper1,WW_helper2;
WW1=giveChars_(ch);


WW2=giveChars_(digits[1]);
cout << "dara"<< endl;
WW_helper=joiningChars(WW1, WW2);

WW2=giveChars_(digits[2]);
WW_helper1=joining(WW_helper,WW2);
cout << WW_helper1.size() << endl;

//
cout << endl << "W size = "<< W.size() << endl;

for(int i=0; i< W.size();i++){
    for(int j=0; j<W[i].size();j++){
    cout << W[i][j] << "\t";
    }
    cout << endl;
}


    vector<char> vec = { 'A', 'B', 'C', 'D', 'E' };
    string str(vec.begin(), vec.end());
    for(int i=0; i<str.size();i++){
            cout << str[i] << "\t";
    }



digits = "2359";
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
