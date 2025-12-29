// LeetCode 74: Search a 2D Matrix
// https://leetcode.com/problems/search-a-2d-matrix/
#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> arr, int target){
    int row = arr.size();
    int col = arr[0].size();
    int low = 0, high = row * col - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        int r = mid / col;
        int c = mid % col;
        if(arr[r][c] == target){
            cout << "Found" << endl;
            return true;
        } else if(arr[r][c] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "Not Found" << endl;
    return false;
}
int main () {
    vector<vector<int>> arr = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    searchMatrix(arr, 3);
    searchMatrix(arr, 13);
    return 0;
}
