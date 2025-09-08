#include<bits/stdc++.h>
int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() -1;

    int mid = -1;
    while(start <= end){
        mid = start + (end - start)/2;

        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
    }
    return mid;
}
int main () {
   vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
   int target = 7;
   int index = binarySearch(arr, target);
   cout<<target <<" is at index: "<<index;
   return 0;
}