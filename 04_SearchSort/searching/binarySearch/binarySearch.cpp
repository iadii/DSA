#include<bits/stdc++.h>
int binarySearch(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    while(s <= e){
        int mid = (s + e)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        else{
            s = mid + 1;
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