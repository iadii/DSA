#include <bits/stdc++.h>

// LeetCode 560: Subarray Sum Equals K
// Find the total number of continuous subarrays whose sum equals k
// Time: O(n), Space: O(n)
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;
    int sum = 0, count = 0;
    for (int num : nums) {
        sum += num;
        if (prefixSumCount.count(sum - k)) {
            count += prefixSumCount[sum - k];
        }
        prefixSumCount[sum]++;
    }
    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, -2, 5};
    int k = 3;
    cout << "Array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    cout << "k = " << k << endl;
    cout << "Number of subarrays with sum k: " << subarraySum(nums, k) << endl;
    return 0;
}
