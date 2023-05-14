#include <iostream>
#include <string>
#include <list>

using namespace std;

class daraGymDay{
protected:
int NumberOfSets;
bool HeavyLifting;
string GymName;
string Session;

public:
daraGymDay(string gymName,string session){
NumberOfSets=0;
GymName=gymName;
Session=session;
HeavyLifting=true;
}
// this method is only here but not in any child class
void heavyLiftingDay(){
(HeavyLifting)? (cout << "HeavyLifting day! Not so easy!" << endl) : (cout << "Not a heavyLifting day.Easy gym day" << endl);
}
};


class daraArmDay:public daraGymDay{
public:
daraArmDay(string gymName,bool heavyLifting,string session):daraGymDay(gymName,session){
HeavyLifting=heavyLifting;
}
// the following methods are not the in parent class
void practice(){
NumberOfSets++;
cout << "Dara likes arms day" << endl;
}
void wasPracticeGood(){
if (NumberOfSets >7){
    cout << "Dara\'s practice was good" << endl;
}
else {
    cout << "Dara did not practice well enough for arms days" << endl;
    cout << "His total sets were: " << NumberOfSets << endl;
}
}
};

class daraLegDay:public daraGymDay{
public:
daraLegDay(string gymName,bool heavyLifting,string session):daraGymDay(gymName,session){
HeavyLifting=heavyLifting;
}
// the following methods are not the in parent class
void practice(){
NumberOfSets++;
cout << "Dara likes legs day" << endl;
}
void wasPracticeGood(){
if (NumberOfSets >4){
    cout << "Dara\'s practice was good for a leg day" << endl;
}
else {
    cout << "Dara did not practice well enough for legs days" << endl;
    cout << "His total sets were: " << NumberOfSets << endl;
}
}
};


int main(){
daraArmDay daraArmDay("Alumni",false,"Morning");
daraArmDay.heavyLiftingDay();
for(int i=0; i<5; i++){
    daraArmDay.practice();
}
daraArmDay.wasPracticeGood();

daraLegDay legExercise=daraLegDay("Alumni",true,"Morning");
legExercise.heavyLiftingDay();
for(int i=0; i<5; i++){
    legExercise.practice();
}
legExercise.wasPracticeGood();


daraGymDay* pointerToLegDay=&legExercise; //pointers of the base class--daraGymDay
daraGymDay* pointerToArmDay=&daraArmDay;

pointerToLegDay->heavyLiftingDay();  //legExercise.heavyLiftingDay(); using pointer to get here
pointerToArmDay->heavyLiftingDay();  //daraArmDay.heavyLiftingDay(); using pointer to get here

return 0;
}
