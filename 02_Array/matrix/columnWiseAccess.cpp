#include<bits/stdc++.h>
int main () {

   int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int size1 = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
   return 0;
}