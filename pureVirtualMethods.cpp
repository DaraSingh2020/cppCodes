#include <iostream>
#include <vector>
#include <string>

using namespace std;


class I_Printable{
friend ostream& operator <<(ostream& os,const I_Printable& p);
public:
virtual void printSomeThing(ostream& os) const=0;
};

ostream& operator <<(ostream& os,const I_Printable& p){
p.printSomeThing(os);
return os;
}

class Shape:public I_Printable{
friend ostream& operator<<(ostream& COUT, const Shape& shape);
    public:
Shape(){
}
virtual void printSomeThing(ostream& os) const override{
    os << "This is shape class";
}
virtual void area()=0;
virtual string shapeName()=0;
~Shape(){
    cout << "Shape object is deleted" << endl;
    cout << "This was an abstract class" << endl;
}
};

class Circle: public Shape{
    string Name;
    int R;
    public:
Circle(const int r):Shape(),R{r},Name{"circle"}{
}
virtual string shapeName() override {
    return Name;
}
virtual void printSomeThing(ostream& os) const override{
    os << "This is a circle class";
}
virtual void area() override {
    cout << "Area of circle is Pi*r*r" << endl;
    cout << "This-->>>> is a concrete class!!! " << endl;
    cout << "Area of a circle with radius " << R << " is " << 3.14159*R*R << endl;
}
~Circle(){
    cout << "Circle object is deleted" << endl;
}
};

class Square: public Shape{
    string Name;
    int B;
    public:
Square(const int b):Shape(),B{b},Name{"Square"}{
}
virtual string shapeName() override {
    return Name;
}
virtual void printSomeThing(ostream& os) const override{
    os << "This is a square class";
}
virtual void area() override {
    cout << "Area of square is B*B " << endl;
    cout << "This-->>>> is a concrete class!!! " << endl;
    cout << "Area of a square with side " << B << " is " << B*B << endl;
}
~Square(){
    cout << "Square object deleted" << endl;
}
};

class Rectangle: public Shape{
    string Name;
    int B;
    int L;
    public:
Rectangle(const int b, const int l):Shape(),B{b},L{l},Name{"Rectangle"}{
}
virtual string shapeName() override {
    return Name;
}
virtual void printSomeThing(ostream& os) const override{
    os << "This is a rectangle class";
}
virtual void area() override {
    cout << "Area of rectangle is L*B " << endl;
    cout << "This-->>>> is a concrete class!!! " << endl;
    cout << "Area of a rectangle with breadth " << B << " and length " << L << " is " << L*B << endl;
}
~Rectangle(){
    cout << "Rectangle object deleted" << endl;
}
};

void vectorPrint(vector<Shape*> &shape){
cout << "printing from a global function" << endl;
cout << "*******************************" << endl;
    for(auto s:shape){
        s->area();
    }
cout << "printing from a global function Done!!!!" << endl;
cout << "*******************************" << endl << endl;
}

ostream& operator<<(ostream& COUT, Shape* & shape){
COUT << shape->shapeName() << endl;
return COUT;
}

int main(){

Shape* ptr1{nullptr};
ptr1 =  new Circle(23);
ptr1->area();
cout << ptr1;
cout << ptr1 << endl;
cout << "*********************************************" << endl;
Shape* ptr2{nullptr};
ptr2 = new Square(13);
ptr2->area();
cout << ptr2;
cout << "*********************************************" << endl;
Shape* ptr3{nullptr};
ptr3 = new Rectangle(9,11);
ptr3->area();
cout << ptr3;
cout<< endl << "=========== calling them through a vector ===========" << endl << endl;
vector<Shape*> V;
V.push_back(ptr1);
V.push_back(ptr2);
V.push_back(ptr3);
for(Shape* v:V){
    v->area();
}
cout<< endl << "==== calling global function that goes through a vector =====" << endl << endl;
vectorPrint(V);

cout << "====================================================" << endl;


cout << endl << "========= Deleting the stuff ================" << endl;

delete ptr2;
ptr2 = nullptr;

delete ptr1;
ptr1 = nullptr;

delete ptr3;
ptr3 = nullptr;

return 0;
}
