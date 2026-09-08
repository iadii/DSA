#include<bits/stdc++.h>
using namespace std;

int pivotElement(vector<int> arr){
   int s = 0;
   int e = arr.size() - 1;
   int ans = -1; 

   if(arr.size() == 1) return 0;

   while(s <= e){
      int mid = s + (e - s)/2;

      if(mid > 0 && arr[mid] <= arr[mid - 1]){
         ans = mid - 1;
         return ans;
      }

      if(mid < e && arr[mid] > arr[mid + 1]){
         ans = mid;
         return ans;
      }

      if(arr[mid] >= arr[s]){
         s = mid + 1;
      }
      else{ 
         e = mid - 1;
      }
   }

   return ans;
}

int binarySearch(vector<int> arr, int target, int s, int e){
   while(s <= e){
      int mid = s + (e - s)/2;

      if(arr[mid] == target){
         return mid; 
      }

      if(target > arr[mid]){
         s = mid + 1;
      }
      else{
         e = mid - 1;
      }
   }

   return -1;
}

int searchInSortedRotated(vector<int> arr, int target){
   int s = 0;
   int e = arr.size() - 1;
   int ans = -1; 

   int pivotIndex = pivotElement(arr);

   if(target >= arr[s] && target <= arr[pivotIndex]){
      ans = binarySearch(arr, target, s, pivotIndex);
   }
   else{
      ans = binarySearch(arr, target, pivotIndex + 1, e);
   }

   return ans; 
}

int main () {
   vector<int> arr = {12, 14, 16, 2, 4, 6, 8, 10};

   int pivot = pivotElement(arr);
   int ans = searchInSortedRotated(arr, 10);

   cout<<"traget elemnt is at index "<<ans<<" and element is "<<arr[ans];

   return 0;
}
