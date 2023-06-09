#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Node{
public:
Node* next;
int Value;
Node(){
Value=0;
}
Node(int v){
Value=v;
}
Node(int v,Node* N){
Value=v;
next=N;
}
};



int main(){

Node* Node1=new Node(1);
cout << Node1->Value << endl;
cout << Node1 << endl;

Node* Node2=new Node(1);
Node* Node3=new Node(2);
Node* Node4=new Node(3);
Node* Node5=new Node(3);
Node* Node6=new Node(4);

Node1->next=Node2;
Node2->next=Node3;
Node3->next=Node4;
Node4->next=Node5;
Node5->next=Node6;
Node6->next=nullptr;

Node* NodeN=Node1;
while(NodeN){
    cout << NodeN->Value << "\t";
    NodeN=NodeN->next;
}

cout << endl <<endl;
cout << "D" << endl;
NodeN=Node1;
Node* NodeS=NodeN;
while(NodeS){
    cout << NodeS->Value << "\t";
    NodeS=NodeS->next;
}
cout << endl;

Node* NodeT=Node1;
Node* ptr=NodeT->next;
cout << ptr->Value <<endl;
if (NodeT->Value<ptr->Value){
    NodeT->next=ptr;
}
else{
    ptr=ptr->next;
}
cout << ptr->Value;

int SSS=5;
cout << log(SSS) << endl;

cout << NodeT->next->Value << endl;
cout << NodeT->next->next->Value << endl;
cout << NodeT->next->next->next->Value << endl;
cout << NodeT->next->next->next->next->Value << endl;
cout << NodeT->next->next->next->next->next->Value << endl;

return 0;
}
