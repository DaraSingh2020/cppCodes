#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
string pattern="abba";
string s = "dog cat cat dog";


vector<string> words;
        string T="";
        for(int i=0; i<s.size();i++){
            if(s[i]!=' '){
                T+=s[i];
                if(i==s.size()-1){
                    words.push_back(T);
                }
            }
            else{
                if(T.size()>0){
                    words.push_back(T);
                    T="";
                }
            }
        }
        for(auto& w:words){
            cout<< w << "\t";
        }

        if(pattern.size()!=words.size()){
            cout << false << endl;
        }

        unordered_map<char,string>M;
        for(int i=0;i<words.size();i++){
            if(M.find(pattern[i])!=M.end()){
                auto it=M.find(pattern[i]);
                if(it->second!=words[i]){
                    return false;
                }
            }
            else{
                M[pattern[i]]=words[i];
            }
        }




return 0;
}
