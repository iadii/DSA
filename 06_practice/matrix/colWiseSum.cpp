#include<bits/stdc++.h>
vector <int> sum(vector<vector<int>> arr){
    int row = arr.size();           
    int col = arr[0].size();       
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    return {};
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