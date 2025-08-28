#include<bits/stdc++.h>
int firstLastOccurrence(vector<int> arr, int target){

    int n = arr.size();
    int s1 = 0;
    int s2 = 0;
    int e1 = n - 1;
    int e2 = n - 1;

    int firstOccurence = -1;
    int lastOccureence = -1;

    while(s1 <= e1){
        int mid = s1 + (e1 - s1)/2;
        
        if(target == arr[mid]){
            firstOccurence = mid;
            e1 = mid - 1;
        }
        if(target < arr[mid]){
            e1 = mid -1;
        }
        if(target > arr[mid]){
            s1 = mid + 1;
        }
    }

    while(s2 <= e2){
        int mid = s2 + (e2 - s2)/2;
        
        if(target == arr[mid]){
            lastOccureence = mid;
            s2 = mid + 1;
        }
        if(target < arr[mid]){
            e2 = mid -1;
        }
        if(target > arr[mid]){

            s2 = mid + 1;
        }
    }
    cout << target << " first occurrence found at index: " << firstOccurence<<endl;
    cout << target << " last occurrence found at index: " << lastOccureence<<endl;
    return 0;
}
int main () {
//    vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50};
   vector<int> arr = {1, 3, 5, 5, 5, 5, 7, 123, 125};
    int target = 7;
    firstLastOccurrence(arr, target);
   return 0;
}