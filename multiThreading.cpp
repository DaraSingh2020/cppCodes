#include <iostream>
#include <string>
#include <thread>
using namespace std;

void print2(){
    for(int i=0; i<200; i++){
cout << '*';
}}
void print1(){
    for(int i=0; i<200; i++){
cout << '-';
}}
void print3(){
    for(int i=0; i<200; i++){
cout << '+';
}}
void print4(){
    for(int i=0; i<200; i++){
cout << 'k';
}}

int squareIt(int x){
return x*x;}

void printTheSquare(int X){
for (int i=0; i<200;i++){
    cout << squareIt(X) ;
}
}

auto F=[](int param,int param1){
    for(int i=0;i<param1;i++){
cout << param+7;
}};


int main(){
int N=7;
int P=6;
int T=300;

thread worker1(print1);
worker1.join();
thread worker2(print2);
worker2.join();
thread worker3(print3);
thread worker4(print4);

thread worker5(printTheSquare,N);
thread workder6(F,P,T);

return 0;
}
