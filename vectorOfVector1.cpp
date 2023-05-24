#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> dynamicVector;

    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    int numberOfQueries;
    cout << "Enter the number of queries: " << endl;
    cin >> numberOfQueries;
    vector<int> queryVector;

    for (int i=0; i< numRows; i++) {
        std::vector<int> row;

        int numColumns;
        std::cout << "Enter the number of columns for row " << dynamicVector.size() + 1 << ": ";
        std::cin >> numColumns;


        for (int i = 1; i <= numColumns; ++i) {
            int value;
            cout << "Enter element " << i << " for row " << dynamicVector.size() + 1 << ": ";
            cin >> value;
            row.push_back(value);
        }


        dynamicVector.push_back(row);
    }


    cout << "Dynamic Vector Elements:" << endl;
    for (int i = 0; i < dynamicVector.size(); ++i) {
        for (int j = 0; j < dynamicVector[i].size(); ++j) {
            cout << dynamicVector[i][j] << " ";
        }
        cout << endl;
    }


    for (int q=0;q<numberOfQueries; q++){
    cout << "enter i and j : ";
    int i,j;
    cin >> i >> j;
    queryVector.push_back(dynamicVector[i][j]);
    cout << endl;
    }
    for(int q=0;q<numberOfQueries;q++){
        cout << queryVector[q]<< endl;
    }

    return 0;
}
