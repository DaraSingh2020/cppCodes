#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
public:
int Data;
Node* Next;
public:
    Node(){
    }
};
void printList(Node* n){
while(n!=NULL){
    cout << n->Data << "\t";
    n=n->Next;

}
}

int main(){
Node* Node1=NULL;
cout << "Node1 value just after: Node* Node1=NULL; " << Node1 << endl;
Node* Node2=NULL;
Node* Node3=NULL;

Node1=new Node();
cout << "Node1 value just after: Node1=new Node(); " << Node1 << endl;
Node2=new Node();
Node3=new Node();

Node1->Data=3;
Node1->Next=Node2;
cout << "Node1 value just after: assigning values and addresses: " << Node1 << endl;


Node2->Data=5;
Node2->Next=Node3;

Node3->Data=7;
Node3->Next=NULL;

cout << "Printing Node values right after linking the nodes: " << endl;
printList(Node1);


}
