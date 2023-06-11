#include <iostream>
using namespace std;

class Node{
public:
    Node* Next;
    Node* Previous;
    int Value;
    Node(){
    }
};

void printForward(Node* head){
    Node* traverser=head;
    while(traverser!=nullptr){
        cout << traverser->Value << "\t";
        traverser=traverser->Next;
    }
    cout << endl;
}

void printReverse(Node* tail){
    Node* traverser=tail;
    while(traverser!=nullptr){
        cout << traverser->Value << "\t";
        traverser=traverser->Previous;
    }
    cout << endl;
}




int main(){
    Node* N1=new Node();
    N1->Next=nullptr;
    N1->Previous=nullptr;
    N1->Value=3;
    Node* head=N1;
    Node* tail=N1;
cout << "Head, Tail and N1 have the same value!" << endl;
cout << N1->Value << "\t" << head->Value << "\t" << tail->Value << endl;
    N1=new Node();
cout << "We now set N1 to constructor value!!" << endl;
cout << N1->Value << "\t" << head->Value << "\t" << tail->Value << endl << endl;
    N1->Next=nullptr;
    N1->Previous=tail;
    N1->Value=4;
    tail->Next=N1;
    tail=N1;
cout << "We now set N1 to constructor value and assigned values to it!!" << endl;
cout << N1->Value << "\t" << head->Value << "\t" << tail->Value << endl << endl;
    N1=new Node();
    N1->Next=nullptr;
    N1->Previous=tail;
    N1->Value=7;
    tail->Next=N1;
    tail=N1;
cout << "We now set N1 to constructor value and assigned values to it!!" << endl;
cout << N1->Value << "\t" << head->Value << "\t" << tail->Value << endl << endl;
    N1=new Node();
    N1->Next=nullptr;
    N1->Previous=tail;
    N1->Value=13;
    tail->Next=N1;
    tail=N1;
cout << "We now set N1 to constructor value and assigned values to it!!" << endl;
cout << N1->Value << "\t" << head->Value << "\t" << tail->Value << endl << endl;

printForward(head);
cout << endl;
printReverse(tail);
cout << endl;

return 0;
}
