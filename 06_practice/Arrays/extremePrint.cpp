#include<bits/stdc++.h>
int extremePrint(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){
        if(start == end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}
int main () {
    vector<int> arr = {10, 20, 30, 40, 50};
    extremePrint(arr);
   return 0;
}