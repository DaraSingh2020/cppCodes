#include<iostream>
#include<thread>
#include<functional>
#include<vector>
#include<mutex>

std::mutex gLock;
static int shared_value = 0;

void shared_value_increment(){
std::lock_guard<std::mutex> lockGuard(gLock);

try{
    shared_value++;
    shared_value++;
    shared_value--;
    shared_value++;
    shared_value--;
    shared_value++;
    shared_value--;
    throw "This is an exception";
}
catch(...){
std::cout << "Exception has happened" << std::endl;
std::cout << "With LockGuard RAII is enforced" << std::endl;
return;
}
gLock.unlock();
}


int main(){

std::vector<std::thread> threads;
for(int i{0};i<100;++i){
    threads.push_back(std::thread(shared_value_increment));
}

for(auto& t:threads){
    t.join();
}

std::cout << "Shared Value: "<< shared_value << std::endl;


return 0;
}
