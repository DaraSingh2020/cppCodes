#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


int main(){

int daraMatrixD[3][3];
vector<vector<int>> daraMatrix;

int rows=3;
int cols=3;
int N;

cout << &daraMatrixD << endl;
cout << daraMatrixD << endl;
cout << &daraMatrixD+1 << endl;
cout << daraMatrixD+1 << endl;

cout << *(*(daraMatrixD+1)) << endl;
cout << daraMatrixD[1][0] << endl;
int T=1;
cout << *(*(daraMatrixD+T)) <<endl;
cout << "Note! It's all zero! Seems like the initialization makes zeros or some weird number!" << endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << *(*(daraMatrixD+i)+j) << "\t";
    }
    cout << endl<< endl;
}

for(int i=0;i<rows; i++){
        vector<int> M;
    for(int j=0;j<cols;j++){
        N=rand()%10;
        daraMatrixD[i][j]=N;
        M.push_back(N);
    }
    daraMatrix.push_back(M);
}
cout << "now values are filled up!!" << endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << *(*(daraMatrixD+i)+j) << "\t";
    }
    cout << endl;
}

cout << "vector matrix cannot be called by reference and why?" << endl;
cout << "this is a value only" << endl;

cout << daraMatrix[0][0] << endl;
cout << "&daraMatrix makes it not thrwo exception but daraMatrix does not work!" << endl;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << daraMatrix[i][j] << "\t";
    }
    cout << endl;
}

vector<int> daraVector;
for(int i=0;i<7;i++){
    N=rand()%13;
    daraVector.push_back(N);
}
vector<int>::iterator it;
it=daraVector.begin();

while(it!=daraVector.end()){
    cout << *it << "\t";
    it++;
}
cout << endl << endl;
it=daraVector.begin();
while(it!=daraVector.end()){
    cout << *it << "\t";
    advance(it,1);
}

cout << endl << endl;


return 0;
}
