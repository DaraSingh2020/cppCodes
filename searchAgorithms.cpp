#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& V, int Start,int End, int key){
    int pos=-1;
    int middle=(Start+End)/2;
    if(V[middle]==key){
        pos=middle;
        return pos;
    }
    else if(Start==End){
        return pos;
    }
    else if(V[middle]<key){
        return binarySearch(V,middle+1,End,key);
    }
    else {
        return binarySearch(V,Start, middle-1, key);
    }
}


int main(){
int N;
vector<int> daraArray;
for(int i=0;i<20; i++){
    N=rand()%20;
    daraArray.push_back(N);
}
N=rand()%20;
sort(daraArray.begin(),daraArray.end());
int i=0;
while(i<daraArray.size()){
    if(daraArray[i]==daraArray[i+1]){
        daraArray.erase(daraArray.begin()+i);
        i++;
        continue;
    }
    i++;
}

for(auto n:daraArray){
    cout << n <<"\t";
}
cout << endl;
cout << "Finding some random positions with binary search!" << endl<< endl;

for(int i=0; i<5; i++){
N=rand()%25;
int position=binarySearch(daraArray,0,daraArray.size(),N);
cout << "The position of " << N << " is: " << position << endl;
}

return 0;
}


