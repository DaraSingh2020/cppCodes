#include <iostream>

using namespace std;

class Counter{
int counter;

public:
Counter(int C):counter{C}{
}
Counter& operator++(){
    ++counter;
    return *this;
}
Counter operator++(int){
Counter temp=*this;
++temp;
cout << this << "\t" << &temp << endl;
cout << "this and temp have different addresses but value of temp is returned to this again!" << endl;
return temp;
}
void display(){
cout<< "The number is: " << counter << endl;
}
};

int main(){

Counter C{11};
C.display();
++C;
++C;
C.display();

Counter* C_ptr{nullptr};
C_ptr=&C;
cout << C_ptr << endl;
cout << &C << endl;

C++;
C.display();
cout << C_ptr << endl;
cout << &C << endl;

return 0;
}
