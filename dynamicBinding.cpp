#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Account{
public:
virtual void withdraw(){
cout << "Withdraw from base account" << endl;
}
virtual ~Account(){
    cout << " Account destructor" << endl;
}
};

class Saving:public Account{
public:
virtual void withdraw(){
cout << "Withdraw from saving account" << endl;
}
virtual ~Saving(){
    cout << " Saving destructor" << endl;
}
};

class Checking:public Account{
public:
virtual void withdraw(){
cout << "Withdraw from checking account" << endl;
}
virtual ~Checking(){
    cout << " Checking destructor" << endl;
}
};
class Trust:public Account{
public:
virtual void withdraw(){
cout << "Withdraw from Trust account" << endl;
}
virtual ~Trust(){
    cout << " Trust destructor" << endl;
}
};


int main(){

unique_ptr<Account> uA_ptr{nullptr};
uA_ptr = make_unique<Account>();

unique_ptr<Account> uC_ptr{nullptr};
uC_ptr = make_unique<Checking>();

unique_ptr<Account> uS_ptr{nullptr};
uS_ptr = make_unique<Saving>();

unique_ptr<Account> uT_ptr{nullptr};
uT_ptr = make_unique<Trust>();

vector<unique_ptr<Account>> V;
V.push_back(move(uA_ptr));
V.push_back(move(uC_ptr));
V.push_back(move(uS_ptr));
V.push_back(move(uT_ptr));
V[0]->withdraw();
V[1]->withdraw();
V[2]->withdraw();
V[3]->withdraw();

cout<< endl << "================ using for loop ============" << endl;
for(int i{0}; i<V.size(); i++){
    V[i]->withdraw();
}
cout<< endl << "================ Using raw pointers ============" << endl;

Account* A_ptr{nullptr};
A_ptr = new Account();

Account* C_ptr{nullptr};
C_ptr = new Checking();

Account* S_ptr{nullptr};
S_ptr = new Saving();

Account* T_ptr{nullptr};
T_ptr = new Trust();


A_ptr->withdraw();
C_ptr->withdraw();
S_ptr->withdraw();
T_ptr->withdraw();

cout<< endl << "================ Using raw pointers and array ============" << endl;

Account* arr[]{A_ptr,C_ptr,S_ptr,S_ptr};
for (Account* a:arr){
    a->withdraw();
}

cout<< endl << "================ Using unique pointers and array ============" << endl;
unique_ptr<Account> A[]{move(uA_ptr),move(uS_ptr),move(uC_ptr),move(uT_ptr)};

cout << "========= new deleting the raw pointers ====================" << endl;
delete A_ptr;
A_ptr = nullptr;
delete C_ptr;
C_ptr = nullptr;
delete S_ptr;
S_ptr = nullptr;
delete T_ptr;
T_ptr = nullptr;

return 0;
}
