#include<iostream>
#include<vector>
#include<algorithm>

void display(const std::vector<int>& F){
std::for_each(std::cbegin(F),std::cend(F),[](const int f){
              std::cout << f << " ";});
              std::cout << std::endl;
std::cout <<"Size: "<< F.size()<<" Capacity: "<< F.capacity()
<<" max-size: "<< F.max_size()<< std::endl<< std::endl;
}

int main(){
std::vector<int>V{1,2,4,6,8,3};
std::vector<int>W(10,3);

display(V);
display(W);

std::copy(std::begin(V),std::end(V),std::back_inserter(W));
display(W);

std::copy_if(std::begin(V),std::end(V),std::back_inserter(W),[](int x){
             return x%2==0;});
display(W);

std::for_each(std::begin(W),std::end(W),[](int& x){
              x*=x;});
display(W);

std::vector<int> X;

std::transform(std::begin(V), std::end(V),std::begin(W),std::back_inserter(X),[](int x, int y){
               return x*y;});

display(X);

std::vector<int>::iterator it = std::find(std::begin(W),std::end(W),36);
W.insert(it,std::begin(V),std::end(V));
display(W);

if(it!=W.end()){
    std::cout << *it << " is the dereferenced location of 36 in W" << std::endl;
}
else{
    std::cout << "sorry, 36 was\'t found!!" << std::endl;
}




return 0;
}
