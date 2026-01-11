#include<bits/stdc++.h>
vector<int> missigElement(vector<int> arr){
    
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) /2;

        if(arr[mid] - mid == 1){
            start = mid + 1;
        }
        else if(arr[mid] - mid > 1){
            ans = mid;
            end = mid - 1;
        }
    }
    return { ans };
}
int main () {
     vector<int> arr = {1,2,3,4,6,7,8};

    vector<int> index = missigElement(arr);
    int missingValue = index[0] + 1;  
    cout << "Missing element should be at index " << index[0] << " and element is " << missingValue;
   
   return 0;
}