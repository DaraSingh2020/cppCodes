#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
int N, n;
int Q,sixteen,R;
sixteen=16;
char charN;

cin >> N;
double D1,D2,D3;
int d1;

for(int i=0;i<N;i++){
    cin >> D1 >> D2 >>D3 ;
    d1=int(D1);
    cout << "0x" ;
    n=d1/sixteen;
    cout << n ;
    R=d1%sixteen;
    if (R<10){
        cout << R << endl;
    }
    else if(R==10){
        cout << 'A' << endl;
    }
    else if(R==11){
        cout <<  'B' << endl;
    }
    else if(R==12){
        cout << 'C' << endl;
    }
    else if(R==13){
        cout << 'D' << endl;
    }
    else if(R==14){
        cout << 'E' << endl;
    }
    else if(R==15){
        cout << 'F' << endl;
    }

    cout << setprecision(2) << fixed <<  D2 << '\n';
    cout.unsetf ( std::ios::floatfield );

    cout << setprecision(9) <<scientific << uppercase;
    cout << D3 << nouppercase << endl;

}

    double num1 = 3.12345678;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout << num1 << std::endl;
    return 0;










return 0;
}
