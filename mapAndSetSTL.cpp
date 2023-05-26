#include <iostream>
#include <map>
#include <set>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
int age=49;
string name="Dara";

map<string,int> nameAge;

nameAge[name]=age;

age=33;
name="Jax";
nameAge[name]=age;

cout << nameAge.size() << endl;

std::map<std::string,int>::iterator it;
it=nameAge.begin();
cout << "Dara" << endl;
cout << it->first << "  "<< it->second << endl;

    cout << "Now printing in a for loop-----" << endl;
for(auto it=nameAge.begin(); it!=nameAge.end(); ++it){

   cout << "key: " << it->first << ", value: " << it->second << endl;
}

/////////////////////////////////Sets from here! ////////////

set<int> daraSet;
int N;
for(int i=0;i<10;i++){
    N=rand()%20;
    daraSet.insert(N);
}
cout << "There are "<< daraSet.size() << " elements in the set!"<< endl;
cout << "Yes! I made the set by not looking into any help! I just guessed it!"<< endl;
cout << "Sir, yes sir!" << endl;
for(int i=0;i<20;i++){
cout << "In the set, the occurance of " <<i << " is: "<< " : " << daraSet.count(i) << endl;
}

int k=0;
while(k<20){
cout << "In the set, the occurance of " << k << " is: "<< " : " << daraSet.count(k) << endl;
k++;
}

set<char> daraC;
char Control;
cout << "Enter X to exit" << endl;
cin >> Control;
while(Control!='X'){
    daraC.insert(Control);
    cout << "Enter a letter or X to exit: ";
    cin >>Control;
}
std::set<char>::iterator I;
I=daraC.begin();
while(I!=daraC.end()){

    cout << *I<< endl;
        I++;
}

vector<int> daraVector;
daraVector={2,6,9,4,7,2,5,8};



return 0;
}
