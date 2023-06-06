#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows=5;
    vector<vector<int>> matrix;
    for(int i=0;i<rows; i++){
        matrix.push_back(vector<int>(i+1));
        matrix[i][0]=1;
        matrix[i][i]=1;
        }
    if (rows>2){
    for(int i=2;i<rows;i++){
        for(int j=1;j<i;j++){
            matrix[i][j]=matrix[i-1][j-1]+matrix[i-1][j];
        }
    }
    }
    for(int i=0;i<rows;i++){
        for (int j=0;j<i+1;j++){
            cout << matrix[i][j] << "\t" ;
        }
        cout << endl;
    }
return 0;
}

