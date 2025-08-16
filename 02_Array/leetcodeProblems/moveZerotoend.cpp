#include<bits/stdc++.h>

int moveZero(vector<int> nums){

    int size = nums.size();
    int left = 0;
    int right = size - 1;

    vector<int> temp;

    for (int i = 0; i < size; i++){

        if(nums[i] != 0){
            temp.push_back(nums[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }
    
    for (int i = temp.size(); i < size; i++)
    {
       nums[i] = 0;
    }
    
    
    for(int i : nums){
        cout<<i<<" ";
    }
    return 0;
}
int main () {
   
    vector<int> nums = {
        0,1,0,3,12
    };
    moveZero(nums);
   return 0;
}