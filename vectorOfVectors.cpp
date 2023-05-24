# include <iostream>
# include <cstring>
# include <sstream>
# include <vector>

using namespace std;



int main() {

int rows, columns;

cout << "Enter the number of rows and columns: ";
cin >> rows >> columns;


vector<vector<int>> daraVector=vector(rows, vector<int>(columns));


for (int i = 0; i < rows; ++i) {
for (int j = 0; j < columns; ++j) {
daraVector[i][j] = i * columns + j + 1;
}
}


cout << "Dynamic Vector Elements:" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < columns; ++j) {
cout << daraVector[i][j] << " ";
}
cout << endl;
}

vector<vector<int>> dara=vector(rows, vector<int>(columns));
for(int i=0;i<rows; i++){
    for(int j=0; j<columns; j++){
        cin >> dara[i][j];
    }
}

for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
        cout << dara[i][j] << " ";
    }
    cout << endl;
}

vector<int> dara1=vector<int>(rows);
for (int i=0; i<rows; i++){
    cin >> dara1[i];
}
for(int i=0; i<rows; i++){
    cout << dara1[i]<< " ";
}

return 0;
}

