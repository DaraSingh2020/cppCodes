#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
int I=2;
int J=2;
int temp;

vector<vector<int>> matrix;
matrix.resize(I,vector<int>(J));

for(int i=0;i<I;i++){
    for (int j=0;j<J;j++){
        temp=rand()%10;
        matrix[i][j]=temp;
    }

}

for(int i=0;i<I;i++){
    for(int j=0;j<J;j++){
        cout << matrix[i][j] << "\t";
    }
    cout << endl;
}

cout << matrix.size() << endl;
cout << matrix[1].size() << endl;
int sum=0;

for(int i=0;i<I;i++){
    for(int j=0;j<J;j++){
        if (i==j){
            sum+=matrix[i][j];
        }
        if (i==j && (i+j)==(J-1)){
            continue;
        }
            if ((i+j)==(J-1)){
            sum+=matrix[i][j];
        }

    }
    cout << endl;
}
cout << sum << endl;




return 0;
}
