#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>

using namespace std;

class MyString{
    //friend bool operator==(const MyString &lhs, const MyString & rhs);
    //friend MyString operator-(const MyString &obj);
    //friend MyString operator+(const MyString &lhs, const MyString &rhs);
    char* str;

public:
    MyString(); // no arg constructor
    MyString(const char* s); //overloaded constructor
    MyString(MyString &&source); //copy constructor
    MyString(const MyString &source); // move constructor

    ~MyString(); // destructor

    MyString &operator=(const MyString &rhs); // copy assignment
    MyString &operator=(MyString &&rhs); // move assignment

    MyString operator-() const; // make lowercase
    MyString operator+(const MyString &rhs) const; // concatenate
    MyString operator+( MyString &&rhs);
    bool operator==(const MyString &rhs) const;

    void display() const;

    int getLength() const;
    const char *getStr() const;

};

MyString::MyString(){
str = new char[1];
*str='\0';
}

MyString::MyString(const char* s){
str = new char[strlen(s)+1];
strcpy(str,s);
}

MyString::MyString(MyString && source):str{nullptr}{
*this=move(source);
}

MyString::MyString(const MyString &source){
str = new char[strlen(source.str)+1];
strcpy(str,source.str);
}

MyString& MyString::operator=(const MyString& rhs){
cout << "Using copy assignment" << endl;
if(this==&rhs){
    return *this;
}
delete [] str;
str = new char[strlen(rhs.str)+1];
strcpy(str,rhs.str);
return *this;
}

MyString& MyString::operator=(MyString &&rhs){
cout << "Using move assignment" << endl;
if(this==&rhs){
    return *this;
}
delete [] str;
str=move(rhs.str);
rhs.str=nullptr;
return *this;
}
MyString::~MyString(){
delete [] str;
}

bool MyString::operator==(const MyString &rhs) const{
return (strcmp(str,rhs.str)==0);
}

MyString MyString::operator-() const{
    char* buff = new char[strlen(str)+1];
    strcpy(buff,str);
    for(size_t i{0}; i<strlen(buff); i++){
        buff[i]=tolower(buff[i]);
    }

    MyString temp{buff};
    delete [] buff;
    return temp;
}

MyString MyString::operator+(const MyString &rhs) const{
    char* buff = new char[strlen(str)+strlen(rhs.str)+1];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    MyString temp{buff};
    delete [] buff;
    return temp;
}

MyString MyString::operator+( MyString &&rhs) {
    char* buff = new char[strlen(str)+strlen(rhs.str)+1];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    MyString temp{buff};
    delete [] buff;
    return temp;
}


void MyString::display()const{
cout << str << ": " << getLength() << endl;
}

int MyString::getLength() const{
return strlen(str);
}

const char* MyString::getStr() const{
return str;
}

/*
bool operator==(const MyString &lhs, const MyString &rhs){
return (strcmp(lhs.str, rhs.str)==0);
}


MyString operator-(const MyString &obj){
char* buff =  new char[strlen(obj.str)+1];
strcpy(buff, obj.str);
for(size_t i{0}; strlen(buff); i++){
    buff[i]=tolower(buff[i]);
    }
    MyString temp{buff};
    delete [] buff;
    return temp;
}


MyString operator+(const MyString &lhs, const MyString &rhs){
char* buff = new char[strlen(lhs.str)+strlen(rhs.str)+1];
strcpy(buff,lhs.str);
strcpy(buff,rhs.str);
MyString temp{buff};
delete [] buff;
return temp;
}
*/



int main(){

cout <<fixed << boolalpha;
MyString jax{"Jax"};
MyString jerry{"Jerry"};

MyString jim=jax;

jax.display();
jerry.display();
jim.display();

cout << (jax==jerry) << endl;
cout << (jax==jim) << endl;

jax.display();
MyString jax2=-jax;
jax2.display();

MyString jims=jax+"jerry";

MyString twoJims=jerry+" " + "jax";

MyString threeJims=jerry+ " "+ " "+ "Curly";

threeJims.display();

return 0;
}
