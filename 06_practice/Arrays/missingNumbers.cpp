#include<bits/stdc++.h>
int missingNum(vector<int> arr){
    int n = arr.size();
    int s = 0;
    int e = arr.size() -1;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == mid + 1){
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid - 1;
        }

    }
    return ans;
}
int main () {

    vector<int> arr = { 1,2,3,4,5,7,8,9};
    int val = missingNum(arr);
    cout<<"missing num is at index: "<<val<<" and value is: "<<val + 1;
   return 0;
}