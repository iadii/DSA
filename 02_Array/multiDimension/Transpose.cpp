#include<bits/stdc++.h>

int anotherWay(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
           swap( arr[i][j], arr[j][i]);
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

    return 0;
}

int main () {
   
    int arr[3][3] = {
        {2, 4, 6},
        {8, 10, 102},
        {15, 16, 18}
    };

    int brr[3][3];

    anotherWay(arr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            brr[j][i] = arr[i][j];
        }
        
    }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
   return 0;
}