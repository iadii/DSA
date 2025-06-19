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

    for ( i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

int twoPointer(int arr[], int size){

    
}

int main () {
   
    int arr[] = {
        1,0,0,1,1,0,1,0,1,0,0,0,1
    };
    int size = sizeof(arr) / sizeof(arr[0]);

    byCounting(arr, size);

   

   return 0;
}