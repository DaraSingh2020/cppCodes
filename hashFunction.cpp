#include <iostream>
#include <vector>

using namespace std;

int hashFunction(string key, int tableSize){
int hashValue=0;
for(auto i=key.begin(); i!=key.end(); i++){
    hashValue+=*i;
}
return hashValue% tableSize;
}

void printHashsomething(string key){
for(auto i=key.begin(); i!=key.end(); i++){
 cout << *i << "\t" ;
 cout << endl;
}
}

int main(){
string daraString="Hello";
int hashTableSize=23;
int hashIndex=hashFunction(daraString,hashTableSize);
cout << "hash index: " << hashIndex << endl;
cout << endl;
printHashsomething(daraString);

cout << endl << 0+'a' << endl;

return 0;
}
