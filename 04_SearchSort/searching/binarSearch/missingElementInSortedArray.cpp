#include<bits/stdc++.h>
int missingElement(vector<int> arr){
    int start = 0;
    // int end = arr.size() - 1;
    int end = arr.size();
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] - mid == 1){ 
            // given element starts with 1
            // index of an array starts with 0
            // so till missing elemnt difference between index and element willn be 1
            // if difference between index and element is element
            // then we need to move to right side of mid since there is no missing element till here
            start = mid + 1;
        }
        else if(arr[mid] - mid > 1){
            // if difference between index and element is greater than 1
            // then either that index should have hold missing element
            // or left of it means no need to search right of that mid
            ans = mid;
            end = mid - 1;
        }

    }
    if (ans == -1) {
        // All elements are present, missing one is at the end
        return arr.size() + 1;
    }
    return ans;
}
int main () {
    // vector<int> arr = {1,2,3,4,6,7,8,9};

    // our code is handling every case but got crashed in case of last element 
    vector<int> arr = {1,2,3,4,5,6,7,8};

    int index = missingElement(arr);
    cout<<"missing element should be at index "<<index <<" and element is "<<arr[index] -1;
   
   return 0;
}