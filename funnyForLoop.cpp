#include<iostream>

using namespace std;

int main(){

for(int i{0},j{7}; i<9; i++,j+=2){
    cout << "The product of i = " << i << " and j = " << j << " is: " << i*j << endl;
}

return 0;
}
