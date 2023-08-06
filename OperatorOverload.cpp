#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

class MyString{
    char* str;

public:
    MyString();
    MyString(char* s);
    MyString(const MyString& source);

    ~MyString();
    MyString& operator=(const MyString& rhs);

    void display() const;
    int getLength() const;
    const char* getString() const;
};

MyString::MyString():str{nullptr}{
str = new char[1];
*str = '\0';
}

MyString::MyString(char* s):str{nullptr}{
    if(s==nullptr){
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}
MyString::MyString(const MyString& source):str{nullptr}{
str = new char[std::strlen(source.str)+1];
std::strcpy(str,source.str);
}

MyString::~MyString(){
std::cout << "Deleting: " << str << std::endl;
delete []str;
}

MyString& MyString::operator=(const MyString& rhs){
    std::cout << " Copy assignment" << std::endl;
    if(this==&rhs){
        return *this;
    }
    delete [] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str,rhs.str);
    return *this;

}


int main(){
    MyString a{"Hello"};
    MyString b;

    b=a;

    b="This is just a Test!!!!";






return 0;
}
