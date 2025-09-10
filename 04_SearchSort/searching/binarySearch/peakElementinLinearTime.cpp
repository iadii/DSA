// O(n) time
#include<bits/stdc++.h>
int peakElement(vector<int> arr){

    int size = arr.size();
    for(int i = 0; i < size; i++){
        if(((arr[i] == 0) || arr[i-1] < arr[i] && ((arr[i] == size -1) || arr[i] > arr[i+1]))){

            return i;
        }
    }
    return -1;
}
int main () {
   
    vector<int> arr = {10, 20, 30, 50, 40};
    int index = peakElement(arr);
    cout<<"peak element is: "<<arr[index];
   return 0;
}