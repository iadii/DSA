/* 
    Given an array ‘A’ of ‘N’ integers, find the majority elements of the array.

    A majority element in an array ‘A’ of size ‘N’ is an element that appears more than floor(N / 3) times.

    Note: The floor function returns the number rounded down to the nearest integer.

    Note: Return the array of majority elements in sorted order.

    Example:
    Input: ‘N’ = 9 ‘A’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
 */
#include<bits/stdc++.h>
using namespace std;

void majorityElement(int arr[], int size) {
    int n = size / 3;
    // Sort the array to make duplicate checks easy
    sort(arr, arr + size);

    for (int i = 0; i < size; i++) {
        // Skip duplicates
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int occr = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                occr++;
            }
        }
        if (occr > n) {
            cout << arr[i] << " ";
        }
    }
}

int majorityElementHashMap(int arr[], int size) {
    int n = size / 3;
    unordered_map<int, int> freq;
    vector<int> result;

    // Count frequencies
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Collect elements appearing more than n times
    for (auto &p : freq) {
        if (p.second > n) {
            result.push_back(p.first);
        }
    }

    // Sort result as required
    sort(result.begin(), result.end());

    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}

int main () {
    int arr[] = {2, 2, 1, 3, 1, 1, 3, 1, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Majority element(s) using sorting: ";
    majorityElement(arr, size);
    cout << endl;

    cout << "Majority element(s) using hashmap: ";
    majorityElementHashMap(arr, size);
    cout << endl;

    return 0;
}