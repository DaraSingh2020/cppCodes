#include<iostream>
#include<algorithm>
#include<vector>

struct SquareFunctor{
    void operator()(int x){
        std::cout << "Square of "<< x << " is " << x*x << "  " << std::endl;
    }

};

void SquareFunction(int x){
    std::cout << "Square of "<< x << " is " << x*x << "  " << std::endl;
}

int main(){
std::vector<int>V{1,2,3,4,7,9,10};
int N;
bool notDone{true};
do{
    std::cout <<"Please enter 10 to exit or number from 0 to 9: ";
    std::cin >> N;
    auto loc = std::find(V.begin(),V.end(),N);
    if(loc==V.end()){
        std::cout << "You number: " << N << " was\'t in the list!" << std::endl;
    }
    else{
        std::cout << "You number: " << N << " was in the list!" << std::endl;
        std::cout << "you are almost bye bye" << std::endl;
        if(*loc==10){
            std::cout << "You entered 10! It means exit!!" << std::endl;
            std::cout << "Oh! No! bye bye" << std::endl;
            notDone=false;
        }

    }
}
    while(notDone);
std::cout << "Let\'s do functors now!!" << std::endl;
SquareFunctor SquareFunctor;
std::cout << "================ Functor ===============" << std::endl;
std::for_each(V.begin(),V.end(),SquareFunctor);
std::cout << "================ Function pointer ===============" << std::endl;
std::for_each(V.begin(),V.end(),SquareFunction);
std::cout << "================ Lambda Function ===============" << std::endl;
std::for_each(V.begin(),V.end(),[](int x){
              std::cout << "The square of " << x << " is "<< x*x << std::endl;
              });
std::cout << "================ Lambda Function**2 ===============" << std::endl;
std::for_each(V.begin(),V.end(),[](int x){
              std::cout << "The square of " << x << " is "<< x*x << std::endl;
              if((x*x)>10){
                std::cout << "the square is bigger than 10" << std::endl;
              }
              });

return 0;
}
