#include<bits/stdc++.h>

int byCounting(int arr[], int size){

    
     int countZero = 0;
    int countOne = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            countZero++;
        }
        else if(arr[i] == 1){
            countOne++;
        }
    }
    int i;
    for(i = 0; i < countZero; i++){
        arr[i] = 0;
    }
    for(int j = i; j < size; j++){
        arr[j] = 1;
    }

    // easy way
  /*   int index = 0;
    while(countZero--){
        arr[index] = 0;
        index++;
    }
    while(countOne--){
        arr[index] = 1;
        index++;
    } */

    for ( i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

int twoPointer(int arr[], int size){

    int left = 0;
    int right = size - 1;

    while(left <= right){
        if(arr[left] != 0 && arr[right] != 1){
           int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            // swap(arr[left], arr[right]);
        }
        left++;
        right--;
    }
    for ( int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


int main () {
   
    int arr[] = {
        1,0,0,1,1,0,1,0,1,0,0,0,1
    };
    int size = sizeof(arr) / sizeof(arr[0]);

    byCounting(arr, size);
    twoPointer(arr, size);

   return 0;
}