#include<iostream>
#include<vector>

using namespace std;

class complexClass{
public:

int RealN;
int ImaginaryN;

public:
complexClass(int R, int I){
RealN=R;
ImaginaryN=I;
}
void printing(){
cout <<RealN << " + i" << ImaginaryN << endl;
}
complexClass operator+(complexClass const& C1){
complexClass CC(0,0);
CC.RealN=RealN + C1.RealN;
CC.ImaginaryN=ImaginaryN+C1.ImaginaryN;
return CC;
}
};


class complexClassD{
int RealN;
int ImaginaryN;

public:
complexClassD(int R, int I){
RealN=R;
ImaginaryN=I;
}
void printing(){
cout <<RealN << " + i" << ImaginaryN << endl;
}
friend complexClassD operator+(complexClassD const& C1,complexClassD const& C2);

};

complexClassD operator+(complexClassD const& C1,complexClassD const& C2){

return complexClassD(C1.RealN+C2.RealN,C1.ImaginaryN+C2.ImaginaryN);
};

ostream& operator << (ostream& COUT,complexClass const& C1){
    if (C1.ImaginaryN>=0){
        COUT << C1.RealN << " + i" << C1.ImaginaryN << endl;
    }
    else {
        COUT << C1.RealN << " - i" << abs(C1.ImaginaryN) << endl;
    }
return COUT;
}




struct complexS{
int R;
int I;
complexS(int r,int i){
R=r;
I=i;
}
};

complexS operator+(complexS const& S1, complexS const& S2){
return complexS(S1.R+S2.R,S1.I+S2.I);
}


ostream& operator << (ostream& COUT, complexS const& S1){
    if (S1.I >=0){
        COUT << S1.R << " + i" << S1.I << endl;
    }
    else if (S1.I<0){
        COUT << S1.R << " - i" << abs(S1.I) << endl;
    }
return COUT;
}




int main(){
complexClass C1(10,9);
complexClass C2(3,-5);
complexClass C3=C1+C2;
C3.printing();

complexClassD D1(4,77),D2(-9,10);
complexClassD D3=D1+D2;
D3.printing();

complexS S=complexS(3,7);
complexS S1=complexS(-4,6);

cout << S << S;

cout << C3 << C1 << C2;

cout << "Now invoking the operator function directly!" << endl;
operator<<(cout, S);

complexS S2=complexS(-1,-2);
complexS S3=S1+S2;

cout << S1 << S2 << S3 << endl;


return 0;
}
