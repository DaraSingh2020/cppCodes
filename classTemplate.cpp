#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

template <typename T1,typename T2>
struct DataHolder{
T1 key;
T2 value;
};
void printLines(char C, int N){
for(int i{0}; i<N; ++i){
    std::cout << C;
}
std::cout << std::endl;
}


void printPairedClass(const std::vector<DataHolder<std::string,int>> &V){
printLines('=', 30);
for(const auto v:V){
    std::cout << std::setw(20) << std::left << v.key << std::setw(10) << std::left << v.value << std::endl;
}
printLines('=', 30);
}

template <typename T1, typename T2>
class templateClass{
public:
T1 Item1;
T2 Item2;

templateClass(T1 item1, T2 item2):Item1{item1}, Item2{item2}{
}
templateClass(const templateClass& T):templateClass(T.Item1,T.Item2){
}
void print(){
printLines('-', 30);
std::cout << std::setw(20) << std::left << Item1 << std::setw(10) << std::left << Item2 << std::endl;
printLines('-', 30);
}

T1 getItem1(){
return Item1;
}
T2 getItem2(){
return Item2;
}
};



int main(){
DataHolder<std::string,int> D1{"Dara",40};
DataHolder<int,double>D2{345,3.141569};
DataHolder<std::string,int> D3 {"Jax",34};
std::vector<DataHolder<std::string,int>>V{D1,D3};
printPairedClass(V);

templateClass<std::string,int> someClass1("Jerry", 35);
templateClass<std::string,int> someClass2("Jonnathan", 88);
someClass1.print();
someClass2.print();


templateClass<templateClass<std::string,int>,int>someClass11(someClass1,1);
templateClass<templateClass<std::string,int>,int>someClass12(someClass2,2);
std::cout << someClass11.Item1.Item1 << std::endl;
std::cout << someClass11.getItem1().getItem2() << std::endl;
std::cout << someClass11.getItem1().getItem1() << std::endl;
someClass11.getItem1().print();
someClass12.getItem1().print();

templateClass<templateClass<std::string,int>,int>someClass13{{"Larry",83},43};
someClass13.getItem1().print();
templateClass<int,templateClass<std::string,int>>someClass14{77,{"Jax",16}};
someClass14.getItem2().print();
templateClass<templateClass<int, std::string>,templateClass<std::string,int>>someClass15{{19,"Jeffffffff"},{"Johnnnnnnyy",56}};
someClass15.getItem1().print();
someClass15.getItem2().print();

return 0;
}
