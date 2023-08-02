#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

void printPointer(int* const ptr1, int* const ptr2){
cout << "=========== pointer addresses =================" << endl;
cout << ptr1 << "\t" << ptr2 << endl;
cout << "=========== dereferenced pointers=================" << endl;
cout << *ptr1 << "\t" << *ptr2 << endl;
}
void doublePointer(int* ptr, int* ptr2){
*ptr*=3;
*ptr2*=34;
}
void printVector(vector<string>* const W){
    for(auto X:*W){
        cout << X << "\t";
    }
    cout << endl;
}

void changingPointerToFunny(vector<string> *S){
    for(size_t i{0}; i< (*S).size(); i++){
        (*S).at(i)="funny";
    }
}

int* largerPointer(int* ptr1, int* ptr2){
    if(*ptr1>*ptr2){
        return ptr1;
    }
    return ptr2;
}


int main(){

int* int_ptr{nullptr};
int_ptr=new int(10000);
cout << int_ptr << "\t" << *int_ptr << "\t" << int_ptr[0] << endl;

int* int_ptr1{nullptr};
int_ptr1=new int;
cout << int_ptr1 << "\t" << *int_ptr1 << "\t" << int_ptr1[0] << "\t<----These were garbage values " << endl;

int daraArray[]{2,3,6,8,2,4};
size_t sizeT=sizeof(daraArray)/sizeof(daraArray[0]);
int* intArray_ptr{nullptr};
intArray_ptr=daraArray;
for(size_t i{0}; i<sizeT; i++){
    cout << *(intArray_ptr+i) << "\t";
}
cout << endl;
for(size_t i{0}; i<sizeT; i++){
    cout << *(intArray_ptr++) << "\t";
}
cout << endl;

string* name1_ptr{nullptr};
string* name2_ptr{nullptr};
string* name3_ptr{nullptr};

string name1{"Jax"};
string name2{"Zighi"};
string name3{"Jax"};

name1_ptr=&name1;
name2_ptr=&name2;
name3_ptr=&name3;

cout << boolalpha;
cout << (name1_ptr==name3_ptr) << "\t" << (*name1_ptr==*name3_ptr) << endl;
cout << (name1_ptr==name2_ptr) << "\t" << (*name1_ptr==*name2_ptr) << endl;
cout << (name2_ptr==name3_ptr) << "\t" << (*name2_ptr==*name3_ptr) << endl;


string* string_ptr{nullptr};
string_ptr=new string("Dara");
cout << *string_ptr << "\t" << string_ptr << endl;

char NAME[]{"DaraSingh"};
size_t SS{sizeof(NAME)/sizeof(NAME[0])};
char* name_C1_ptr{nullptr};
char* name_C2_ptr{nullptr};
name_C1_ptr=&NAME[0];
name_C2_ptr=&NAME[5];

cout << *name_C1_ptr << "\t" << *name_C2_ptr << endl;
for(size_t i{0};i<SS ;i++){
    cout << *name_C1_ptr++ << " ";
}
cout << endl;


const int* intConst_ptr{nullptr};
int randomNumber{3456};
intConst_ptr = &randomNumber;
cout << *intConst_ptr << endl;

int randomNumber1{6523};
intConst_ptr = &randomNumber1;
cout << *intConst_ptr << endl;

randomNumber1 = 566;
cout << *intConst_ptr << endl;

int *const intptr_{&randomNumber1};
cout << *intptr_ << endl;
*(intptr_)=111;
cout << *intptr_ << endl;


printPointer(&randomNumber1,int_ptr);
cout << endl;
doublePointer(&randomNumber1,int_ptr);
printPointer(&randomNumber1,int_ptr);

vector<string>V{"Dara", "Jax", "Singh","Zighi"};
cout << "printing form a function by giving it a reference!" <<endl;
printVector(&V);

vector<string>* vector_ptr{nullptr};
vector_ptr=&V;
cout << "printing from a function by giving pointer to it!" << endl;
printVector(vector_ptr);

cout << (*vector_ptr).size() << endl;
changingPointerToFunny(vector_ptr);
printVector(vector_ptr);

int* int_ptr10{nullptr};
int* int_ptr11{nullptr};
int* int_ptr12{nullptr};

int_ptr10 = new int(15);
int_ptr11 = new int(17);

int_ptr12 = largerPointer(int_ptr10,int_ptr11);
cout << "The pointer with larger value is: " << int_ptr12 << " and it\'s value is: " << *int_ptr12 << endl;

string SSS {"DaraSingh"};
cout << SSS << endl;
string rSSS{};

for(auto s:SSS){
    cout << s << " ";
    rSSS=s+rSSS;
}
cout << endl;
cout << rSSS << endl;

string someName{"DaraSingh**"};
string &someR=someName;

cout << someR << endl;

string* string_ptr99{nullptr};
string_ptr99=&someName;
cout << *string_ptr99 << endl;


string* test_ptr{nullptr};
test_ptr=&someName;
cout << *test_ptr << endl;


for(auto s:someName){
    cout << s << "\t";
}
cout << endl;

for(auto s:someName){
    s='e';
}
cout << endl;

for(auto s:someName){
    cout << s << "\t";
}
cout << endl;

for(auto &s:someName){
    s='e';
}
cout << endl;

for(auto s:someName){
    cout << s << "\t";
}
cout << endl;

delete [] int_ptr10;
delete [] int_ptr11;
delete [] int_ptr12;


return 0;
}

