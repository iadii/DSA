#include<bits/stdc++.h>
int bubbleSort(vector<int> arr){
    int n = arr.size();
    bool swapped;
    for(int i = 0; i < n - 1; i++){
        swapped = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
int main () {
   vector<int> arr = {5,4,3,2,1};
   bubbleSort(arr);
   return 0;
}