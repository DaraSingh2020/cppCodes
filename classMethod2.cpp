#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class daraJob {
string Name;
string Job;
int Experience;

public:
void introduceYourself(){
cout << "My name is " << Name << " and I am a " << Job << " expert with " << Experience << " years of experience.";
}
daraJob(string name, string job, int experience){
Name=name;
Job=job;
Experience=experience;
}
};

int main(){
daraJob daraIs=daraJob("Dara","Postdoctoral Scholar", 99);
daraIs.introduceYourself();

return 0;
}
