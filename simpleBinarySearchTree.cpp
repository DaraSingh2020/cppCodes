#include <iostream>
#include <vector>

using namespace std;

struct Node{
int Value;
Node* left;
Node* right;
Node(int value):Value(value),left(nullptr), right(nullptr){
};
~Node(){
}
};

class cNode{
int Value;
cNode* left;
cNode* right;
public:
cNode(int value):Value(value),left(nullptr), right(nullptr){
};
~cNode(){
}
int getValue(){
return this->Value;
}
cNode* getLeft(){
return this->left;
}
cNode* getRight(){
return this->right;
}
void setLeft(cNode* left){
this->left=left;
}
void setRight(cNode* right){
this->right=right;
}
};


int main(){

Node root(1);
Node N1(2);
Node N2(3);
Node N3(4);
root.left=&N1;
root.right=&N2;
N2.right=&N3;

Node N4(5);
Node N5(6);
N1.right=&N4;
N1.left=&N5;

cout << "\t" << root.Value << endl;
cout << root.left->Value << "\t" << root.right->Value << endl;
cout << root.left->left->Value << "\t" << root.left->right->Value << endl;

Node* soot = new Node(1);
Node* S1 = new Node(2);
Node* S2 = new Node(3);
Node* S3 = new Node(4);
Node* S4 = new Node(5);
Node* S5 = new Node(6);
Node* S6 = new Node(7);
soot->left=S1;
soot->right=S2;
S2->right=S3;
S2->left=S4;
S1->left=S5;
S1->right=S6;

cout << soot->Value << endl;
cout << soot->left->Value << "\t" << soot->right->Value << endl;
cout << soot->left->left->Value << "\t" << soot->left->right->Value << "\t" << soot->right->left->Value << "\t" << soot->right->right->Value << endl;



cNode* ssoot = new cNode(1);
cNode* sS1 = new cNode(2);
cNode* sS2 = new cNode(3);
cNode* sS3 = new cNode(4);
cNode* sS4 = new cNode(5);
cNode* sS5 = new cNode(6);
cNode* sS6 = new cNode(7);
ssoot->setLeft(sS1);
ssoot->setRight(sS2);
sS2->setRight(sS3);
sS2->setLeft(sS4);
sS1->setLeft(sS5);
sS1->setRight(sS6);

cout << ssoot->getValue() << endl;
cout << ssoot->getLeft()->getValue() << "\t" << ssoot->getRight()->getValue() << endl;
cout << ssoot->getLeft()->getLeft()->getValue() << "\t" << ssoot->getLeft()->getRight()->getValue() << "\t" << ssoot->getRight()->getLeft()->getValue() << "\t" << ssoot->getRight()->getLeft()->getValue() << endl;



return 0;}
