#include<bits/stdc++.h>
vector<int> pivotElement(vector<int> arr){
      int s = 0;
      int end = arr.size() - 1;
      int ans = 0;
      while(s <= end){
         int mid = s + (end - s)/2;
         if(arr[mid] < arr[mid - 1]){
            ans = mid - 1;
            return {ans};
         }
         else if (arr[mid] > arr[mid + 1]){
            ans = mid;
            return {ans};
         }
         else if(arr[mid] < arr[s]){
            end = mid - 1;
         }
         else if(arr[mid] > arr[s]){
            s = mid + 1;
         }
      }
      return {-1};
}
int main () {
   vector<int> arr = {12, 14, 16, 2, 4, 6, 8, 10};
   vector<int> idx = pivotElement(arr);
   cout<<"index of pivot element is: "<<idx[0]<<" and element is: "<<arr[idx[0]];
   return 0;
}