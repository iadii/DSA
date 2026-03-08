#include<bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> expected = heights;
    int n = expected.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (expected[j] > expected[j + 1]) {
                swap(expected[j], expected[j + 1]);
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> heights = {1, 1, 4, 2, 1, 3};
    cout << heightChecker(heights) << endl;
    return 0;
}
