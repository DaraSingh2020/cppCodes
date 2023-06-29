#include <iostream>
#include <vector>

using namespace std;


int main(){
int left=1;
int right=22;
        vector<int>V;
        int N;
        bool Next;
        for(int i=left;i<=right;i++){
            Next=false;
            N=i;
            while(N>0){
                    cout << N << "\t";
                if(N%10==0){
                    Next=true;
                    break;
                }
                if(i%(N%10)!=0){
                    Next=true;
                    break;
                }
                N/=10;
            }
            if(Next==false){
                V.push_back(i);
            }
            cout << endl;
        }
for(int i=0; i<V.size(); i++){
    cout << V[i] << "\t";
}









return 0;
}
