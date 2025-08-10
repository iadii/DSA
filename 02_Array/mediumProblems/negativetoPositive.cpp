#include<bits/stdc++.h>

int modify(int arr[], int size){

    int left = 0;
    int temp;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] < 0){
            temp = arr[left];
            arr[left] = arr[i];
            arr[i] = temp;
            left++;
        }
    }
    
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
int main () {
   

    int arr[] = {
        23, -7, 12, -10, -11, 40, 60
    };
    int size = sizeof(arr) / sizeof(arr[0]);


    modify(arr, size);

   return 0;
}