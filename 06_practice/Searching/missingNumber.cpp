#include<bits/stdc++.h>
int missingNum (vector<int> arr){
    int start = 0;
    int end = arr.size() -1;
    while(start < end){
        int mid = start + (end - start) /2;

        if(arr[mid] - mid == 1){
            start = mid +1;
        }
        else{
            end = mid;
        }
    }
    return end;
}
int main () {
   
    vector<int> arr = {
        1, 2, 3, 4, 5, 7, 8
    };

    int index = missingNum(arr);
    cout<< "missing number is at index: "<<index;
   return 0;
}