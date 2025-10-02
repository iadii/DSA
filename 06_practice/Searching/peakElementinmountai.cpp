// peak element in mountain in O(logn)
#include<bits/stdc++.h>
int peakElement(vector<int> arr){

    int start = 0;
    int end = arr.size() -1;

    while(start < end){

        int mid = start + (end - start) /2;
         if(arr[mid] < arr[mid + 1]){

            start = mid + 1;
         }
         else {
            end = mid;
         }
    }
    return end;
}
int main () {
   
    // vector<int> arr = {0,10,5,2};
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};

    int value = peakElement(arr);
    cout<<"peak Element is "<<arr[value];
   return 0;
} 
