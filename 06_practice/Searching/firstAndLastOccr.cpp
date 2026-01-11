// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include<bits/stdc++.h>
vector<int> occur(vector<int>& nums, int target) {

    if (nums.size() == 0) return {-1, -1};

    int fOccur = -1;
    int lOccur = -1;

    int s = 0;
    int e = nums.size() - 1;
    // first occur
    while(s <= e){
        int mid = s + (e - s)/2;
        if(nums[mid] == target){
            fOccur = mid;
            e = mid -1;
        }
        else if(nums[mid] > target){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    s = 0;
    e = nums.size() - 1;
        // last occur
    while(s <= e){
        int mid = s + (e - s)/2;
        if(nums[mid] == target){
            lOccur = mid;
            s = mid + 1;
        }
        else if(nums[mid] > target){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return {fOccur, lOccur};
}
int main () {
    vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50};
    int target = 30;
    vector<int> index = occur(arr, target);
    cout<<"first occurence found at index "<<index[0]<<endl;
    cout<<"last occurence found at index "<<index[1];
   return 0;
}