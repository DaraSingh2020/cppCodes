#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
#include<deque>
#include<cctype>


std::deque<char> onlyLowerChar(const std::string &S){
std::deque<char>d{};
for(int i{0};i<S.size();++i){
    if(std::isalpha(S.at(i))){
        d.push_back(std::tolower(S.at(i)));
    }
}
return d;
}

bool is_palidrome(std::deque<char> d){
while(d.size()>0){
    if(d.size()==1){
        return true;
    }
    if(d.front()==d.back()){
        d.pop_front();
        d.pop_back();
    }
    else {
        return false;
    }
}

return true;
}


int main(){
std::string S{"#8&&@@AAAA)(#"};
std::deque<char> SS=onlyLowerChar(S);
std::cout << SS.front() << std::endl;
std::cout << std::boolalpha << is_palidrome(SS) << std::endl;


return 0;
}
