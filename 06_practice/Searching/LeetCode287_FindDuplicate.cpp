#include<bits/stdc++.h>

// LeetCode 287: Find the Duplicate Number
// Given an array of n+1 integers where each integer is in range [1, n],
// find and return one of the duplicate numbers.
// Constraint: O(1) extra space
// Time Complexity: O(n log n)

int findDuplicate(vector<int>& nums) {
    int left = 1;
    int right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // Count how many numbers are <= mid
        int count = 0;
        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }
        
        // If count > mid, duplicate is in [left, mid]
        // Otherwise duplicate is in [mid+1, right]
        if (count > mid) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}

int main() {
    // Test case 1
    vector<int> arr1 = {1, 3, 4, 2, 2};
    cout << "Test 1: Duplicate found = " << findDuplicate(arr1) << endl;
    
    // Test case 2
    vector<int> arr2 = {3, 1, 3, 4, 2};
    cout << "Test 2: Duplicate found = " << findDuplicate(arr2) << endl;
    
    // Test case 3
    vector<int> arr3 = {1, 4, 4, 2, 4};
    cout << "Test 3: Duplicate found = " << findDuplicate(arr3) << endl;
    
    // Test case 4
    vector<int> arr4 = {2, 5, 9, 6, 4, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 1, 3};
    cout << "Test 4: Duplicate found = " << findDuplicate(arr4) << endl;
    
    return 0;
}
