#include<bits/stdc++.h>

vector<int> binarySearch(vector<int> arr, int target){

    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int mid = start + (end - start) /2;

        if(arr[mid] == target){
            return {mid};
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
    }
    return {-1};
}

int main () {
   
    vector<int> arr = {2, 5, 8, 11, 12, 14, 17};
    int item = 12;

    vector<int> value = binarySearch(arr, item);

    cout<<item<<" found at index "<<value[0];
   return 0;
}