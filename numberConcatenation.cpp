#include <iostream>
#include <algorithm>
#include <vector>





using namespace std;


int main(){
//vector<int>nums({7,52,2,4});
vector<int>nums({5,14,13,8,12});

        long long N=0;
        int L=0;
        int R=nums.size()-1;
        int rDigits=1;
        int numR;
        while(L<R){
            numR=nums[R];
            while(numR>0){
            numR/=10;
            rDigits*=10;
            }

            N+=nums[L]*rDigits+nums[R];
            rDigits=1;
            cout << N << endl;
            L++;
            R--;
        }
        if(nums.size()%2==1){
            N+=nums[nums.size()/2];
        }
        cout << N << endl;


return 0;
}
