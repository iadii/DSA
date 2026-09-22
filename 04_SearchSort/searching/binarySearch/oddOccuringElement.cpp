#include <bits/stdc++.h>

int binarySearch(vector<int> arr) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        // Make sure mid + 1 is valid
        if (mid == e) {
            ans = mid;
            break;
        }
        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) {
                s = mid + 2;
            }
            else {
                ans = mid;
                e = mid - 1;
            }
        }
        else {
            if (arr[mid] == arr[mid - 1]) {
                s = mid + 1;
            }
            else {
                ans = mid;
                e = mid - 1;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 2, 5, 5, 6, 8, 8, 10, 10, 11, 11};
    int index = binarySearch(arr);
    cout << "Odd occurred Element is at index: "<< index << " and element is: " << arr[index];
    return 0;
}
