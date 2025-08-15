#include<bits/stdc++.h>

int missingNum(vector<int> nums){

    int sum = 0;
    int diff;

    for(int i = 1; i <= nums.size(); i++){
        sum += i;
    }
    diff = sum;
    for (int i = 0; i < nums.size(); i++)
    {
        diff -= nums[i];
    }
    
    return diff;
}

int anotherWay(vector<int> nums){

    int n = nums.size();
    int expSum = n * (n + 1)/2;
    int actSum = 0;
    int diff;

    for(int i = 0; i < n; i++){
        actSum += nums[i];
    }
    diff = expSum - actSum;

    return diff;
}
int main () {
   

    // vector<int> nums = {9,6,4,2,3,5,7,0,1};
    vector<int> nums = {3,0,1};

    int val = missingNum(nums);
    int val2 = anotherWay(nums);
    cout<<val<<endl;
    cout<<val2<<endl;
   return 0;
}