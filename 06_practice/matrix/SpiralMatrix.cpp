
#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;
    vector<int> result;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            result.push_back(arr[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            result.push_back(arr[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(arr[i][left]);
            }
            left++;
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return {};
}
int main () {
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    spiralOrder(arr);
    return 0;
}
