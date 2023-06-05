#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
public:
int Value;
Node* NodePTR;
Node(){
}
Node(int value){
Value=value;
}

Node(int value, Node* nodePTR){
Value=value;
NodePTR=nodePTR;
}
};

Node* addTwoLinedNodes(Node* N1,Node* N2){
Node* node=new Node(N1->Value+N2->Value);
return node;
}

void printConnectedNodes(Node* N1){
Node* head=N1;
while(head!=NULL){
    cout << head->Value << "\t";
    head=head->NodePTR;
}
cout << endl << endl;
}



int main(){
Node* node1=new Node();
cout << node1 << endl << endl;

Node* node2=new Node(3);
cout << node2 << endl;
cout << node2->Value << endl << endl;


Node* node3=new Node(8,node1);
cout << node3 << endl;
cout << node3->Value << endl;
cout << node3->NodePTR << endl << endl;

Node* node4=new Node(5,node2);
cout << node4 << endl;
cout << node4->Value << endl;
cout << node4->NodePTR << endl << endl;

Node* node5=addTwoLinedNodes(node2,node3);
cout << node5 << endl;
cout << node5->Value << endl;
cout << node5->NodePTR << endl << endl;

node1->Value=17;
node1->NodePTR=node2;
node2->NodePTR=node3;
node3->NodePTR=node4;
node4->NodePTR=node5;
node5->NodePTR=nullptr;

cout << node1->Value << "\t" << node1->NodePTR << "\t" << endl << endl;

printConnectedNodes(node1);


return 0;
}
