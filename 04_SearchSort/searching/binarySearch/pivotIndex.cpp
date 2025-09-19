#include<bits/stdc++.h>
int pivotIndex(vector<int> arr){

    int start = 0;
    int end = arr.size() -1;
    int ans = -1;

    // Handle edge cases
    // if array size is 1
    if(arr.size() == 1) return 0;

    while(start <= end){
        int mid = start + (end - start) /2;

        if(arr[mid] <= arr[mid - 1]) {

            ans = mid - 1;
            return ans;
        }
        if(arr[mid] > arr[mid + 1]){

            ans = mid;
            return ans;
        }

        if(arr[start] > arr[mid]){
            // if start is greater than mid
            // means we are currently at 2nd line of graph
            end = mid -1;
        }
        else if(arr[start] < arr[mid]){
            start = mid + 1;
        }

    }
    return ans;
}

int main () {
   
    vector<int> arr = {
        12, 14, 16, 19, 2, 4, 6, 8, 10
    };

    int index = pivotIndex(arr);
    cout<<"pivotted index is at index "<<index<<" and element is "<<arr[index];
   return 0;
}