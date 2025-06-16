#include<bits/stdc++.h>

/*
* ARRAYS:
* - An array is a data structure that stores a fixed-size sequential collection
*   of elements of the same type
* - Elements are stored in contiguous memory locations
* - Each element can be accessed directly using its index
* - Array indexing starts from 0
* - Size of array must be declared at time of initialization
*/

int main () {
   
    // Declaring and initializing an integer array with 5 elements
    // This creates an array named 'arr' with values [1,2,3,4,5]
    int arr[] = {
        1,2,3,4,5
    };

    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   return 0;
}