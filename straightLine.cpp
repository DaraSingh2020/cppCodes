#include <iostream>
#include <vector>

using namespace std;

    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size()==2){
            return true;
        }
        if (coordinates.size()==1){
            return false;
        }
        int Left,Right;
        for(int i=0; i< coordinates.size()-2;i++){
            Left = (coordinates[0][2]-coordinates[i+1][2])*(coordinates[0][1]-coordinates[i+1][1]);
            Right = (coordinates[0][2]-coordinates[i+2][2])*(coordinates[0][1]-coordinates[i+2][1]);
        if(Left!=Right){
            return false;
        }
        }
        return true;
    }


    int main(){
    vector<vector<int>> C1={{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    bool T=checkStraightLine(C1);
    cout << T << endl;
    vector<vector<int>> C2={{1,1},{2,2},{3,4},{4,5},{5,6},{7,7}};
    bool T1=checkStraightLine(C2);
    cout << T1 << endl;

    return 0;
    }
