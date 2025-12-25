#include <bits/stdc++.h>
vector<int> twoSum(vector<int> nums, int target){

    int n = nums.size();
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
     
    return {-1};
}
int main(){

    vector<int> arr = {2, 7, 11, 15};
    int target = 26;
    vector<int> val = twoSum(arr, target);
    
    for(int val : val){
        cout<<val<<" ";
    }
    
    return 0;
}