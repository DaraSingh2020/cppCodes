#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class abstractDaraGymDay{
virtual void isInjured()=0;
};

class daraGymDay:abstractDaraGymDay{
//string Name;
string Exercise;
//int Hours;

protected:
string Name;
int Hours;

public:
daraGymDay(string name, string exercise, int hours){
Name=name;
Exercise=exercise;
Hours=hours;
}
void daraDoes(){
cout << Name << " spends " << Hours << " in the gym to exercise his " << Exercise << "." <<endl;
}
void setName(string name){
Name=name;}
string getName(){
return Name;
}
void setExercise(string exercise){
Exercise=exercise;
}
string getExercise(){
return Exercise;
}
void setHours(int hours){
Hours=hours;
}
int getHours(){
return Hours;
}
void isInjured(){
if (Hours>3){
    cout << "Exercising " << Hours << " is dangerous." << Name << " is injured by now." << endl;
}
else {
    cout << Name << " is fine." << endl;
}
cout << endl;
}

};

class nutrition: daraGymDay{
string Protein;

public:
// constructors are public, with no return type and have the same name as the class.
nutrition(string name, string exercise, int hours, string protein):daraGymDay(name,exercise,hours){
Protein=protein;
}
void tellMeMore(){
cout << "Name: " << getName() << ", Exercise: " << getExercise() << ", Hours in the gym: " << getHours() << ", Nutrition: " << Protein << endl;
cout << getName() << " \'s nutrition is " << Protein << ", so he is good." << endl;
}

};

class darasFriend:daraGymDay{
string HisName;

public:
darasFriend(string hisName, string name, int hours, string exercise):daraGymDay(name,exercise,hours){
HisName=hisName;
}
void whatTheyDo(int hours){
cout<< endl << Name << " and his friend, " << HisName << " spend " << Hours << " hours working out in the gym." << endl;
}
};


int main(){
daraGymDay dara=daraGymDay("Dara","arms",3);
dara.daraDoes();
dara.isInjured();

dara.setHours(5);
dara.daraDoes();
dara.isInjured();

dara.setExercise("legs");
dara.daraDoes();
dara.isInjured();

nutrition daraEats=nutrition("Dara","Chest", 4, "Whey");
daraEats.tellMeMore();

darasFriend masoud=darasFriend("Masoud","Dara",7,"shoulders");
masoud.whatTheyDo(7);
}
