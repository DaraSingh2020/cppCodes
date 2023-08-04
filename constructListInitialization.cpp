#include <iostream>
#include <vector>
#include <string>

class Person{
    std::string name;
    int age;
    int weight;

    public:
    Person(std::string name, int age, int weight)
    :name{name},age{age},weight{weight}{
    }
    Person()
    :name{"None"},age{18},weight{75}{
    }
    Person(std::string name)
    :name{name},age{18},weight{75}{
    }
    Person(std::string name, int age)
    :name{name},age{age},weight{75}{
    }
    void displayInfo(){
    std::cout << this->name << " is a person whose age is " << this->age << " and their weigth is " << this->weight << std:: endl;
    }
    ~Person(){
    std:: cout << this->name << " object is destroyed" << std::endl;
    }

};

int main(){
    Person P1("Dara", 42, 87);
    P1.displayInfo();
    Person P2;
    P2.displayInfo();
    Person P3("Zighi");
    P3.displayInfo();
    Person P4("jaisoooon",75);
    P4.displayInfo();


    std:: cout << "============================================" << std:: endl;
    std:: cout << "======= Loop start =========================" << std:: endl;
    std::vector<Person>personVector{P1,P2,P3,P4};
    for(auto p:personVector){
        p.displayInfo();
    }
    std::cout << "===============================================" << std::endl;
    std:: cout << "======= Loop End =============================" << std:: endl << std::endl;

    Person* ptr1{nullptr};
    ptr1 = new Person("Dina", 33, 99);
    ptr1->displayInfo();

    Person* ptr2{nullptr};
    ptr2 =  new Person("Diff",45,49);
    ptr2->displayInfo();

    delete ptr1;
    delete ptr2;

    std::cout << std:: endl << "=================== Program is exiting ===================" << std::endl << std:: endl;


return 0;
}
