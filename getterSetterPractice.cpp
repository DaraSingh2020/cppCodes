#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class describeThem{
string Name;
string Food;
int SleepHours;

public:
string decribePerson(){
cout << Name << " eats " << Food << " and sleeps " << SleepHours << " hours everyday. Is he lazy?" << endl;
return (SleepHours>8)? "Yes. He is lazy." : "No. He needs some sleep.";
}
describeThem(string name, string food, int sleepHours){
Name=name;
Food=food;
SleepHours=sleepHours;
}
void setName(string name){
Name=name;
}
string getName(){
return Name;
}
void setFood(string food){
Food=food;
}
string getFood(){
return Food;
}
void setSleepHours(int sleepHours){
SleepHours=sleepHours;
cout << "Warning: the sleep hours has been changed!" << endl;
}
};

int main(){
describeThem thisMan=describeThem("Dara","noodles",16);
string answer=thisMan.decribePerson();
cout << endl << answer << endl << endl;

thisMan.setSleepHours(7);
answer=thisMan.decribePerson();
cout << endl << answer << endl;

thisMan.setFood("Pizza");
answer=thisMan.decribePerson();
cout << endl << answer << endl;

return 0;
}
