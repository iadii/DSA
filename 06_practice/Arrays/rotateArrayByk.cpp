#include<bits/stdc++.h>
int rotation(vector<int> arr, int k){
    int size = arr.size();
    int temp[k];

    for(int i = 0; i < k; i++){
        temp[i] = arr[size - k + i];
    }

    for(int i = size - 1; i >= 0; i--){
        arr[i] = arr[i - 1];
    }

    for(int i = 0; i < k; i++){
        arr[i] = temp[i];
    }

    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}
int main () {
   
    vector<int> arr = {10, 20, 30, 40, 50};
    int k = 2;
    rotation(arr, k);
   return 0;
}