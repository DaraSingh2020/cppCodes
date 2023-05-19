#include <iostream>
#include <memory>

using namespace std;

class counterClass{
int counter=0;
protected:
int DaraAge;
int counter1;
public:
counterClass(int daraAge){
DaraAge=daraAge;
};
void setCounter(int counter1){
counter+=counter1;
}
int getCounter(){
return counter;
}
};

class daraCreated: public counterClass{
int counter_;
public:
daraCreated(int daraAge):counterClass(daraAge){
counter_=1;
setCounter(counter_);
};
void daraAge(){
cout << "Dara\'s age is: " << DaraAge << endl;
cout << "Number of constructors: " << getCounter() << endl << endl;
};

~daraCreated(){
counter_=-1;
setCounter(counter_);
cout << "distructor of the base class is invoked!" << endl;
cout << "Number of constructors: " << getCounter() << endl;
};
};


int main(){
int age1=59;
int age2=77;


{
    daraCreated dara=daraCreated(age1);
    dara.daraAge();
    {
            daraCreated dara_=daraCreated(age2);
            dara_.daraAge();
    }
}

system("pause>0");
return 0;
}
