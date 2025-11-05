#include<bits/stdc++.h>

int bSearch(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    while(s <= e){
        int mid = s + (e - s) /2;

        if(target == arr[mid]){
            return mid;
        }
        else if (arr[mid] < target){
            s = mid + 1;
        }
        else if (arr[mid] > target){
            e = mid - 1;
        }
    }
    return  -1;
}
int main () {

    vector <int> arr = {
        10, 20, 30, 40, 50, 60
    };

    int target = 60;

    int val = bSearch(arr, target);
    cout<<"item found at index: "<<val;

   return 0;
}