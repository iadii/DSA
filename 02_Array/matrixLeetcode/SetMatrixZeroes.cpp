// LeetCode 73: Set Matrix Zeroes
// https://leetcode.com/problems/set-matrix-zeroes/
#include<bits/stdc++.h>
using namespace std;
vector<int> setZeroes(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();
    vector<bool> zeroRow(row, false), zeroCol(col, false);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == 0) {
                zeroRow[i] = true;
                zeroCol[j] = true;
            }
        }
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(zeroRow[i] || zeroCol[j]) {
                arr[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return {};
}
int main () {
    vector<vector<int>> arr = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    setZeroes(arr);
    return 0;
}
