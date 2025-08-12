#include<bits/stdc++.h>
int removeDuplicates(vector<int>& nums) {
    
    int size = nums.size();
    int k = 0;
    for(int i = 0; i < size; i++){
        k = k ^ nums[i];
    }
    return k;
}
int main () {
   
    vector<int> arr = {0,0,1,1,2,2,3,3,4};
    int val = removeDuplicates(arr);

    cout<<val;
   return 0;
}