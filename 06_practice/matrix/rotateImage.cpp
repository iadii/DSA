#include<bits/stdc++.h>
vector <int> rotateImage(vector<vector<int>> arr){
    int row = arr.size();           
    int col = arr[0].size();       
    int sum = 0;

    // transpose
    for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
            swap(arr[j][i], arr[i][j]);
        }
    }

    // reverse
    for(int i = 0; i < row; i++){
        int left = 0;
        int right = arr[0].size() -1;
        while(left < right){
            swap(arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return {};
}
int main () {
   vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    vector<int> val = rotateImage(arr);
    cout<<"Summation of diagonal element is: "<<val[0];
   return 0;
}