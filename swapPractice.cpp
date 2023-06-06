#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> myArray={1,2,4,5,7,5,7,8,5,5,3,2,1,5,8,0,3,2,2,3};
    int val=5;
    int i=0;
    int j=myArray.size()-1;
    cout << j << endl;
    cout << myArray[j] << endl;
    int temp;
    while(i<j+1){
        if(myArray[i]==val){
            if(myArray[j]!=val){
                temp=myArray[i];
                myArray[i]=myArray[j];
                myArray[j]=temp;
                i++;
                j--;
            }
            else{
            j--;
            }
        }
        else if(myArray[i]!=val){
            i++;
        }

    }
    for(int i=0;i<myArray.size();i++){
        cout <<myArray[i]<< "\t";
    }

return 0;
}
