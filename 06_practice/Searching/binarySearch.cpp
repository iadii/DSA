#include<bits/stdc++.h>
vector<int> binarySearch(vector<int> arr, int target){
   int s = 0;
   int e = arr.size() - 1;
   int ans = -1;
   while(s <= e){
      int mid = s + (e - s)/2;
      if(arr[mid] == target){
         ans = mid;
         return {ans};
      }
      else if(arr[mid] > target){
         e = mid - 1;
      }
      else {
         s = mid + 1;
      }
   }
   return {ans};
}
int main () {
   vector<int> arr = {10, 20, 30, 40, 50, 60};
   int target = 40;
   vector<int> ans = binarySearch(arr, target);
   cout<<"target elemnt is at index "<<ans[0] <<"and element is "<<arr[ans[0]];
   return 0;
}