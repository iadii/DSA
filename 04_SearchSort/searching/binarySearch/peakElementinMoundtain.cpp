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
            // there will only 2 condition 
            // either i == i+1 or i > i+1(in peak we dont need to worry about i == i+ 1)
            // if i > i+1 and already checked i > i-1 (by iteration)
            // so we will return that element
            end = mid;
         }
    }
    return end;
}
int main () {
   
    vector<int> arr = {0,10,5,2};

    int value = peakElement(arr);
    cout<<"peak Element is "<<arr[value];
   return 0;
} 