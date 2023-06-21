#include <iostream>
#include <deque>
#include <vector>

using namespace std;

    bool isPalindrome(int V[]) {
        deque<int>Q;
        int N;
        for(int i=0; i<4;i++){
            N=V[i];
            Q.push_front(N);
        }
        while(!Q.empty() and Q.size()!=1){
            if(Q.front()!=Q.back()){
                return false;
                Q.pop_front();
                Q.pop_back();
            }
        }
        return true;
    }



int main(){


int V[]={1,2,2,1};
deque<int>Q;
int N;
for(int i=0; i<4;i++){
    N=V[i];
    Q.push_front(N);
    cout << Q.front() << endl;
}

cout << Q.front() << endl;
cout << Q.back() << endl;
Q.pop_back();
Q.pop_front();
cout << Q.front() << endl;
cout << Q.back() << endl;
Q.pop_back();
Q.pop_front();
cout << Q.front() << endl;
cout << Q.back() << endl;
cout << "end" << endl;




return 0;
}
