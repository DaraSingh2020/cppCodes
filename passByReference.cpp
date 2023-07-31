#include <iostream>
#include <vector>
#include <string>

using namespace std;
//prototyping:
void print(const vector<string> &VVV);
void clearing(vector<string> &VVV);
void makeThingsClean(vector<string> &VVV);

int main(){

vector<string> V{"Dara","Jax", "Zighy", "Jay"};
makeThingsClean(V);

return 0;
}

void print(const vector<string> &VVV){
    for(size_t i {0}; i<VVV.size();i++){
        cout << VVV.at(i) << "\t";
    }
cout << endl;
}

void clearing(vector<string> &VVV){
    cout << "You passed the vector by reference! It\'s getting cleaned up!" << endl;
    for(size_t i{0};i<VVV.size();i++){
        VVV.at(i)="***";
    }
}
void makeThingsClean(vector<string> &VVV){
    print(VVV);
    clearing(VVV);
    print(VVV);
}
