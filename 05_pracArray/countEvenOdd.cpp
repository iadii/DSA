// Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.
#include<bits/stdc++.h>

int evenOdd(int arr[], int size){

    int isEven = 0;
    int isOdd = 0;
    for (int i = 0; i < size; i++){

        if(arr[i] % 2 == 0){
            isEven++;
        }
        else if(arr[i] % 2 != 0){
            isOdd++;
        }

    }

    cout<<"Count of even number is: "<<isEven<<endl;
    cout<<"Count of odd number is: "<<isOdd<<endl;
    
    return 0;
}
int main () {

    int arr[15] = {23, 87, 12, 45, 67, 34, 90, 56, 78, 11, 39, 62, 5, 73, 28};
    int size = sizeof(arr) / sizeof(arr[0]);

    evenOdd(arr, size);

   
   return 0;
}
