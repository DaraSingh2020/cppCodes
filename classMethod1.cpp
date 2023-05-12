#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class introduction{
public:
    string name;
    string job;
    bool programmer;

    // This is a method. functions inside a class are called method. Constructors don't come with void.
    void basicClassMethod(){
        cout << "Name: " << name << ", Job: " << job << ", Do you like programming? " << programmer << endl;
    }
};

int main(){
introduction daraIntro;
daraIntro.name="Dara";
daraIntro.job="postdoc";
daraIntro.programmer= true;
daraIntro.basicClassMethod();


return 0;
}
