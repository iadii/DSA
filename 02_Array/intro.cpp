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
    cout<<endl;

    // address of an array
    // both will give same output in case of array
    cout<<"Address of given array is: "<<&arr<<endl;
    cout<<"Address of given array is: "<<arr<<endl;


    // size of an array
    // sizeof returns the size of datatype
    // mean int size is 4byte (based system architecture 64bit=4byte, 32bit=2byte)
    // but in case of given array there is five elements in array
    // so it will return 5 * 4 = 20 byte
    cout<<"size of given array is: "<<sizeof(arr)<<endl;


    // since given size is more but element is less 
    // then in empty place it will be filled by zero
    int arr2[5] = {12,13};
    for(int i = 0; i < size; i++){

        cout<<arr2[i]<<" ";
    }

   return 0;
}