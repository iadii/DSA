#include<bits/stdc++.h>

int maxVal(int arr[][3], int row, int col){

    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] >= max){
                max = arr[i][j];
            }
        }
        
    }
    return max;
    

}
int main () {
   int arr[3][3] = {
        {2, 4, 6},
        {8, 10, 102},
        {14, 16, 18}
    };
    
    int val = maxVal(arr, 3, 3);
    cout<<"Max value is "<<val;
   return 0;
}