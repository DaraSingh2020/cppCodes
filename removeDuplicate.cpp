#include <iostream>
#include <vector>

using namespace std;

    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int endPoint=nums.size();

        while(i<endPoint-1){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i+1);
                endPoint--;
                }

            else{
                i++;
            }
        }
        return nums.size();
    }

int main(){
int numSize;
vector<int>nums1={1,1,2};
cout << nums1.size() << endl;
vector<int>nums2={0,0,1,1,1,2,2,3,3,4};
for(int i=0;i<nums1.size();i++){
    cout << nums1[i] <<"\t";
}
cout << endl;

for(int i=0;i<nums2.size();i++){
    cout << nums2[i] <<"\t";
}
cout << endl;

numSize=removeDuplicates(nums1);
cout << numSize << endl;
for(int i=0;i<nums1.size();i++){
    cout << nums1[i] <<"\t";
}
cout << endl;

numSize=removeDuplicates(nums2);
cout << numSize << endl;
for(int i=0;i<nums2.size();i++){
    cout << nums2[i] <<"\t";
}
cout << endl;


return 0;
}

