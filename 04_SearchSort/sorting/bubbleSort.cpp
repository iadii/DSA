#include<bits/stdc++.h>
void bubbleSort(vector<int> arr) {
    bool swapped;
    for (size_t i = 0; i < arr.size(); ++i) {
        swapped = false;
        for (size_t j = 1; j < arr.size() - i; ++j) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
                swapped = true;
            }
        }
        if (!swapped) break; 
    }
}

void printVector(const vector<int> arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (i) cout << ' ';
        cout << arr[i];
    }
    cout << '\n';
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Before: ";
    printVector(arr);

    bubbleSort(arr);

    cout << "After:  ";
    printVector(arr);
    return 0;
}