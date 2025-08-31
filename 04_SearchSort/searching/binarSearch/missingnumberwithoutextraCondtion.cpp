#include <bits/stdc++.h>
using namespace std;

int missingElement(vector<int> arr) {
    int start = 0;
    int end = arr.size();

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] - mid == 1) {
            // No missing number on the left; go right
            start = mid + 1;
        } else {
            // Missing number is at mid or to the left
            end = mid;
        }
    }

    // When loop ends, 'start' is the index where missing number should be
    // Since numbers start from 1, missing number is start + 1
    return start;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8}; 

    int missingIndex = missingElement(arr);

    cout << "Missing element is at index " << missingIndex <<" and missing value is "<<missingIndex + 1 <<endl;

    return 0;
}
