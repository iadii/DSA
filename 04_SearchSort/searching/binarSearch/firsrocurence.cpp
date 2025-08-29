#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> arr, int target) {
    int start = 0; 
    int end = arr.size() - 1; 
    int ans = -1; // Variable to store the result index (if found)

    while (start <= end) {
        // this might make integer overflow
        // int mid = int((start + end)/2);

        // best practice
        // this won't cause integer overflow
        int mid = start + (end - start) /2;


        // Now, check value at mid index and compare with target
        if (target == arr[mid]) {
            // If target is found at mid, update answer
            ans = mid;

            // But we are looking for the **first** occurrence,
            // So we move to the **left half** to see if there's an earlier occurrence.
            // Mathematically: reduce search space to [start, mid-1]
            end = mid - 1;
        } else if (target > arr[mid]) {
            // If target is greater than value at mid,
            // it must be in the **right half**, because array is sorted.
            // So we set start = mid + 1
            start = mid + 1;
        } else if (target < arr[mid]) {
            // If target is less than value at mid,
            // it must be in the **left half**
            end = mid - 1;
        }
    }
    return ans;
}

int main () {
    vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50};
    int target = 30;
    int index = firstOccurence(arr, target);
    cout << target << " first occurrence found at index: " << index;

    return 0;
}
