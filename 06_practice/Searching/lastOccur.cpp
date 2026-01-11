#include<bits/stdc++.h>
vector<int> occur(vector<int> arr, int target){

    int start = 0;
    int end = arr.size() - 1;
    int res = 0;
    while(start <= end){
        int mid = start + (end - start) /2;

        if(arr[mid] == target){
            
            res = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
    }

    return {res};
}
int main () {
   
    vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50};
    int target = 30;
    vector<int> index = occur(arr, target);
    cout<<target<<" found at index "<<index[0];
   return 0;
}