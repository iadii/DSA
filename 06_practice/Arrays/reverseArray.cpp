#include<bits/stdc++.h>
int reverseArray(vector<int> arr){

    int start = 0;
    int end = arr.size() - 1;
    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}
int main () {
//    vector<int> arr = {10, 20, 30, 40, 50}; {/* 0dd */}
   vector<int> arr = {10, 20, 30, 40, 50, 60}; {/* even */}
   reverseArray(arr);
   return 0;
}