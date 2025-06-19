#include<bits/stdc++.h>
int main () {
   
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 2;
    k = k % size;
    int temp[k];
    for(int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    for(int i = size -1; i > 0; i--){
        arr[i] = arr[i-k];
    }
    
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

   return 0;
}