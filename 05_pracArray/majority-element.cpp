/* 
    Given an array ‘A’ of ‘N’ integers, find the majority elements of the array.

    A majority element in an array ‘A’ of size ‘N’ is an element that appears more than floor(N / 3) times.

    Note: The floor function returns the number rounded down to the nearest integer.

    Note: Return the array of majority elements in sorted order.

    Example:
    Input: ‘N’ = 9 ‘A’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
 */
#include<bits/stdc++.h>
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

int main () {
    int arr[] = {2, 2, 1, 3, 1, 1, 3, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Majority element(s): ";
    majorityElement(arr, size);
    return 0;
}