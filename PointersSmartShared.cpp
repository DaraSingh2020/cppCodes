#include <iostream>
#include <memory>

using namespace std;

class daraClass {
string ClassName;
public:
    daraClass(string className){
    ClassName=className;
    cout << "Dara\'s class with name \'" << ClassName << "\' is constructed" << endl;

    }
void doSomething(){
cout << "Just a class!" << endl;
}
~daraClass(){
cout << "Dara\'s class with name \'" << ClassName << "\' is destructed for good! " << endl;
}
};

void printInformation(shared_ptr<int> numberPointer);
void printInformation(shared_ptr<daraClass> numberPointer);

int main(){
daraClass dara=daraClass("dara");
{
    cout<< "inside the scope: " << endl;
    daraClass daraBig=daraClass("daraBig");
}

cout<< "We can create another one since it\'s already destroyed: " << endl;
daraClass daraBig=daraClass("daraBig");


shared_ptr<int>sharedPTR1=make_shared<int>(10);
printInformation(sharedPTR1);
shared_ptr<int>sharedPTR2=make_shared<int>(18);
printInformation(sharedPTR2);
shared_ptr<int>sharedPTR3=sharedPTR1;
printInformation(sharedPTR3);

shared_ptr<daraClass>sharedPTRdara=make_shared<daraClass>(dara);
printInformation(sharedPTRdara);
shared_ptr<daraClass>sharedPTRdaraBig=make_shared<daraClass>(daraBig);
printInformation(sharedPTRdaraBig);


system("pause>0");
return 0;
}

void printInformation(shared_ptr<int> numberPointer){
cout << "Number of share holders of " << numberPointer << " is: " << numberPointer.use_count()<< endl;
cout << "It\'s value is: " << *numberPointer << endl;
}
void printInformation(shared_ptr<daraClass> numberPointer){
cout << "Number of share holders of " << numberPointer << " is: " << numberPointer.use_count()<< endl;
cout << "It\'s value cannot be retrieved. *numberPointer does not work " << endl;
}
