#include <iostream>
#include <vector>

using namespace std;

int main(){
vector<int>vec{1,2,3};
    int result{0};

    if(vec.size()>1){
        for(unsigned i{0};i<vec.size()-1;i++){
            for(unsigned j{i+1};j<vec.size();j++){
                result+=vec.at(i)*vec.at(j);
                cout << "i: " << i << ", j: " << j << endl;
            }
        }
    }
    cout << "result is: " << result << endl;


return 0;
}
