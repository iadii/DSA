#include<bits/stdc++.h>
int binarySearch(vector<int> arr, int target){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    
    while(start <= end){
        int mid = int((start + end)/2);
        if(arr[mid] == target){
            return mid;
        }
        if(target < arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
    
}
int main () {
   
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70 ,80};
    int target = 60;
    int index = binarySearch(arr, target);
    cout<<target<<" is at index: " <<index;
   return 0;
}