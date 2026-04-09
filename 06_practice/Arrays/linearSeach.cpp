#include<bits/stdc++.h>
vector<int> linearSearch(vector<int> arr, int target){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == target){
            return {i, target};
        }
    }
    return {-1, target};
}
int main () {
   vector<int> arr = {42, 7, 89, 13, 65, 21, 34, 90, 2, 77, 56, 18, 99, 45, 61, 73, 28, 44, 10, 81};
   int target = 45;
   vector<int> val = linearSearch(arr, target);
    cout<<val[1]<<" element is found at index "<<val[0];
   return 0;
}