#include <iostream>

using namespace std;

double speedCalculator(int l, int t){
if(t==0){
    throw 0;
}
return static_cast<double>(l)/t;
}


int main(){
int L{13};
int t{2};
t*=0;

try{
    cout << "Your length is " << L << " and your time is " << t << endl;
    double s{speedCalculator(L,t)};
    cout << "base on this, your speed is " << s  << endl;
}
catch(int &ex){
cout << "Error!!!!!!!!!!!!!!!!!!!!!!!" << endl;
cout << "The time is zero and division by zero is not permitted!!!" << endl;
}

return 0;
}
