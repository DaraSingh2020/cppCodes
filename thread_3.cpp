#include<iostream>
#include<thread>
#include<atomic>
#include<vector>

std::atomic<int> shared_value{0};

void shared_value_increment(){
shared_value++;
}

int main(){
std::vector<std::thread> threads;

for(int i{0};i<1000;++i){
    threads.push_back(std::thread(shared_value_increment));
}

for(int i{0};i<1000;++i){
    threads.at(i).join();
}

std::cout<< shared_value << std::endl;

return 0;
}
