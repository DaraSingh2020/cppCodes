#include<iostream>
#include<numeric>
#include<functional>
#include<vector>
#include<string>

void Test1(){
std::cout << "================== Test: 1 =================="<< std::endl;
std::vector<int>V{ 10,20,30,40};
std::for_each(std::begin(V),std::end(V),[](const int& N){std::cout << N << "    ";});
std::cout <<std::endl<<
"================== Test: 1 End =============="<< std::endl << std::endl;

}

void Test2(){
std::cout << "================== Test: 2 =================="<< std::endl;

struct Point{
int X;
int Y;
};

Point P1{2,3};
Point P2{4,5};
Point P3{6,7};
Point P4{0,1};
std::vector<Point>V1{P1,P2,P3};
std::vector<Point>V2{P3,P1,P2};
std::vector<Point>V3{P4,P2,P1};

if(std::is_permutation(std::begin(V1), std::end(V1),std::begin(V2),[](Point p1, Point p2){
 return p1.X==p2.X && p1.Y==p2.Y;   })
){
std::cout << " The triangles are equivalent" << std::endl;
}
else{
    std::cout << " The triangles are different" << std::endl;
}

if(std::is_permutation(std::begin(V1), std::end(V1),std::begin(V3),[](Point p1, Point p2){
 return p1.X==p2.X && p1.Y==p2.Y;   })
){
std::cout << " The triangles are equivalent" << std::endl;
}
else{
    std::cout << " The triangles are different" << std::endl;
}

if(std::is_permutation(std::begin(V2), std::end(V2),std::begin(V3),[](Point p1, Point p2){
 return p1.X==p2.X && p1.Y==p2.Y;   })
){
std::cout << " The triangles are equivalent" << std::endl;
}
else{
    std::cout << " The triangles are different" << std::endl;
}

std::cout <<std::endl<<
"================== Test: 2 End =============="<< std::endl << std::endl;

}

void Test3(){
std::cout << "================== Test: 3 =================="<< std::endl;
std::vector<int>V{ 11,20,33,40};
for(const auto& v:V){
    std::cout << v << "  ";
}
std::cout << std::endl;


V.erase(std::remove_if(std::begin(V),std::end(V),[](int N){
                       return N%2==0;
                       }),
                       std::end(V));

for(const auto& v:V){
    std::cout << v << "  ";
}
std::cout << std::endl;




std::cout <<std::endl<<
"================== Test: 3 End =============="<< std::endl << std::endl;

}




int main(){

Test1();
Test2();
Test3();

return 0;
}
