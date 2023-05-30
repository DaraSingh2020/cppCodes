#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    vector<int> Result;
    bool Flag=false;
    int Target;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> Nums=nums;
        int SizeV=Nums.size();
        Target=target;
        int i,j;

        for(i=0;i<Nums.size();i++){
            for(j=i+1;j<SizeV;j++){
                if((Nums[i]+Nums[j])==Target){
                    Result.push_back(i);Result.push_back(j);
                    Flag=true;
                    break;
                }
            }
            if (Flag){
               break;
            }
        }

        return Result;
    }
};

int main(){
vector<int> nums={2,7,11,15};
int target=9;
Solution S;
vector<int> SS=S.twoSum(nums,target);

cout << "Numbers are: " << SS[0] <<" and " << SS[1] << endl;

vector<int> nums1={3,2,4};
int target1=6;
Solution S1;
vector<int> SS1=S1.twoSum(nums1,target1);

cout << "Numbers are: " << SS1[0] <<" and " << SS1[1] << endl;

vector<int> nums2={3,3};
int target2=6;
Solution S2;
vector<int> SS2=S2.twoSum(nums2,target2);

cout << "Numbers are: " << SS2[0] <<" and " << SS2[1] << endl;



}
