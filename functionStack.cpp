#include <iostream>
#include <string>

using namespace std;

void B();
void C();
void D();


void A(){
cout << "Function A starts!" << endl;
B();
cout << "Function B is called from A!" << endl;
}

void B(){
cout << "Function B starts!" << endl;
C();
cout << "Function C is called from B!" << endl;
}

void C(){
cout << "Function C starts!" << endl;
D();
cout << "Function D is called from C!" << endl;
}

void D(){
cout << "Function D starts!" << endl;
cout << "This was the last function" << endl << endl;
}


void B1();
void C1();
void D1();


void A1(){
cout << "Function A1 starts!" << endl;
B1();
cout << "Function B1 is called from A1!" << endl ;
}

void B1(){
cout << "Function B1 starts!" << endl;
C1();
throw string{"Exception at function C1"};
cout << "Function C1 is called from B1!" << endl;
}

void C1(){
cout << "Function C1 starts!" << endl;
try{
D1();
throw string{"Exception at function D1"};
cout << "Function D1 is called from C1!" << endl;
}
catch(string &exD){
cerr << exD << endl;
}
}

void D1(){
cout << "Function D1 starts!" << endl;
cout << "This was the last function" << endl << endl;
}


int main(){
A();

cout << endl << "========= Now the exception handling============" << endl << endl;
try{
A1();
}
catch(string &ex){
cerr << ex << endl;
}




return 0;
}
