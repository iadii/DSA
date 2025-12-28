#include<bits/stdc++.h>
vector <int> sum(vector<vector<int>> arr){
    int row = arr.size();           
    int col = arr[0].size();       
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                sum += arr[j][i];
            }
        }
    }
    return {sum};
}
int main () {
   vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    vector<int> val = sum(arr);
    cout<<"Summation of diagonal element is: "<<val[0];
   return 0;
}