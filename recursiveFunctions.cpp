#include <iostream>
#include <iomanip>
using namespace std;

unsigned long long factorial(unsigned long long N){
if(N==0){
    return 1;
}
else {
        return N*factorial(N-1);
    }
}

unsigned long long fibonachi(unsigned ff){
    if(ff==0){
        return 0;
    }
    else if(ff==1){
        return 1;
    }
    else {
        return fibonachi(ff-1) + fibonachi(ff-2);
    }
}

int sumOfDigits(int N){
    if(N/10==0){
        return N;
    }
    else{
        return N%10 +sumOfDigits(N/10);
    }
}

double pennyDouble(int n, double penny){
    if(n==1){
        return penny;
    }
    else {
        penny*=2;
        return pennyDouble(n-1,penny);
    }
}



int main(){
unsigned long long n{8};
unsigned long long T{factorial(n)};
cout << "factorial of " << n << " is " << T << endl;
n=23;
T=factorial(n);
cout << "factorial of " << n << " is " << T << endl;

cout << "====================================" << endl;
unsigned F{30};
cout << "Fibonaci of " << F << " is " << fibonachi(F) << endl;
F=40;
cout << "Fibonaci of " << F << " is " << fibonachi(F) << endl;
cout << "=======================================" << endl;
int NN{1234};
cout << "Sum of digits in " << NN << " is " << sumOfDigits(NN) << endl;
NN=5678;
cout << "Sum of digits in " << NN << " is " << sumOfDigits(NN) << endl;
NN=9999;
cout << "Sum of digits in " << NN << " is " << sumOfDigits(NN)<< endl;

cout << "=======================================" << endl;
int P{2};
double penny{0.02};
double S = pennyDouble(P,penny);
cout << fixed << setprecision(2);
cout << "Sum of pennies after " << P << " days is " << S << endl;

P=1;
S = pennyDouble(P,penny);
cout << fixed << setprecision(2);
cout << "Sum of pennies after " << P << " days is " << S << endl;

P=18;
S = pennyDouble(P,penny);
cout << fixed << setprecision(2);
cout << "Sum of pennies after " << P << " days is " << S << endl;

return 0;
}
