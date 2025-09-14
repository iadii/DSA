#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {2, 4, 6},
        {8, 10, 102},
        {14, 16, 18}
    };
    
    // Get actual dimensions from matrix
    int rows = matrix.size();
    int cols = matrix[0].size();

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
    cout << "Row with maximum sum: " << maxRow << endl;
    cout << "Maximum sum: " << maxSum << endl;
    
    return 0;
}