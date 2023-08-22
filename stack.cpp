#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<cstdlib>
#include<string>
#include<queue>
#include<iomanip>

template<typename T>
void displayStack(std::stack<T> S){
int N{50};
for(int i{0}; i<N;++i){
    std::cout << '=';
}
std::cout << std::endl;
    while(!S.empty()){
        std::cout << S.top() << " ";
        S.pop();
    }
std::cout << std::endl;
for(int i{0}; i<N;++i){
    std::cout << '=';
}
std::cout << std::endl;
}


template<typename T>
void displayStack1(std::stack<T,std::vector<T>> S){
int N{50};
for(int i{0}; i<N;++i){
    std::cout << '=';
}
std::cout << std::endl;
    while(!S.empty()){
        std::cout << S.top() << " ";
        S.pop();
    }
std::cout << std::endl;
for(int i{0}; i<N;++i){
    std::cout << '=';
}
std::cout << std::endl;
}

template<typename T>
void displayStack2(std::stack<T,std::list<T>> S){
int N{50};
for(int i{0}; i<N;++i){
    std::cout << '=';
}
std::cout << std::endl;
    while(!S.empty()){
        std::cout << S.top() << " ";
        S.pop();
    }
std::cout << std::endl;
for(int i{0}; i<N;++i){
    std::cout << '=';
}
std::cout << std::endl;
}

bool isPalindrome(std::stack<char> S, std::queue<char> Q){
while(!Q.empty()){
    if(Q.front()!=S.top()){
        return false;
    }
    Q.pop();
    S.pop();
}
return true;
}

void question(std::string str){

    std::stack<char> SS{};
    std::queue<char> QQ{};
    for(int i{0};i<str.size();++i){
        char C{str.at(i)};
        if(isalpha(C)){
            C=toupper(C);
            SS.push(C);
            QQ.push(C);
        }
    }

    std::cout<< std::boolalpha << std::endl;

    std::cout << "Ignoring non-alphabates, is "<< str << " a palindrome word?: " << isPalindrome(SS,QQ) << std::endl;
}





int main(){
std::stack<int> S;
int N{};
for(int i{0}; i<17;++i){
    N=rand()%10;
    std::cout << N << " ";
    S.push(std::move(N));
}
std::cout << std::endl;
displayStack<int>(S);
displayStack<int>(S);

std::stack<int,std::vector<int>> S1;

for(int i{0}; i<17;++i){
    N=rand()%10;
    std::cout << N << " ";
    S1.push(std::move(N));
}
std::cout << std::endl;
displayStack1(S1);

std::stack<int,std::list<int>> S2;

for(int i{0}; i<17;++i){
    N=rand()%10;
    std::cout << N << " ";
    S2.push(std::move(N));
}
std::cout << std::endl;
displayStack2(S2);

std::string str{"AAAAAA"};
question(str);

str="AAaAaAaA";
question(str);


str="AAaAaAaac";
question(str);

str="AAaAa^&(*??ac";
question(str);

str="A34Aa1Aa^&(*??ac349";
question(str);

str="A34Aa1Aa^&(*??a349";
question(str);


return 0;
}
