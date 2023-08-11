#include <iostream>

using namespace std;

class Numbers{
friend void printSquare(const Numbers &NN);
int N;

public:
Numbers():Numbers(0){
cout << "No arg constructor is invoked with delegate constructor" << endl;
}
Numbers(const int &n):N{n}{
cout << "const int &n constructor is used" << endl;
}
Numbers(const int &&n):N{n}{
cout << "const int &&n constructor is used" << endl;
}

Numbers(const Numbers &N):Numbers(N.N) {
cout << "Copy constructor is invoked with delegate constructor" << endl;
}

void display()const {
cout << "The integer value is: " << N << endl;}

};

void printSquare(const Numbers &NN){
cout << endl << "The square of the number is: " << NN.N*NN.N << endl<< endl;
}

int main(){
Numbers num1(5);
num1.display();
printSquare(num1);

int n1{34};
Numbers num2(n1);
num2.display();

cout << endl;
Numbers num3=num1;
num3.display();

cout << endl;
Numbers num4(num1);
num4.display();

cout << endl;
Numbers num5(move(num1));
num5.display();

}
