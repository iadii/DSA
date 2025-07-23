#include <bits/stdc++.h>

int main() {
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    int maxSum = INT_MIN, maxRow = 0;
    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < cols; ++j)
            sum += matrix[i][j];
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << maxRow << endl;
    return 0;
}