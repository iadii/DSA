#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> sorted_nums = nums;
    int n = sorted_nums.size();
    
    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sorted_nums[j] > sorted_nums[j + 1]) {
                swap(sorted_nums[j], sorted_nums[j + 1]);
            }
        }
    }
    
    vector<int> result;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (sorted_nums[j] < nums[i]) {
                count++;
            } else {
                break; // Since it's sorted
            }
        }
        result.push_back(count);
    }
    return result;
}

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> result = smallerNumbersThanCurrent(nums);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
