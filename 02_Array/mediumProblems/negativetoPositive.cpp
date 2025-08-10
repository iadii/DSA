#include<bits/stdc++.h>

int modify(vector<int> arr, int size){

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
   

    vector<int> arr = {
        23, -7, 12, -10, -11, 40, 60
    };



    modify(arr, arr.size());

   return 0;
}