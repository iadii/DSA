#include<bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();
    int sum = 0;

    for(int i = 0; i < row; i++){
        sum += arr[i][i];
    }

    for(int i = 0; i < row; i++){
        if(i != row - 1 - i){
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

    return 0;
}
