#include<bits/stdc++.h>
vector<int> binarySearch(vector<vector<int>> matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row * col;
    int s = 0;
    int e = n - 1;
    while(s <= e){
        int mid = s + (e - s)/2;
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int currIndex = matrix[rowIndex][colIndex];
        if(currIndex == target){
            return {rowIndex, colIndex};
        }else if(currIndex < target){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return {-1, -1};
}
int main () {
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 16;
    vector<int> ans = binarySearch(matrix, target);
    cout << target << " element is at index: ["<< ans[0] << "][" << ans[1] << "]";
   return 0;
}