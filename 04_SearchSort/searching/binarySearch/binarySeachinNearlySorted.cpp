#include<bits/stdc++.h>
int binarySearch(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    while(s <= e){
        int mid = s + (e - s)/2;
        if(arr[mid] ==target){
            return mid;
        }
        else if(arr[mid - 1] ==target){
            return mid - 1;
        }
        else if(arr[mid + 1] ==target){
            return mid + 1;
        }
        else if (target > arr[mid]){
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }
    }
    return -1;
}
int main () {
   
    vector<int> arr = {20, 10, 30, 50, 40, 70, 60};
    int target = 70;
    int index = binarySearch(arr, target);
    cout<<target<<" is at index: " <<index;
   return 0;
}

