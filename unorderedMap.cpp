#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    int N;
    vector<int> myArray;
for(int i=0; i< 30; i++){
    N=rand()%10;
    myArray.push_back(N);
}
for(auto n:myArray){
    cout << n << "\t";
}
cout << endl;

unordered_map<int, int> uMap={};
for(int n:myArray){
    if(uMap.find(n)!=uMap.end()){
        uMap[n]++;
    }
    else{
        uMap[n]=1;
    }
}
cout << "Bucket size of myArray is: " << uMap.bucket_count() << endl << endl;


for(auto n:uMap){
    cout << n.first << "--->" << n.second << endl;
}
cout << endl;

unordered_map<int,int> daraMap={{1,4},{3,1},{7,4},{8,1},{2,9},{5,3}};
for(auto n:daraMap){
    cout << n.first << "-->" << n.second << endl;
}
cout << endl << "bucket size of daraMap is: " << daraMap.bucket_count() << endl;

for(auto n:daraMap){
    cout << n.first << "-->" << daraMap.at(n.first) << endl;
}

return 0;
}
