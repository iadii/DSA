#include<bits/stdc++.h>
int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() -1;

    while(start <= end){
        int mid = start + (end - start) /2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid - 1;
        }
    }
    return -1;
}
int main () {
   
    vector<int> arr = {
        1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    int target = 7;
    int index = binarySearch(arr, target);
    cout<<"item is at index: "<<index;
   return 0;
}