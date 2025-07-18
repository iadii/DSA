#include<bits/stdc++.h>
bool search(int arr[][3], int row, int col, int element){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(element == arr[i][j]){
                
                return true;
                
            }
        }
        
    }
    return -1;
}

int main () {
   
    int arr[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };

    int element = 12;
    
    bool val = search(arr, 3, 3, element);
    if(val == true){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
    
    
   return 0;
}