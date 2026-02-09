#include<bits/stdc++.h>
vector<int> bianrySeach(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == target){
            return {mid};
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
    }
    return { -1 };
}
int main () {

    vector<int> arr = {
        10, 20, 30, 40, 50, 60, 70
    };
    int target = 30;
    vector<int> val = bianrySeach(arr, target);
    cout<<"Element is found at: "<<val[0]<<" and value is: "<<arr[val[0]];
   return 0;
}