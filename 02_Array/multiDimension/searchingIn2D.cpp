#include<bits/stdc++.h>

int main () {
   
    int arr[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };

    int element = 12;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(element == arr[i][j]){
                
                cout<<"element found at place "<<i<<j;
                
            }
        }
        
    }
    
   return 0;
}