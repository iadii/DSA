#include<bits/stdc++.h>
vector<int> binarySearch(vector<int> arr, int target){

    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int mid = (start + (end - start)) /2;

        if(arr[mid] == target){
            return { mid };
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
    }

    return {}
}
int main () {
   
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int target = 40;
    vector<int> index = binarySearch(arr, target);
    cout<<target<<" found at index "<<index[0];
   return 0;
}