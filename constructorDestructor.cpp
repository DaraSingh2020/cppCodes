#include <iostream>
#include <string>
#include <vector>


class Player{
    int weight{0};
    std::string name{};
    int age{0};

    public:
    Player(){
        this->name="XXX";
        this->age=31;
        this->weight=82;
    }
    Player(std::string name){
        this->name=name;
        this->age=31;
        this->weight=82;
    }
    Player(std::string name, int age){
        this->name=name;
        this->age=age;
        this->weight=82;
    }
    Player(std::string name, int age, int weight){
        this->name=name;
        this->age=age;
        this->weight=weight;
    }
    ~Player(){
        std::cout << "Going out of the curly braces in main. Destructor is being called." << std:: endl;
        std::cout << this->name << "\'s destructor is being called!" << std::endl << std:: endl;
    }
    void setName(std::string name){
    this->name=name;
    }
    std::string getName(){
    return this->name;
    }
    void setAge(int age){
    this->age=age;
    }
    int getAge(){
    return age;
    }
    void setWeight(int weight){
    this->weight=weight;
    }
    int getWeight(){
    return this->weight;
    }
    void displayInfo(){
        std::cout << "Name: " << this->name << " Age: " << this->age << " weight: " << this->weight << std::endl << std:: endl;
    }

};

int main(){

    {
        Player P1;
        P1.displayInfo();
        P1.setName("Jax");
        P1.displayInfo();
        P1.setAge(74);
        P1.setWeight(186);
        P1.displayInfo();
    }

    Player P2{"Dara",40,86};
    P2.displayInfo();

    Player* P1_ptr{nullptr};
    P1_ptr = new Player{"Jimmy", 33, 99};
    P1_ptr->displayInfo();
    P1_ptr->setName("Osgooi");
    P1_ptr->setAge(21);
    P1_ptr->displayInfo();

    Player* const P2_ptr=new Player{"Jaysoon", 36};
    (*P2_ptr).displayInfo();
    P2_ptr->setWeight(93);
    P2_ptr->displayInfo();

    {
        Player pp1{"Jimmy", 24, 85};
        pp1.displayInfo();
        Player pp2{"Osgol", 23, 99};
        pp2.displayInfo();

        std::vector<Player> playerVector;
        playerVector.push_back(pp1);
        playerVector.push_back(pp2);

        for(auto p:playerVector){
            p.displayInfo();
        }
        std::cout << "============================="<< std::endl;
        std::cout << "only the copies are deleted." << std::endl;
        std::cout << "============================="<< std::endl;
        pp1.displayInfo();
        pp2.displayInfo();
    }



    delete P1_ptr;
    delete P2_ptr;



return 0;
}

