#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;


int main() {
stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;
cout << a << " " << b << " "<< c << endl;

string T0,T1,T;
T0="24,56,85,12";
T1=T0+',';
T=T1+',';

cout << T << endl;
stringstream SS(T);

int N;
char C;
vector<int> daraV;

while(SS >> N >> C){
    cout << N << endl;
    daraV.push_back(N);
}
for(int i=0; i<daraV.size(); i++){
    printf("%d \n", daraV[i]);
}

string daraSays("I am a happy person!");
stringstream strDara;
strDara << daraSays;
string tokenizer;
while(strDara >> tokenizer){
    cout << tokenizer<< endl;
}

string daraSays1("I am a, happy $$% person!");
stringstream strDara1;
strDara1 << daraSays1;
string tokenizer1;
while(strDara1 >> tokenizer1){
    cout << tokenizer1 << endl;
}

string daraSays2="I am a, happy $$% person!";
stringstream strDara2;
strDara2 << daraSays2 << " " << 4 << " "<< daraSays;
string tokenizer2;
while(strDara2 >> tokenizer2){
    cout << tokenizer2 << endl;
}
return 0;
}
