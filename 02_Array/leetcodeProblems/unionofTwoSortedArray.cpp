#include<bits/stdc++.h>

void unionofTwoArr(vector<int> arr, vector<int> nums){

   set<int> unionSet(arr.begin(), arr.end());

    for (int num : nums) {
        unionSet.insert(num);
    }

    cout << "Union of both arrays: ";
    for (int val : unionSet) {
        cout << val << " ";
    }
    cout << endl;
    
}

int main () {
   
    vector<int> arr = {
        3, 5, 7, 9, 11, 13, 17, 19, 23, 27, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71

    };
    vector<int> nums = {
        2, 3, 5, 7, 10, 13, 17, 21, 23, 29, 31, 37, 42, 47, 50, 59, 64, 67, 70, 73
    };

    unionofTwoArr(arr, nums);

   return 0;
}