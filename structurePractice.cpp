#include <iostream>

using namespace std;

struct cellphone {
string name;
float cost;
int usageYears;
bool hasInternet;
};

struct person{
string name;
int age;
string job;
cellphone phone;
};


void printPersonalInfo(person p){
cout << "Name: "<< p.name << endl;
cout << "JOb: "<< p.job << endl;
cout << "Age: "<< p.age << endl;
cout << "Phone:"<< p.phone.name << endl;
cout << "Phone cost:"<< p.phone.cost << endl;
cout << "Phone age:"<< p.phone.usageYears << endl;
cout << "Phone has internet?:"<< p.phone.hasInternet << endl << endl;
}



int main(){

cellphone C1;
C1.name="iPhone";
C1.cost=63.95;
C1.usageYears=9;
C1.hasInternet=false;


cellphone C2;
C2.name="galaxy";
C2.cost=899.99;
C2.usageYears=1;
C2.hasInternet=true;

person MrSingh;
MrSingh.name="dara";
MrSingh.age=69;
MrSingh.job="Engineer";
MrSingh.phone=C1;

person Jax;
Jax.name="TJ";
Jax.age=23;
Jax.job="Boxer";
Jax.phone=C2;

person Jay;
Jay.name="Jerry";
Jay.age=35;
Jay.job="Artist";
Jay.phone=C2;
Jay.phone.cost=499.99;
Jay.phone.usageYears=3;

printPersonalInfo(MrSingh);
printPersonalInfo(Jax);
printPersonalInfo(Jay);


system("pause>0");
return 0;
}
