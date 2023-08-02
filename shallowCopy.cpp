#include <iostream>
#include <cstring>

using namespace std;

class Person{
    int Age{0};
    char* Name{nullptr};
public:
    Person(const char* name,int age){
        this->Age=age;
        this->Name = new char[strlen(name)+1];
        strcpy(this->Name,name);
    }
    Person(const Person& otherPerson){
        this->Name=new char[strlen(otherPerson.Name)+1];
        strcpy(this->Name,otherPerson.Name);
        this->Age=otherPerson.Age;
    }
    ~Person(){
        delete [] Name;
    }
    void displayInf() const {
    cout << "This person\'s name is " << this->Name << " and his age " << this->Age << endl;}

    void setName(char* N){
        this->Name=N;
    }
    void setAge(const int age){
        this->Age=age;
    }
};



int main(){
    Person *person1_ptr= new Person("Dara",40);
    cout << "Created Person1 dynamically: " << endl;
    (*person1_ptr).displayInf();
    cout << endl;

    cout << "Created Person2 on the stack: " << endl;
    Person person2=Person("Jax", 33);
    person2.displayInf();
    cout << endl;

    cout << "Created Person3 as a copy of person2: " << endl;
    Person person3=Person(person2);
    person3.displayInf();
    cout << endl;

    char newName[]{"Jakxon"};
    person3.setName(newName);
    person3.setAge(65);
    cout << "Set person3 name to different thing: " << endl;
    person3.displayInf();
    cout << endl;

    cout << "double checking person2. deep copy was successful: " << endl;
    person2.displayInf();
    cout << endl;

    Person *person4=person1_ptr;
    cout << "checking out person4 information: " << endl;
    (*person4).displayInf();
    cout << endl;

    (*person4).setAge(31);
    char* person4Name[]{nullptr};
    char person4Name_[]{"Andy"};
    *person4Name=person4Name_;
    (*person4).setName(*person4Name);
    cout << "person4 information modified: " << endl;
    (*person4).displayInf();
    cout << endl;


return 0;
}
