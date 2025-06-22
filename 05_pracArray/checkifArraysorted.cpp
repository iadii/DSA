// Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.
#include<bits/stdc++.h>

bool checkSort(int arr[], int size){
 
    for (int i = 0; i < size; i++){
        
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}
int main () {
   
   int arr[15] = {23, 87, 12, 45, 67, 34, 90, 56, 78, 11, 39, 62, 5, 73, 28};
   int size = sizeof(arr) / sizeof(arr[0]);

   bool value = checkSort(arr, size);
   cout<<"Is Array Sorted: "<<value;
   return 0;
}