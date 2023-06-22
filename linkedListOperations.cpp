#include <iostream>
#include <vector>

using namespace std;


class Node{
public:
int Value;
Node* Next;
Node(){
}
Node(int value){
    Value=value;
    Next=nullptr;
}
};

int main(){
Node* head=new Node;
Node* N1=new Node(3);
head=N1;

cout << "head: " << head->Value << endl;
Node* N2=new Node(5);
N2->Next=N1;
head=N2;
cout << "head: " << head->Value << endl;
cout <<"head->Next: " << head->Next->Value << endl;
cout << endl;
Node* N3=new Node(7);
N3->Next=N2;
head=N3;
cout << "head: " << head->Value << endl;
cout << "head->Next: " <<head->Next->Value << endl;
cout << "head->Next->Next: " <<head->Next->Next->Value << endl;
cout << endl;
cout << "Now creating a Node at the end of the chain" << endl;

Node* N0=new Node(8);
N1->Next=N0;
cout << "head: " << head->Value << endl;
cout << "head->Next: " <<head->Next->Value << endl;
cout << "head->Next->Next: " <<head->Next->Next->Value << endl;
cout << "head->Next->Next->Next: " <<head->Next->Next->Next->Value << endl;
cout << endl;

Node* forInsertion=new Node(17);
int counter=0;
Node* temp=head;
while(counter<2){
    temp=temp->Next;
    counter++;
}
cout << "Inserting after: "<<temp->Value << endl;
forInsertion->Next=temp->Next;
temp->Next=forInsertion;
cout << "head: " << head->Value << endl;
cout << "head->Next: " <<head->Next->Value << endl;
cout << "head->Next->Next: " <<head->Next->Next->Value << endl;
cout << "head->Next->Next->Next: " <<head->Next->Next->Next->Value << endl;
cout << "head->Next->Next->Next->Next: " <<head->Next->Next->Next->Next->Value << endl;
cout << endl;

Node* N4=new Node(13);
N0->Next=N4;
Node* N5=new Node(9);
N4->Next=N5;
Node* traverser=head;
while(traverser){
    cout << traverser->Value << "\t";
    traverser=traverser->Next;
}
cout << endl;


Node* current=head;
Node* next=current->Next;
Node* previous=nullptr;

while(current){
    current->Next=previous;
    previous=current;
    current=next;
    if(next){
        next=next->Next;
    }
}

cout << "previous: " << previous->Value << endl;
cout << "previous->Next: " << previous->Next->Value << endl;
cout << "previous->Next->Next: " << previous->Next->Next->Value << endl;
cout << "previous->Next->Next->Next: " << previous->Next->Next->Next->Value << endl;
cout << "previous->Next->Next->Next->Next: " << previous->Next->Next->Next->Next->Value << endl;
cout << endl;

Node* cyclicMover=previous;
while(cyclicMover->Next){
    cout << cyclicMover->Value << "\t";
    cyclicMover=cyclicMover->Next;
}
cout << endl;
cyclicMover->Next=previous->Next;
int C=0;
while(C<20){
    cout << cyclicMover->Value << "\t";
    cyclicMover=cyclicMover->Next;
    C++;
}
cout << endl;

Node* fast=previous->Next;
Node* slow=previous;
cout << fast->Next->Value << endl;
cout << "Now we go into the loop" << endl;
while(true){
    fast=fast->Next->Next;
    slow=slow->Next;
    cout << slow->Value << "\t";
    if(slow==fast){
        cout << endl << "slow = fast at: ";
        cout << fast->Value << endl;
        break;
    }
}


cout << endl;




return 0;
}
