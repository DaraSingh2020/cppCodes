#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;


class Node{
public:
int Value;
Node* Next;
Node(){
}
};

void printValue(Node** N1){
    Node* NN= new Node();
    NN=*N1;
 while(NN){
    cout << NN->Value << "\t";
    NN=NN->Next;
 }
 cout << endl;
}

void pushFront(Node** N1,int NewVal){
    Node* N0=new Node();
    N0->Value=NewVal;
    N0->Next=*N1;
    *N1=N0;
}

void inserAfter(Node* NNN, int V){
if(!NNN->Next){
    cout << "This node ends." << endl;
    return;
}

Node* N=new Node();
N->Value=V;
N->Next=NNN->Next;
NNN->Next=N;
}

void pushBack(Node** NN, int V){
Node* N=new Node();
Node* head=*NN;

while(head->Next!=nullptr){
    head=head->Next;
}
head->Next=N;
N->Value=V;
N->Next=nullptr;
}

bool searchWithVector(Node* N,int S){
vector<int> NN;
while(N->Next){
    NN.push_back(N->Value);
    N=N->Next;
}
vector<int>::iterator it;
it=NN.begin();
while(it!=NN.end()){
    if (*it==S){
        return true;
    }
    it++;
}
return false;
}

bool searchIteratively(Node* N,int S){

while(N->Next){
    if(N->Value==S){
        return true;
    }
    N=N->Next;
}
return false;
}

bool searchRecursively(Node* N,int S){
// N==NULL should come first because of the logic!
if(N==NULL){
    return false;
}
if(N->Value==S){
    return true;
}
return searchRecursively(N->Next,S);
}

int findLengthIteratively(Node* N){
int counter=0;
while(!N==NULL){
    counter++;
    N=N->Next;
}
return counter;
}

int findLengthRecursively(Node* N){
if(N==NULL){
    return 0;
}
else{
return 1+findLengthRecursively(N->Next);
}
}

int main(){
Node* N1=new Node();
N1->Value=3;
Node* N2=new Node();
N2->Value=7;
N2->Next=nullptr;
N1->Next=N2;
Node** ptrToN1=&N1;
printValue(ptrToN1);
cout << endl << "let\'s insert a value in the begining!" << endl;
pushFront(ptrToN1,1);
printValue(ptrToN1);
cout << "Note!" << endl;
cout << "Don't think in terms of N1, N2. Think about pointer after each other" << endl;

cout <<"After inserting a value after second to last node" << endl;
inserAfter(N1->Next,19);
printValue(ptrToN1);

cout <<"After inserting a value after second to last node" << endl;
inserAfter(N1->Next->Next,17);
printValue(ptrToN1);

cout <<"Inseting a value at the end" << endl;
pushBack(&N1,37);
printValue(ptrToN1);

cout << "let's insert some random number" << endl;
int randomNumber;
for(int i=0; i<10;i++){
    randomNumber=rand()%20;
    pushBack(&N1,randomNumber);
}
printValue(ptrToN1);

cout << "Let\'s search using a helper vector: " <<endl;
int Number=6;
bool isThere=searchWithVector(N1,Number);
if (isThere){
    cout << "The number " << Number << " is found!" << endl;
}
else {
    cout << "The number " << Number << " is not found!"  << endl;
}
cout << endl;

cout << "Let\'s search a iteratively: " <<endl;
int Number1=7;

isThere=searchIteratively(N1,Number1);
if (isThere){
    cout << "The number " << Number1 << " is found!" << endl;
}
else {
    cout << "The number " << Number1 << " is not found!"  << endl;
}

cout << endl;

cout << "Let\'s search a recursively: " <<endl;
int Number2=8;

isThere=searchRecursively(N1,Number2);
if (isThere){
    cout << "The number " << Number2 << " is found!" << endl;
}
else {
    cout << "The number " << Number2 << " is not found!"  << endl;
}
cout << endl;

cout << "Now the length iteratively:" << endl;
int length=findLengthIteratively(N1);
cout << "the length of the nodelist is: " << length << endl << endl;

cout << "Now the length recursively:" << endl;
int length1=findLengthRecursively(N1);
cout << "the length of the nodelist is: " << length1 << endl;

return 0;
}
