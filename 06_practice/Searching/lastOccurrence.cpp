#include<bits/stdc++.h>
int lastOccurence(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() -1;
    int occurrence = -1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(target == arr[mid]){
            occurrence = mid;
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
    }
    return occurrence;
}

int main () {
   
    vector<int> arr = {
        10, 20, 30, 30, 30, 30, 30, 30, 40, 50
    };
    int target = 30;

    int index = lastOccurence(arr, target);
    cout<<"last occurrence of "<<target<<" is at index : "<<index;
   return 0;
}