#include<bits/stdc++.h>
int main () {
   
    int arr[] = {45, 12, 89, 34, 56, 23, 78, 90, 11, 7, 43, 21, 99, 55, 32, 18};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp = arr[size-1];

    for(int i = size -1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

   return 0;
}