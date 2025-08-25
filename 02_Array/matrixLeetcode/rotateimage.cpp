// You are given an row x row 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
/* 
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
 */

 #include<bits/stdc++.h>
 int rotate(vector<vector<int>> mat){
    int row = mat.size();

    for(int i = 0; i < row; i++){
        for (int j = i + 1; j < row; ++j) {
        swap(mat[i][j], mat[j][i]);
    }
        
    }

   for (int i = 0; i < row; ++i) {
        int left = 0, right = row - 1;
        while (left < right) {
            swap(mat[i][left], mat[i][right]);
            left++;
            right--;
        }
    }
    
    for (int i = 0; i < row; i++)
    {
        cout<<"[ ";
        for(int j = 0; j < row; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl; 
    }
    
    return 0;

 }


 int main () {
    
    vector<vector<int>> mat = {
        {1,2,3},{4,5,6},{7,8,9}
    };

    rotate(mat);
    return 0;
 }