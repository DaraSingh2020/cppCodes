#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib>
#include <set>

using namespace std;

int main(){
    int N;
    vector<int> daraV;
    int randomNumberHolder;
    cout << "Enter the size of your array: ";
    cin >> N;
    for(int i=0;i<N;i++){
        randomNumberHolder=rand()%10;
        daraV.push_back(randomNumberHolder);
    }
    cout << "Printing using iterator: " << endl;
    for(vector<int>::iterator it=daraV.begin();it!=daraV.end();++it){
        cout << *it << "\t";
    }
    cout << "Printing using C++ for each type of control: " << endl;
    for(int i:daraV){
        cout << i << "\t";
    }

    cout << "The unique numbers are: " << endl;
    set<int> daraS(daraV.begin(),daraV.end());
    for(set<int>::iterator st=daraS.begin();st!=daraS.end();++st){
        cout << *st << "\t";
    }
    cout << endl;

    cout << "A different way of creating a set: " << endl;
    set<int> daraS1;
    for(vector<int>::iterator ii=daraV.begin();ii!=daraV.end();ii++){
        daraS1.insert(*ii);
    }
    for(set<int>::iterator jj=daraS1.begin();jj!=daraS1.end();jj++)
        cout << *jj << " \t";
}

