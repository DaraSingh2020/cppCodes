#include<iostream>
#include<thread>
#include<functional>
#include<vector>


void test(int x){
std::cout << "Hello from our thread with ID: " <<std::this_thread::get_id() << std::endl;
std::cout << "Agrument passed: "<< x << std::endl;
}




int main(){

std::thread myThread(&test,100);
myThread.join();

std::function<void(int)> I = [](int x){
std::cout << "Hello from our thread from lambda function" << std::endl;
std::cout << "thread with ID: " <<std::this_thread::get_id << std::endl;
std::cout << "Agrument passed to lambda function: "<< x << std::endl;
};
std::cout << std::endl;

std::thread daraThread(I,200);
daraThread.join();

std::cout << std::endl;
std::vector<std::thread> threads;
for(int i{0};i<10;++i){
    threads.push_back(std::thread(I,i));
}

for(auto& t:threads){
    t.join();
}

std::cout << std::endl;
std::vector<std::thread> threads_;
for(int i{0};i<10;++i){
    threads_.push_back(std::thread(I,700));
    threads_.at(i).join();
}


std::cout << "Hello from my main thread"
 << std::endl;


return 0;
}
