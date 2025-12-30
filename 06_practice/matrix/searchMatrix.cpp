#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> arr, int target){
    int row = arr.size();
    int col = arr[0].size();
    
    int top = 0, bottom = row - 1;
    
    while(top <= bottom){
        int mid = top + (bottom - top) / 2;
        if(arr[mid][0] <= target && target <= arr[mid][col - 1]){
            int left = 0, right = col - 1;
            while(left <= right){
                int midCol = left + (right - left) / 2;
                if(arr[mid][midCol] == target){
                    return true;
                }
                else if(arr[mid][midCol] < target){
                    left = midCol + 1;
                }
                else{
                    right = midCol - 1;
                }
            }
            return false;
        }
        else if(arr[mid][0] > target){
            bottom = mid - 1;
        }
        else{
            top = mid + 1;
        }
    }
    
    return false;
}

int main() {
    vector<vector<int>> arr = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    int target = 13;
    
    if(searchMatrix(arr, target)){
        cout << target << " found in matrix" << endl;
    }
    else{
        cout << target << " not found in matrix" << endl;
    }

    return 0;
}
