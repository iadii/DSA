#include<bits/stdc++.h>
vector<int> binarySearch(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    while(s <= e ){
        int mid = (s + e) >> 1;
        if(arr[mid] == target ){
            return { mid };
        }
        else if (arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return { -1 };
}
int main () {
   vector <int> arr = {10, 20, 30, 40, 50, 60};
   vector<int> idx = binarySearch(arr,50);
   
   cout<<"item found at index: "<<idx[0]<<" and value is: "<<arr[idx[0]];
   return 0;
}