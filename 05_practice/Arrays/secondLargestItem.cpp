#include<bits/stdc++.h>

int secondLargest(vector<int> arr){

    int largest = INT_MIN;
    int secondL = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < largest && arr[i] > secondL){
            secondL = arr[i];
        }
    }
    return secondL;
}

int main () {
   vector<int> num = {
    2, 7, 34, 21, 5, 8, 19, 3, 45, 27, 10, 16, 6, 38, 2
   };

   int val = secondLargest(num);
   cout<<"Second largest item is: "<<val;
   return 0;
}