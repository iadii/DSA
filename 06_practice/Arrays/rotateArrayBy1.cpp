#include<bits/stdc++.h>
int rotation(vector<int> arr){
    int size = arr.size();
    int temp = arr[size -1];

    for(int i = size - 1; i >= 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}
int main () {
   
    vector<int> arr = {10, 20, 30, 40, 50};
    rotation(arr);
   return 0;
}