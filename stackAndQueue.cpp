#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class MyQueue {
public:
stack<int> S1,S2;
    MyQueue() {

        S1={};
        S2={};
    }

    void push(int x) {
        S1.push(x);
    }

    int pop() {
        int stackSize=S1.size();
        int i=0;
        while(i<stackSize-1){
            S2.push(S1.top());
            S1.pop();
            i++;
        }
        int N=S1.top();
        S1.pop();
        stackSize=S2.size()-1;
        i=0;
        while(i<stackSize-1){
            S1.push(S2.top());
            S2.pop();
            i++;
        }
        return N;
    }

    int peek() {
        int stackSize1=S1.size();
        int i1=0;
        while(i1<stackSize1-1){
            S2.push(S1.top());
            S1.pop();
            i1++;
        }
        int N1=S1.top();
        S1.pop();
        stackSize1=S2.size()-1;
        i1=0;
        while(i1<stackSize1-1){
            S1.push(S2.top());
            S2.pop();
            i1++;
        }
        return N1;
    }

    bool empty() {
        return S1.empty();
    }
};



int main(){

queue<int> Q1,Q2;
stack<int> S1,S2;

Q1.push(2);
cout << "Q1 size: " << Q1.size() << "\t" << " Q1 front(): "  << Q1.front() << "\t" << " Q1 back(): " << Q1.back() << endl;
Q1.push(4);
Q1.push(7);
cout << "Q1 size: " << Q1.size() << "\t" << " Q1 front(): "  << Q1.front() << "\t" << " Q1 back(): " << Q1.back() << endl;
Q1.pop();
cout << "Q1 size: " << Q1.size() << "\t" << " Q1 front(): "  << Q1.front() << "\t" << " Q1 back(): " << Q1.back() << endl;
Q1.push(12);
Q1.push(11);
Q1.push(0);
Q1.push(5);
cout << "Q1 size: " << Q1.size() << "\t" << " Q1 front(): "  << Q1.front() << "\t" << " Q1 back(): " << Q1.back() << endl;

int i=0;
int queueSize=Q1.size();
while(i<queueSize){
    Q2.push(Q1.front());
    Q1.pop();
    i++;
}
cout << "Q1 size: " << Q1.size() << "\t" << " Q1 front(): "  << Q1.front() << "\t" << " Q1 back(): " << Q1.back() << endl;
cout << "Q2 size: " << Q2.size() << "\t" << " Q2 front(): "  << Q2.front() << "\t" << " Q2 back(): " << Q2.back() << endl;

MyQueue* myQueue = new MyQueue();
//myQueue.push(1);
delete myQueue;

return 0;
}
