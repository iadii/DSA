#include<bits/stdc++.h>
using namespace std;

void spiralOrder(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();
    
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;
    
    while(top <= bottom && left <= right){
        // Print top row
        for(int i = left; i <= right; i++){
            cout << arr[top][i] << " ";
        }
        top++;
        
        // Print right column
        for(int i = top; i <= bottom; i++){
            cout << arr[i][right] << " ";
        }
        right--;
        
        // Print bottom row
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        
        // Print left column
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Spiral Order: ";
    spiralOrder(arr);
    cout << endl;

    return 0;
}
