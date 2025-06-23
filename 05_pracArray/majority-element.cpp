/* 
    Given an array ‘A’ of ‘N’ integers, find the majority elements of the array.

    A majority element in an array ‘A’ of size ‘N’ is an element that appears more than floor(N / 3) times.

    Note: The floor function returns the number rounded down to the nearest integer.

    Note: Return the array of majority elements in sorted order.

    Example:
    Input: ‘N’ = 9 ‘A’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
 */
#include<bits/stdc++.h>
int majorityElement(int arr[], int size){

    int n = size / 3;
    int occr = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if((arr[i] == arr[j])){
                occr++;
            }
        }
        if(occr > n){
        return arr[i];
    }
    }

    
    
}
int main () {
    int arr[] = {2, 2, 1, 3, 1, 1, 3, 1, 1};
   int size = sizeof(arr) / sizeof(arr[0]);

   int val = majorityElement(arr, size);
   
   cout<<"Majority element is: "<<val;
   return 0;
}