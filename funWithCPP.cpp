#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void pyramid(string word){

    size_t size_word=word.length();
    for(size_t i{0};i<size_word;i++){
        for(size_t j{0};j<size_word;j++){
            if(i>=size_word-j-1){
                cout << word.at(size_word-j-1);
            }
            else{
                cout << " ";
            }
        }
        cout << word.substr(1,i);
        cout << endl;
    }
}


void pyramid2(string word){

    size_t size_word=word.length();
    for(size_t i{0};i<size_word;i++){
        for(size_t j{0};j<size_word-i;j++){
            if(i<size_word-j-1){
                cout << " " ;
            }
        }
        string word1{word.substr(0,i+1)};
        cout << word1;
        string word2{word1};

        reverse(word2.begin(),word2.end());
        cout << word2.substr(1,size_word-1);
        cout << endl;
    }
}




int main(){
string word1{"ABC"};
pyramid(word1);
string word2{"12345"};
pyramid(word2);
string word3{"ABCDEFG"};
pyramid(word3);
string word4{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
pyramid(word4);

cout << "========================" << endl;
pyramid2(word1);
pyramid2(word2);
pyramid2(word3);
pyramid2(word4);

string word{};
cout << "Please enter a word for pyramid:";
getline(cin,word);
pyramid2(word);


return 0;
}

