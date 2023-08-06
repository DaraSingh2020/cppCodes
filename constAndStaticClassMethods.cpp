#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Student{
    static int number;
    int age;
    string name;
    int* grade{nullptr};

    public:
    Student(string name, int age, int grade):name{name},age{age}{
    this->grade = new int(grade);
    number++;
    }
    Student(const Student& otherStudent):Student(otherStudent.name, otherStudent.age, *(otherStudent.grade)){
    }
    void setName(string name){
        this->name=name;
    }
    void displayInfo() const {
    cout << this-> name << " is " << this->age << " years old. He got " << *(this->grade) << " in the class." << endl;
    }
    static void numberOfStudents() {
        cout << "There are " << number << " registered so far." << endl << endl;
    }
    ~Student(){
    delete grade;
    --number;
    }
    friend void displayThings(Student);

};
int Student::number=0;

void displayThings(Student s){
cout << "I am a friend and I know that your name is: " << s.name << endl;
}


int main(){
cout << "=================================================================" << endl;
Student::numberOfStudents();
cout << "No objects created by we can use static method from the class!!!!" << endl;
cout << "=================================================================" << endl;
cout << endl;

Student S1{"Dara", 40, 67};
S1.displayInfo();
S1.numberOfStudents();
cout << endl;

const Student S2{"Jerry", 33, 98};
S2.displayInfo();
S1.numberOfStudents();
S2.numberOfStudents();
cout << endl;

{
    const Student S4{"JOoosi", 39, 23};
    S2.displayInfo();
    S1.numberOfStudents();
    S2.numberOfStudents();
    S4.numberOfStudents();
    cout << "Before the end of curly braces" << endl << endl;
}
S2.numberOfStudents();
cout << "After the end of curly braces" << endl << endl;

Student S3{S2};
S3.setName("Andy");
S3.displayInfo();
S1.numberOfStudents();
S2.numberOfStudents();
S3.numberOfStudents();

Student* S_ptr = new Student{"Jax", 34, 99};
(*S_ptr).displayInfo();
(*S_ptr).numberOfStudents();

S_ptr->displayInfo();

Student S5{*S_ptr};
S5.setName("Ghoooooli");
S5.displayInfo();
Student::numberOfStudents();

Student* S_ptr2 = new Student(*S_ptr);
S_ptr2->setName("Yaafiiii");
S_ptr2->displayInfo();
S_ptr2->numberOfStudents();

displayThings(S3);


delete S_ptr;
delete S_ptr2;





return 0;
}

