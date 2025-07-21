#include<bits/stdc++.h>

int main() {
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    vector<int> vec(cols), result(rows, 0);

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    for (int i = 0; i < cols; ++i)
        cin >> vec[i];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i] += matrix[i][j] * vec[j];

    for (int i = 0; i < rows; ++i)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}