#include<bits/stdc++.h>
vector<int> firstOccurrence(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    int ans = 0;
    while(s < e){
        int mid = e + (s - e)/2;

        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
    }
    return { ans };
}
int main () {

    vector<int> arr = {
        10, 20, 30, 30, 30, 40, 50
    };
    int target = 30;
    int val = firstOccurrence(arr, target);
    cout<<"first Occurrence is at: "<<val[0]<<" and value is: "<<arr[val[0]];
   return 0;
}