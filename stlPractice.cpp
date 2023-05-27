#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int T;
    vector<int> V;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> T;
        V.push_back(T);
    }
    int Q;
    cin >> Q;

    vector<int>::iterator L;

    for(int i=0;i<Q;i++){
        cin >> T;

        L=lower_bound(V.begin(),V.end(),T);

        if (T==V[(L-V.begin())]){
            cout << "Yes " << (L-V.begin()+1) << endl;
        }
        else {
            cout << "No " << (L-V.begin()+1) << endl;
            }
    }

    return 0;
}
