#include<bits/stdc++.h>
int sortColors (vector<int> arr){
    int start = 0, mid = 0;
    int end = arr.size() -1 ;
   while(mid <= end){
      if(arr[mid] == 0){
         swap(arr[start], arr[mid]);
         start++;
         mid++;
      }
      else if(arr[mid] == 1){
         mid++;
      }
      else if(arr[mid] == 2){
         swap(arr[end], arr[mid]);
         end--;
      } 
   }

   for(int nums: arr){
      cout<<nums<<" ";
   }
   return 0;
}
int main () {
   vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 0, 1, 0};

//    we will sort colors using dutch national flag algorithm
   sortColors(arr);
   return 0;
}   
