#include <iostream>
#include <string>


class Person{
std::string name;
int age;

public:
    Person():Person{"None",18}{
        std::cout << "zero arg constructor" << std::endl;
    }
    Person(std::string name):Person{name,18}{
        std::cout << "One arg constructor" << std::endl;
    }
    Person(std::string name, int age):name{name},age{age}{
        std::cout << "Two arg constructor" << std::endl;
    }
    ~Person(){
    }
    void displayInfo(){
    std::cout << "Name: " << this->name << " age: " << this->age << std:: endl;
    }
};

class Student{
    std::string name;
    char grade;

    public:
    Student(std::string name = "None", char grade = 'F'):name{name}, grade{grade}{
    }

    void displayInfo(){
    std::cout << this->name << " got " << this->grade << " grade. Must improve!" << std::endl;
    }
};

int main(){

    Person P1;
    P1.displayInfo();
    std::cout << std:: endl;

    Person P2("Jumpy");
    P2.displayInfo();
    std::cout << std:: endl;

    Person P3("Juioioi",89);
    P3.displayInfo();
    std::cout << std:: endl;

    Student S3("Juioioi",'A');
    S3.displayInfo();
    std::cout << std:: endl;

    Student S2("Essi",'C');
    S2.displayInfo();
    std::cout << std:: endl;

    Student S1("Jonnathan");
    S1.displayInfo();
    std::cout << std:: endl;

return 0;
}
