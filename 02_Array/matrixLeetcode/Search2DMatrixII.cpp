// LeetCode 240: Search a 2D Matrix II
// https://leetcode.com/problems/search-a-2d-matrix-ii/
#include<bits/stdc++.h>
using namespace std;
bool searchMatrix2(vector<vector<int>> arr, int target){
    int row = arr.size();
    int col = arr[0].size();
    int i = 0, j = col - 1;
    while(i < row && j >= 0){
        if(arr[i][j] == target){
            cout << "Found" << endl;
            return true;
        } else if(arr[i][j] > target){
            j--;
        } else {
            i++;
        }
    }
    cout << "Not Found" << endl;
    return false;
}
int main () {
    vector<vector<int>> arr = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    searchMatrix2(arr, 5);
    searchMatrix2(arr, 20);
    return 0;
}
