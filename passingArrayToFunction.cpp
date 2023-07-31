#include <iostream>
#include <string>

using namespace std;

void printing(const string daraArray[], size_t);
void modify(string daraArray[], size_t);
void testing(string daraArray[],size_t);


int main(){

string daraArray[]{"Dara", "Jax", "Elone", "Rocky"};
size_t arraySize{sizeof(daraArray)/sizeof(daraArray[0])};

testing(daraArray,arraySize);

return 0;
}

void printing(const string daraArray[], size_t arraySize){
    for(size_t i{0}; i<arraySize;i++){
    cout <<daraArray[i]<< "\t";
    }
    cout << endl;
}
void modify(string daraArray[], size_t arraySize){
    for(size_t i{0};i<arraySize;i++){
        daraArray[i]="*";
    }
}

void testing(string daraArray[],size_t arraySize){
    printing(daraArray,arraySize);
    modify(daraArray,arraySize);
    cout << endl;
    printing(daraArray,arraySize);
}
