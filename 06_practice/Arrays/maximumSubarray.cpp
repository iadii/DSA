#include <bits/stdc++.h>
using namespace std;

// LeetCode 53: Maximum Subarray (Kadane's Algorithm)
// Find the contiguous subarray with the largest sum
// Time: O(n), Space: O(1)
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    cout << "Maximum subarray sum: " << maxSubArray(nums) << endl;
    return 0;
}
