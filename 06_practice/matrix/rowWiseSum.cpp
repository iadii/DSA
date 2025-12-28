#include<bits/stdc++.h>
int sum( vector<vector<int>> arr){
    
    int row = 3, col =3;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
        
    }
    return 0;
}
int main () {
   
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    sum(arr);
   return 0;
}