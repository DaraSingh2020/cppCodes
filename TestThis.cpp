#include <iostream>
#include <cstring>
#include <string>

class MyString{
    char* str;
public:
    MyString();
    MyString(const char* s);
    MyString(const MyString& source);

    ~MyString();
    void display() const;
    int getLength() const;
    const char* getString() const;
};


MyString::MyString():str{nullptr}{
str=new char[1];
*str = '\0';
}

MyString::MyString(const char* s):str{nullptr}{
    if(s==nullptr){
        str= new char[1];
        *str = '\0';
    }
    else{
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}

MyString::MyString(const MyString& source):str{nullptr}{
    str = new char[std::strlen(source.str)+1];
    std::strcpy(this->str,source.str);
}

MyString::~MyString(){
    std::cout << str << "--object is deleted! " << std::endl;
    delete []str;
}

void MyString::display() const {
    std::cout << str << ": " << getLength() << std:: endl;
}

int MyString::getLength() const {
    return std::strlen(str);
}

const char* MyString::getString() const{
    return str;
}


using namespace std;

int main(){

    MyString emptyString;
    MyString Jax("Larry");
    MyString Jaxson{Jax};

    emptyString.display();
    Jax.display();
    Jaxson.display();

    std::string* Name{nullptr};
    Name = new std::string{"Jimmy"};
    std::cout << *Name << std::endl;


    char* name{nullptr};
    name = new char[6]{"DaraS"};

    std::cout << name << std::endl;

    delete Name;
    delete []name;




return 0;
}
