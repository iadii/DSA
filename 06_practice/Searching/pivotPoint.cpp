#include<bits/stdc++.h>
vector<int> pivotElement(vector<int> arr){
   int s = 0;
   int e = arr.size() - 1;
   int ans = -1; 
   if(arr.size() == 1) return 0;
   while(s <= e){
    int mid = s + (e - s)/2;
    if(arr[mid] <= arr[mid - 1]){
        ans = mid -1 ;
        return {ans};
    }
     if(arr[mid] > arr[mid + 1]){
        ans = mid;
        return {ans};
    }
     if(arr[mid] > arr[s]){
        s = mid + 1;
    }
    else if(arr[mid] < arr[s]){ 
        e = mid - 1;
    }
   }
   return {ans};
}
int main () {
   vector<int> arr = {12, 14, 16, 2, 4, 6, 8, 10};
   vector<int> ans = pivotElement(arr);
   cout<<"pivotted elemnt is at index "<<ans[0] <<"and element is "<<arr[ans[0]];
   return 0;
}