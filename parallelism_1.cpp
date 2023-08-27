#include<iostream>
#include<thread>

void callFromFunction(int threadID){
std::cout<< "This is a call from a thread #" << threadID <<std::endl;
}
void printBlock(){
std::cout << "===============================================================" << std::endl;
std::cout << "============Did you see that? Thread not synced================" << std::endl;
std::cout << "========= Make all threads join before main ends  =============" << std::endl;
std::cout << "===============================================================" << std::endl;
}

int main(){
const int N{10};
std::thread T[N];

for(int i{0}; i<N; ++i){
    T[i]=std::thread(callFromFunction,i);
}


std::cout<< "This is a call from the main function " <<std::endl;

printBlock();

for(int i{0}; i<N; ++i){
    std::cout << "waiting for thread #" << i << " to join..." << std::endl;
    T[i].join();
}
std::cout << "All threads joined by now" << std::endl;



return 0;
}
