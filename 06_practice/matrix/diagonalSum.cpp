#include<bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>> arr){
    int row = arr.size();           // number of rows
    int col = arr[0].size();        // number of columns
    int sum = 0;

    // Add primary diagonal (top-left to bottom-right)
    for(int i = 0; i < row; i++){
        sum += arr[i][i];
    }

    // Add secondary diagonal (top-right to bottom-left)
    // Avoid counting center element twice if matrix is odd-sized
    for(int i = 0; i < row; i++){
        if(i != row - 1 - i){  // Skip if it's the center element
            sum += arr[i][row - 1 - i];
        }
    }

    return sum;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = diagonalSum(arr);
    cout << "Sum of diagonal elements: " << result << endl;
    // Output: 1 + 3 + 5 + 7 + 9 = 25

    return 0;
}
