#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main(){
string s1 = "A man, a plan, a canal: Panama";
string s2 = "race a car";
string s3 = "ab";
vector<string> SS={s1,s2,s3};
for (string s :SS){
//string s=s3;
vector<char> stk1;
int len=s.size();
cout << len << endl;
for (int i=0;i<len;i++){
    if(isalnum(s[i])){
    stk1.push_back(tolower(s[i]));
    }
}
cout << stk1.size() <<endl << endl;
for(int i=0;i<stk1.size();i++){
    cout << stk1[i] << " ";
}
cout <<  endl;
bool yes=false;
int i=0;
int j=stk1.size()-1;
while(i<j){
    cout << i << endl;
    if(stk1[i]!=stk1[j]){
            cout << "No!" << endl;
        break;

    }
    else {
        cout << stk1[i] << "\t" << stk1[j] << endl;
    i++;
    j--;
    if(j<=i){
    yes=true;
    cout << "Yes" << endl;
    }
}
}
}
return 0;
}
