#include<bits/stdc++.h>
vector<int> moveZero(vector<int> arr){

    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
        if(arr[left] == 0){
            swap(arr[left], arr[right]);
            right--;
        }
        left++;
    }
    for(int val : arr){
        cout<<val<<" ";
    }
    
    return {0};
}
int main () {
   
    vector<int> arr = {5,0,2,0,0,3,12,1};
    moveZero(arr);
   return 0;
}