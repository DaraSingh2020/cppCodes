#include<iostream>
#include<thread>
#include<mutex>

std::mutex mutualExclusive;

void callFromThread(int threadID){
mutualExclusive.lock();
std::cout << "Thread #" << threadID << " is screaming hello" << std::endl;
mutualExclusive.unlock();
}


int main(){

const int N{10};
std::thread T[N];

for(int i{0}; i<N;++i){
    T[i] = std::thread(callFromThread,i);
}



for(int i{0};i<N;++i){
    T[i].join();
}

mutualExclusive.lock();
std::cout << "Hello from the main function" << std::endl;
mutualExclusive.unlock();

return 0;
}
