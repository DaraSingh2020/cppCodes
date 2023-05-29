#include <iostream>
#include <list>

using namespace std;

struct myBooks{
string BookName;
string BookType;
int Pages;

myBooks(string bookName,string bookType, int pages){
    this->BookName=bookName;
    this->BookType=bookType;
    this->Pages=pages;
}
void printBookInfo(){
cout << "My favorite book is: " << BookName << endl;
cout << "It\'s a " << BookType <<" book." << endl;
cout << "It has " << Pages << " pages." << endl;
}
};

int main(){
string daraBookName="Advanced Calculus";
string daraBookType="Mathematical";
int daraBookPages=209;

myBooks daraBook(daraBookName,daraBookType,daraBookPages);
daraBook.printBookInfo();

return 0;
}
