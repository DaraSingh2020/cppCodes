#include <iostream>

using namespace std;

int main(){
int rowSize, colSize;
cout << "Please enter the size of your matrix: ";
cin >> rowSize >> colSize;
cout << "Your matrix is: " << rowSize << " by " << colSize<< endl;

int** table=new int*[rowSize];

for(int i=0; i<rowSize; i++){
    table[i]= new int[colSize];
}
for(int i=0;i<rowSize;i++){
    for(int j=0; j<colSize; j++){
        cout << "Please enter the value for table[" << i+1 << ", " << j+1 << "]: ";
        cin >> table[i][j];
    }
}

for(int i=0;i<rowSize;i++){
    cout << "[";
    for(int j=0; j<colSize; j++){
        cout << table[i][j] << " ";
}
cout << "]" << endl;
}

for(int i=0; i<rowSize; i++){
    delete[]table[i];
    table[i]=NULL;
}
delete[]table;
table=NULL;

int rows,cols;
cout << "Please specify rows and columns for your characters: ";
cin >> rows >> cols;
cout << endl;

char** Table=new char*[rows];
for(int i=0; i<rows; i++){
    Table[i]=new char[cols];
    for(int j=0; j<cols; j++){
        cout << "Please enter a charactor and press enter: ";
        cin >> Table[i][j];
    }
}

for(int i=0;i<cols; i++){
    for(int j=0; j<rows; j++){
        cout << Table[i][j]<< " ";
    }
    cout << endl;
}
for(int i=0; i<rows; i++){
    delete[]Table[i];
    Table=NULL;
}
delete[]Table;
Table=NULL;

system("pause>0");
return 0;
}
