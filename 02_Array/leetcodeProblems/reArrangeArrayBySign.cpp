/* 
Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4] 
*/

#include<bits/stdc++.h>
int reArrange(vector<int> nums){

    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < nums.size(); i++)   
    {
        if(nums[i] > 0){
            pos.push_back(nums[i]);
        }
        else if(nums[i] < 0){
            neg.push_back(nums[i]);
        }
    }

    for(int i = 0; i < nums.size()/2; i++){
      
      nums[2*i] = pos[i];
      nums[2*i+1] = neg[i];
  }
    
    
    return 0;
}
int main () {
   
    vector<int> nums = {
        3,1,-2,-5,2,-4
    };

    reArrange(nums);
   return 0;
}