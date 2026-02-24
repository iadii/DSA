#include<bits/stdc++.h>
int pivotIndex(vector<int> arr){
    int s = 0;
    int end = arr.size() - 1;
    int p = -1;
    while(s <= end){
        int mid = s + (end - s)/ 2;
        if(arr[mid] < arr[mid - 1]){
            p = mid - 1;
            return p;
        }
        else if(arr[mid] > arr[mid + 1]){
            p = mid;
            return p;
        }
        else if(arr[mid] < arr[s]){
            end = mid - 1 ;
        }
        else if (arr[mid] > arr[s]){
            s = mid + 1;
        }
    }
    return p;
}

int binarySeach(vector<int> arr, int s, int e, int target){
    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
    }
    return -1;
}

vector<int> search(vector<int> arr, int target){
   int pidx = pivotIndex(arr);
   int end = arr.size() - 1;
   int ans = -1;
        if((target >= arr[0]) && (target <= arr[pidx])){
             ans = binarySeach(arr, 0, pidx, target);
        }
        else if((target >= arr[pidx + 1]) && (target <= arr[end])){
            ans = binarySeach(arr, pidx+1, end, target);
        }
    return {ans};
}

int main () {
   
   vector<int> arr = {12, 14, 16, 2, 4, 6, 8, 10};
   int target = 8;
   vector<int> idx = search(arr, target);
   cout<<"index of element is: "<<idx[0]<<" and element is: "<<arr[idx[0]];
   return 0;
}