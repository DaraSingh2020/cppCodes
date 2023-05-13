#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class abstractWhoIsHe{
virtual void promotionTo(int salary)=0;
};


class whoIsHe:abstractWhoIsHe{
string Name;
string Job;
string Education;
int Salary;

public:
void describeHim(){
cout << "Name: " << Name << ", Job: " << Job << ", Education: " << Education << ", Salary: " << Salary << "$" <<endl;
}
whoIsHe(string name, string job, string education, int salary){
Name=name;
Job=job;
Education=education;
Salary=salary;
}
void setName(string name){
Name=name;
}
string getName(){
return Name;
}
void setJob(string job){
Job=job;
}
string getJob(){
return Job;
}
void setEducation(string education){
Education=education;
}
void setSalary(int salary){
Salary=salary;
}
int getSalary(){
return Salary;
}

void promotionTo(int salary){
cout << endl;
(salary>Salary)? (cout << "gets a raise" << endl) : (cout << "no raise" << endl);
(salary>Salary)? Salary=salary : Salary=Salary;
}
};

int main(){
whoIsHe guyOne=whoIsHe("Dara","Scientist","Ph.D.",12);
guyOne.describeHim();

guyOne.promotionTo(15);
guyOne.describeHim();

guyOne.promotionTo(18);
guyOne.describeHim();

guyOne.promotionTo(13);
guyOne.describeHim();


return 0;
}
