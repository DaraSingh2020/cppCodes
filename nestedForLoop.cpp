#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
for (int i=0; i<5; i++){
    cout << i << endl;
    int ii=0;
    for(int j=0;j<6;j++){
        ii+=pow(j,2);
    }
    cout << ii << endl;
    cout << "The square of " << i << " is: " << pow(i,2) << endl;

}
return 0;
}

